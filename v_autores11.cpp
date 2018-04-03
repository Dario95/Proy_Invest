#include "v_autores11.h"
#include "ui_v_autores11.h"

#include "mainwindow.h"

//Puntero de pagina principal
MainWindow *vp;

v_autores11::v_autores11(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::v_autores11)
{
    ui->setupUi(this);
    this->setWindowTitle ("Ventana de autores");
}

v_autores11::~v_autores11()
{
    delete ui;
}


void v_autores11::on_btRegresar_clicked()
{
    this->close();
    vp=new MainWindow(this);
    vp->show();
}
