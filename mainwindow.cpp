#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
    this->setWindowTitle ("Visualizador Remoto");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btVentanaVis_clicked()
{
    v2=new v_visualizador(this);
    this->close();
    v2->show();

}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    exit(0);
}



void MainWindow::on_btAutores_clicked()
{
    vma=new v_autores11(this);
    this->close();
    vma->show();
}
