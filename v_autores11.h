#ifndef V_AUTORES11_H
#define V_AUTORES11_H

#include <QtCore>
#include <QMainWindow>

namespace Ui {
class v_autores11;
}

class v_autores11 : public QMainWindow
{
    Q_OBJECT

public:
    explicit v_autores11(QWidget *parent = 0);
    ~v_autores11();

private slots:


    void on_btRegresar_clicked();

private:
    Ui::v_autores11 *ui;
};

#endif // V_AUTORES11_H
