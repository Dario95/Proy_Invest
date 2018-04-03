#ifndef V_VISUALIZADOR_H
#define V_VISUALIZADOR_H

#include <QtCore>
#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QMutex>
#include <thread>
#include <iostream>
#include <mutex>
#include <stdexcept>
#include <ctime>
#include <atomic>
#include "threadcliente.h"

// Point Cloud Library
#include <iostream>
#include <boost/thread/thread.hpp>
#include <pcl/common/common_headers.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/ply_io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/filter.h>
#include <pcl/visualization/pcl_visualizer.h>

#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <opencv2/opencv.hpp>

// Boost
#include <boost/math/special_functions/round.hpp>

// Visualization Toolkit (VTK)
#include <vtkRenderWindow.h>
#include <atomic>


typedef pcl::PointCloud<pcl::PointXYZRGBA> PointCloudT;
typedef pcl::PointCloud<pcl::PointXYZRGB> TipoXYZRGB;

namespace Ui {
class v_visualizador;
}

class ThreadCliente;

class v_visualizador : public QMainWindow
{
    Q_OBJECT

public:
    explicit v_visualizador(QWidget *parent = 0);
    ~v_visualizador();
    bool comenzar;
    bool cambio;
    bool ch_puntocercano;
    int num_puntos;
    std::mutex *mutex;
    QTimer *tim;
    std::mutex mutex_input;
    std::vector<short> buffer_x_1;
    std::vector<short> *buffer_x;
    std::vector<short> *buffer_y;
    std::vector<short> *buffer_z;
    std::vector<float> *buffer_color;
    volatile bool procesando_nube;
    volatile bool nube_ready;
    int num_actualizaciones;
    int radio;
    int theta;
    int fi;
    qreal pi=3.1416;
    int num_x;
    int num_y;
    int num_z;

    std::atomic<bool> inicio_conex;     //Permite reconocer cuando la interfaz comienza la comunicacion
    std::atomic<bool> req_datos;        //Guarda los datos en buffers estaticos
    std::atomic<bool> datos_ready;     //Permite reconocer que los buffers estaticos han sido cargados por completo
    std::atomic<bool> salir;
    std::vector<unsigned char> imagen_ROI;
    std::atomic<unsigned char *> im_iz;

    std::atomic<int> item;


    TipoXYZRGB::Ptr cloudb;
    TipoXYZRGB::Ptr punto_cercano;

    std::atomic<float *> color;
    std::vector<unsigned char> *buffer_imagen;
    int N;

   int width;
   int height;
   size_t size_im;
   char key;
    //void cargar_red();
    void detectar(cv::Mat img);
protected:

signals:
    void datos();

private slots:
    void on_btRegresar_clicked();
    void on_pbConectar_clicked();
    void on_pbDesconectar_clicked();
    void showTime();
    void actualiza_proceso();
    void pasar_mat(std::vector<unsigned char> &imagen, cv::Mat im);


private:
    Ui::v_visualizador *ui;
    ThreadCliente *mThread;
    QTimer *tim_act;
    QPalette *Pconectar;
    QPalette *Pdesconectar;
    QPalette *Pdeshabiliatdo;

};

#endif // V_VISUALIZADOR_H
