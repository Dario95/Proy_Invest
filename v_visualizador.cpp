#include "v_visualizador.h"
#include "ui_v_visualizador.h"
#include "mainwindow.h"
#include "darknet_wrapper/wrapper_cpp.h"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

//Puntero de pagina principal
MainWindow *v1;
int hits;

char* cfg_path;
char* weights_path;

// apply the detector to an image file
char* filename;

float thresh;

box** outboxes;
float** outprobs;
int** outclasses;
//char*** outclasschar = new char**;


v_visualizador::v_visualizador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::v_visualizador)
{
    ui->setupUi(this);
    this->setWindowTitle ("Visualizador del area de interes");

    width=672;
    height=376;

    N=width*height;
    size_im=4*N*sizeof(uchar);

    color = (float*)malloc(N * sizeof(float));
    im_iz = (uchar*)malloc(size_im);


    key='a';

    comenzar=false;
    cambio=false;
    ch_puntocercano=false;
    num_actualizaciones=0;

    //Definicion de colores
    Pconectar= new QPalette();
    Pconectar->setColor(QPalette::WindowText,QColor::fromRgb(138, 226, 52));
    Pdesconectar= new QPalette();
    Pdesconectar->setColor(QPalette::WindowText,QColor::fromRgb(245, 121, 0));
    Pdeshabiliatdo= new QPalette();
    Pdeshabiliatdo->setColor(QPalette::WindowText,QColor::fromRgb(136, 138, 133));

    ui->lbwiffi->setVisible(true);
    ui->lbwifiOn->setVisible(false);

    //CONECCION CON EL SERVIDOR
    mThread=new ThreadCliente(this);
    //Inicializacion de requerimiento
    mThread->actualReq=0;
    //Obtencion de valor inicial de direccion ip
    mThread->IP=ui->leDireccionIP->text();

    salir.store(false);
    inicio_conex.store(false);
    req_datos.store(false);
    datos_ready.store(false);


    mThread->im_iz=&im_iz;
    mThread->salir=&salir;
    mThread->color=&color;
    mThread->inicio_conex=&inicio_conex;
    mThread->req_datos=&req_datos;
    mThread->datos_ready=&datos_ready;
    mutex=&mThread->mutex;
    mThread->start();

    //Cargar RED

    cfg_path = "test/yolo.cfg";
    weights_path = "test/yolo.weights";

    // apply the detector to an image file
    filename="test/dog.jpg";

    thresh = 0.4;

    outboxes = new box*;
    outprobs = new float*;
    outclasses = new int*;
    Darknet::getInstance(cfg_path, weights_path).darknet_detect_file(filename, thresh, &hits, outboxes, outprobs, outclasses);



    //Timer Actualizacion de Datos
    tim_act=new QTimer(this);
    connect(tim_act, SIGNAL(timeout()),this,SLOT(actualiza_proceso()),Qt::QueuedConnection);


    //Palpito de Wifi;
    tim=new QTimer(this);
    connect(tim, SIGNAL(timeout()),this,SLOT(showTime()));



}

v_visualizador::~v_visualizador()
{
    salir.store(true);
    free(color);
    free(im_iz);
    free((*outboxes));
    free((*outprobs));
    free((*outclasses));
    while(mThread->isRunning());
    delete ui;

}

void v_visualizador::on_btRegresar_clicked()
{
    salir.store(true);
    free(color);
    free(im_iz);
    free((*outboxes));
    free((*outprobs));
    free((*outclasses));
    while(mThread->isRunning());
    //mThread->terminate();
    this->close();
    v1=new MainWindow(this);
    v1->show();
}


void v_visualizador::on_pbConectar_clicked()
{
    tim_act->start(500);
    tim->start(700);



    mThread->IP=ui->leDireccionIP->text();
    comenzar=true;
    //boton regresar
    ui->btRegresar->setVisible(false);
    ui->lbRegresar->setVisible(false);
    //Direccion IP
    ui->leDireccionIP->setEnabled(false);
    ui->leDireccionIP->setStyleSheet("background-color:rgb(136, 138, 133);");
    //Grupos
    inicio_conex.store(true);
    //Boton Conectar
    ui->pbConectar->setEnabled(false);
    ui->pbConectar->setStyleSheet("background-color:black;");
    //Boton Desconectar
    ui->pbDesconectar->setEnabled(true);
    ui->pbDesconectar->setStyleSheet("background-color: rgb(245, 121, 0);");
    //Cambio coloresLabel
    ui->lbDesconectar->setPalette(*Pdesconectar);
    ui->lb_Conectar->setPalette(*Pdeshabiliatdo);
}

void v_visualizador::on_pbDesconectar_clicked()
{
    //cerrar_socket.store(true);
    tim_act->stop();
    tim->stop();
    //Boton regresar
    ui->btRegresar->setVisible(true);
    ui->lbRegresar->setVisible(true);
    //Direccion IP
    ui->leDireccionIP->setEnabled(true);
    ui->leDireccionIP->setStyleSheet("background-color:white;");
    //Grupos
    inicio_conex.store(false);
    //Boton Conectar
    ui->pbConectar->setEnabled(true);
    ui->pbConectar->setStyleSheet("background-color: rgb(138, 226, 52);");
    //Boton Desconectar
    ui->pbDesconectar->setEnabled(false);
    ui->pbDesconectar->setStyleSheet("background-color:black;");
    //Imagenwifi
    comenzar=false;
    ui->lbwiffi->setVisible(true);
    ui->lbwifiOn->setVisible(false);

    ui->lbDesconectar->setPalette(*Pdeshabiliatdo);
    ui->lb_Conectar->setPalette(*Pconectar);
}
void v_visualizador::showTime()
{
    if(comenzar==true)
    {
        if(cambio==true)
        {
            ui->lbwiffi->setVisible(true);
            ui->lbwifiOn->setVisible(false);
            cambio=false;
        }
        else
        {
            ui->lbwiffi->setVisible(false);
            ui->lbwifiOn->setVisible(true);
            cambio=true;

        }
    }
}




//Visualizacion de nube

void v_visualizador::actualiza_proceso()
{
    if(comenzar==true)

    {
       cv::Mat imagen(height, width, CV_8UC4,im_iz, (width) * 4 * sizeof (uchar));
       memcpy(imagen.data, im_iz, width * height * 4 * sizeof (uchar));
       detectar(imagen);
       //cv::imshow("Imagen izquierda", imagen);

    }
}


void v_visualizador::pasar_mat(std::vector<unsigned char> &imagen, cv::Mat im)
{
    for(int j = 0; j < width*4; j++)
        for(int i = 0; i < height; i+=4)
        {
          /*  im.at<unsigned char>(j,i)=0;
            im.at<unsigned char>(j,i+1)=255;
            im.at<unsigned char>(j,i+2)=0;
            im.at<unsigned char>(j,i+3)=255;*/
            im.at<unsigned char>(i,j)=imagen[4*width*j+i];
            im.at<unsigned char>(i,j+1)=imagen[4*width*j+i+1];
            im.at<unsigned char>(i,j+2)=imagen[4*width*j+i+2];
            im.at<unsigned char>(i,j+3)=imagen[4*width*j+i+3];
            /*qDebug()<<imagen[4*width*j+i];
            qDebug()<<imagen[4*width*j+i+1];
            qDebug()<<imagen[4*width*j+i+2];
            qDebug()<<imagen[4*width*j+i+3];*/
        }

}




void v_visualizador::detectar(cv::Mat img){


    // apply the detector to an opencv mat
    //cv::Mat3b img= cv::imread("test/dog.jpg", cv::IMREAD_UNCHANGED);
    //cv::Mat3b img= imagen;
    if(!img.data){
        cout<<"couldn't load the test image"<<endl;
    }

    // the detector expects an IplImage
    IplImage convertedImage = img;

    // this is the second time you use the singleton
    // the network object is already created, no need to provide config files
    // if you would provide such files, they would be ignored
    Darknet::getInstance().darknet_detect_img(&convertedImage, thresh, &hits, outboxes, outprobs, outclasses);

    //cout<<"hits: "<<hits<<endl;
    for (int i = 0; i < hits; i++) {
        box hitbox = (*outboxes)[i];
        //std::string
        int label = (*outclasses)[i];
        float prob = (*outprobs)[i];
        //cout<<"Clase-"<<label<<":"<<(prob * 100)<<endl;
        // calculate coordinates of bounding box
        // yolo returns the center of the bbox
        float x, y, w, h;
        x = hitbox.x - hitbox.w / 2;
        y = hitbox.y - hitbox.h / 2;
        w = hitbox.w;
        h = hitbox.h;
        //int posx={x,y};
        //int posy={x+w, y+h};
        cv::rectangle(img, {x,y}, {x+w, y+h}, {0,0,255}, 3);

        //cv::putText(img, label+"", {x,y}, {x+w, y+h},font,4, {255,255,255}, 3,cv.LINE_AA );
        //std::string text = std::to_string(label);
        //cv::putText(img, label, cvPoint(x, y),cv::FONT_HERSHEY_COMPLEX_SMALL, 0.8, cvScalar(0,0,0), 1);
    }

    cv::imshow("rectangles in output", img);
    //cv::waitKey(1);


}


