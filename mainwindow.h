#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "v_visualizador.h"
#include "v_autores11.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_btVentanaVis_clicked();
    void on_pushButton_clicked();
    void on_btAutores_clicked();

private:
    Ui::MainWindow *ui;
    v_visualizador *v2;
    v_autores11    *vma;
};

#endif // MAINWINDOW_H
