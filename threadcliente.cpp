#include "threadcliente.h"
#include <QDebug>
#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include "v_visualizador.h"

//Puntero de pagina principal
v_visualizador *vv1;
using boost::asio::ip::tcp;


ThreadCliente::ThreadCliente(QObject *parent) : QThread(parent)
{


}

void ThreadCliente::run()
{
    while(salir->load()==false)
    {
        if(inicio_conex->load()==true)
        {
            //qDebug()<<inicio_conex;
            try
            {
                //qDebug()<<"Running"<<IP;
                boost::asio::io_service io_service;
                tcp::resolver resolver(io_service);
                tcp::resolver::query query(IP.toStdString(), "webmin");
                tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
                //tcp::resolver::iterator end;

                tcp::socket socket(io_service);
                boost::asio::connect(socket, endpoint_iterator);
                boost::system::error_code error;

                //qDebug()<< "Reqrimiento: "<<actualReq;
                boost::system::error_code ignored_error;
                boost::asio::write(socket, boost::asio::buffer(&actualReq, sizeof(int)), ignored_error);

                //Recepcion de DATOS
                std::vector<int> num(2);
                boost::asio::read(socket,boost::asio::buffer(num), error); //Leer # puntos
                //qDebug()<<"NUMERO"<<num[0];
                std::vector<float> buffer_color1_asio(num[0]*num[1]);

                boost::asio::read(socket,boost::asio::buffer(buffer_color1_asio), error);   //Leer rgb

                crear_imagen(buffer_color1_asio, *im_iz,num[1]*num[0]);

            }
            catch (std::exception& e)
             {
                std::cerr << e.what() << std::endl;
             }
        }
    }
}


void ThreadCliente::crear_imagen(std::vector<float>  &color, unsigned char* imagen, int N)
{
    for (int i = 0; i < N; i++)
    {
         uint32_t color_uint = *(uint32_t*) & color[i];
         unsigned char* color_uchar = (unsigned char*) &color_uint;

        if((*(color_uchar+0)==0)&&(*(color_uchar+1)==0)&&(*(color_uchar+2)==0)&&(*(color_uchar+3)==0))
        {
         imagen[4*i]= 250;   //blue
         imagen[4*i+1]=250;  //green
         imagen[4*i+2]=250;  //red
         imagen[4*i+3]=255 ;
        }
        else
        {
         imagen[4*i]= color_uchar[2];   //blue
         imagen[4*i+1]=color_uchar[1];  //green
         imagen[4*i+2]=color_uchar[0];  //red
         imagen[4*i+3]=255;
        }
    }
}


