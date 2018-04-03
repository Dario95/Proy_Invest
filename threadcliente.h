#ifndef THREADCLIENTE_H
#define THREADCLIENTE_H

#include <QThread>
#include <mutex>
#include <QMutex>

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
#include <atomic>
#include <condition_variable>


typedef pcl::PointCloud<pcl::PointXYZRGBA> PointCloudT;
typedef pcl::PointCloud<pcl::PointXYZRGB> TipoXYZRGB;

class ThreadCliente : public QThread
{
    Q_OBJECT
public:
    explicit ThreadCliente(QObject *parent = nullptr);
    //~ThreadCliente();
    int actualReq;                  //Requerimiento seleccionado en la interfaz

    std::mutex mutex;               //Bloqueo de buffer
    QString IP;                     //Direccion Ip ingresada en interfaz


    std::vector<float> buffer_color;

    std::atomic<float *> *color;
    std::atomic<unsigned char *> *im_iz;

    std::atomic<bool> *inicio_conex;     //Permite reconocer cuando la interfaz comienza la comunicacion
    std::atomic<bool> *req_datos;        //Guarda los datos en buffers estaticos
    std::atomic<bool> *datos_ready;     //Permite reconocer que los buffers estaticos han sido cargados por completo
    std::atomic<bool> *salir;

    void crear_imagen(std::vector<float>  &color, unsigned char* imagen, int N);

signals:

protected:
    void run();


};

#endif // THREADCLIENTE_H
