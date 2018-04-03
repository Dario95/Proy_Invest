/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbEPN;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lbFaculta;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QLabel *lbTituloProy;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btVentanaVis;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btAutores;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(931, 504);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/epn2.png")));
        label->setScaledContents(false);

        horizontalLayout_5->addWidget(label);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lbEPN = new QLabel(centralWidget);
        lbEPN->setObjectName(QString::fromUtf8("lbEPN"));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 87, 83, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbEPN->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Serif"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        lbEPN->setFont(font);
        lbEPN->setMouseTracking(false);
        lbEPN->setStyleSheet(QString::fromUtf8("border-color: rgb(78, 154, 6);"));
        lbEPN->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbEPN);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        lbFaculta = new QLabel(centralWidget);
        lbFaculta->setObjectName(QString::fromUtf8("lbFaculta"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbFaculta->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Serif"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        lbFaculta->setFont(font1);
        lbFaculta->setMouseTracking(false);
        lbFaculta->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbFaculta);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_6->addLayout(verticalLayout_3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        lbTituloProy = new QLabel(centralWidget);
        lbTituloProy->setObjectName(QString::fromUtf8("lbTituloProy"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbTituloProy->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Serif"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        lbTituloProy->setFont(font2);
        lbTituloProy->setMouseTracking(false);
        lbTituloProy->setContextMenuPolicy(Qt::DefaultContextMenu);
        lbTituloProy->setStyleSheet(QString::fromUtf8(""));
        lbTituloProy->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbTituloProy);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_5->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Serif"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btVentanaVis = new QPushButton(centralWidget);
        btVentanaVis->setObjectName(QString::fromUtf8("btVentanaVis"));
        btVentanaVis->setEnabled(true);
        btVentanaVis->setAutoFillBackground(false);
        btVentanaVis->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-width: 15px;\n"
"border-radius: 15px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/impresora-3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        btVentanaVis->setIcon(icon);
        btVentanaVis->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(btVentanaVis);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette4;
        QBrush brush3(QColor(48, 140, 198, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_2->setPalette(palette4);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btAutores = new QPushButton(centralWidget);
        btAutores->setObjectName(QString::fromUtf8("btAutores"));
        btAutores->setStyleSheet(QString::fromUtf8("background-color: rgb(201, 142, 53);\n"
"border-style: solid;\n"
"border-width: 15px;\n"
"border-radius: 15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/equipo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btAutores->setIcon(icon1);
        btAutores->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(btAutores);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette5;
        QBrush brush4(QColor(201, 142, 53, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_6->setPalette(palette5);
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 15px;\n"
"border-radius: 15px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenes/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette6;
        QBrush brush5(QColor(186, 189, 182, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_3->setPalette(palette6);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbEPN->setText(QApplication::translate("MainWindow", "ESCUELA POLIT\303\211CNICA NACIONAL ", 0, QApplication::UnicodeUTF8));
        lbFaculta->setText(QApplication::translate("MainWindow", "PROYECTO MULTIDISCIPLINARIO PIMI 15-12", 0, QApplication::UnicodeUTF8));
        lbTituloProy->setText(QApplication::translate("MainWindow", "Navegaci\303\263n asistida para no videntes a trav\303\251s de \n"
"realidad  virtual  ac\303\272stica  y  sistemas  sensoriales  de  proximidad", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "INTERFAZ REMOTA", 0, QApplication::UnicodeUTF8));
        btVentanaVis->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Comenzar", 0, QApplication::UnicodeUTF8));
        btAutores->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Autores", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
