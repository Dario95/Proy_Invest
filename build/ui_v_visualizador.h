/********************************************************************************
** Form generated from reading UI file 'v_visualizador.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V_VISUALIZADOR_H
#define UI_V_VISUALIZADOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_v_visualizador
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame;
    QLabel *lbwiffi;
    QLabel *lbwifiOn;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gbComunicacion;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lbDirecIP;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leDireccionIP;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pbConectar;
    QLabel *lb_Conectar;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pbDesconectar;
    QLabel *lbDesconectar;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QFrame *frame_2;
    QVTKWidget *qvtkWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btRegresar;
    QLabel *lbRegresar;
    QSpacerItem *horizontalSpacer_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *v_visualizador)
    {
        if (v_visualizador->objectName().isEmpty())
            v_visualizador->setObjectName(QString::fromUtf8("v_visualizador"));
        v_visualizador->resize(306, 556);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(114, 159, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush2(QColor(233, 235, 231, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(105, 107, 103, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(141, 143, 138, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        QBrush brush7(QColor(211, 215, 207, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        v_visualizador->setPalette(palette);
        v_visualizador->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        centralwidget = new QWidget(v_visualizador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(110, 150));
        frame->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbwiffi = new QLabel(frame);
        lbwiffi->setObjectName(QString::fromUtf8("lbwiffi"));
        lbwiffi->setGeometry(QRect(80, 10, 101, 101));
        lbwiffi->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/wifioff.png")));
        lbwiffi->setScaledContents(true);
        lbwifiOn = new QLabel(frame);
        lbwifiOn->setObjectName(QString::fromUtf8("lbwifiOn"));
        lbwifiOn->setGeometry(QRect(80, 10, 101, 101));
        lbwifiOn->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/wifion.png")));
        lbwifiOn->setScaledContents(true);

        verticalLayout_7->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        gbComunicacion = new QGroupBox(centralwidget);
        gbComunicacion->setObjectName(QString::fromUtf8("gbComunicacion"));
        QPalette palette1;
        QBrush brush8(QColor(32, 74, 135, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        gbComunicacion->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Light"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        gbComunicacion->setFont(font);
        gbComunicacion->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 74, 135);\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        gridLayout_2 = new QGridLayout(gbComunicacion);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lbDirecIP = new QLabel(gbComunicacion);
        lbDirecIP->setObjectName(QString::fromUtf8("lbDirecIP"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush9(QColor(190, 190, 190, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        lbDirecIP->setPalette(palette2);
        QFont font1;
        font1.setPointSize(14);
        lbDirecIP->setFont(font1);
        lbDirecIP->setTextFormat(Qt::AutoText);
        lbDirecIP->setScaledContents(false);
        lbDirecIP->setAlignment(Qt::AlignCenter);
        lbDirecIP->setWordWrap(true);

        horizontalLayout->addWidget(lbDirecIP);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        leDireccionIP = new QLineEdit(gbComunicacion);
        leDireccionIP->setObjectName(QString::fromUtf8("leDireccionIP"));
        QFont font2;
        font2.setPointSize(14);
        font2.setItalic(true);
        leDireccionIP->setFont(font2);
        leDireccionIP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        leDireccionIP->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(leDireccionIP);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pbConectar = new QPushButton(gbComunicacion);
        pbConectar->setObjectName(QString::fromUtf8("pbConectar"));
        pbConectar->setMinimumSize(QSize(110, 0));
        QPalette palette3;
        QBrush brush10(QColor(138, 226, 52, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        pbConectar->setPalette(palette3);
        QFont font3;
        font3.setPointSize(13);
        pbConectar->setFont(font3);
        pbConectar->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);\n"
"border-width: 5px;\n"
"border-radius: 10px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/conectar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbConectar->setIcon(icon);
        pbConectar->setIconSize(QSize(60, 50));

        verticalLayout_4->addWidget(pbConectar);

        lb_Conectar = new QLabel(gbComunicacion);
        lb_Conectar->setObjectName(QString::fromUtf8("lb_Conectar"));
        QPalette palette4;
        QBrush brush11(QColor(115, 210, 22, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        lb_Conectar->setPalette(palette4);
        lb_Conectar->setFont(font1);
        lb_Conectar->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lb_Conectar);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pbDesconectar = new QPushButton(gbComunicacion);
        pbDesconectar->setObjectName(QString::fromUtf8("pbDesconectar"));
        pbDesconectar->setEnabled(false);
        pbDesconectar->setMinimumSize(QSize(110, 0));
        pbDesconectar->setFont(font3);
        pbDesconectar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width: 5px;\n"
"border-radius: 10px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/disconneected.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDesconectar->setIcon(icon1);
        pbDesconectar->setIconSize(QSize(50, 50));

        verticalLayout_5->addWidget(pbDesconectar);

        lbDesconectar = new QLabel(gbComunicacion);
        lbDesconectar->setObjectName(QString::fromUtf8("lbDesconectar"));
        QPalette palette5;
        QBrush brush12(QColor(136, 138, 133, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        lbDesconectar->setPalette(palette5);
        lbDesconectar->setFont(font1);
        lbDesconectar->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbDesconectar);


        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_6->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);


        verticalLayout_7->addWidget(gbComunicacion);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        gridLayout_4->addLayout(verticalLayout_7, 0, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        qvtkWidget = new QVTKWidget(frame_2);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(-110, 0, 1200, 704));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy);
        qvtkWidget->setMinimumSize(QSize(640, 480));
        qvtkWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 87, 83);"));

        gridLayout_4->addWidget(frame_2, 0, 1, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btRegresar = new QPushButton(centralwidget);
        btRegresar->setObjectName(QString::fromUtf8("btRegresar"));
        btRegresar->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-style: solid;\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenes/retroceso-rapido(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btRegresar->setIcon(icon2);
        btRegresar->setIconSize(QSize(60, 60));

        verticalLayout_2->addWidget(btRegresar);

        lbRegresar = new QLabel(centralwidget);
        lbRegresar->setObjectName(QString::fromUtf8("lbRegresar"));
        QPalette palette6;
        QBrush brush13(QColor(52, 101, 164, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbRegresar->setPalette(palette6);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        lbRegresar->setFont(font4);
        lbRegresar->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbRegresar);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 2, 1);

        v_visualizador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(v_visualizador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 306, 25));
        v_visualizador->setMenuBar(menubar);
        statusbar = new QStatusBar(v_visualizador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        v_visualizador->setStatusBar(statusbar);

        retranslateUi(v_visualizador);

        QMetaObject::connectSlotsByName(v_visualizador);
    } // setupUi

    void retranslateUi(QMainWindow *v_visualizador)
    {
        v_visualizador->setWindowTitle(QApplication::translate("v_visualizador", "Visualizador", 0, QApplication::UnicodeUTF8));
        lbwiffi->setText(QString());
        lbwifiOn->setText(QString());
        gbComunicacion->setTitle(QString());
        lbDirecIP->setText(QApplication::translate("v_visualizador", "Direcci\303\263n \n"
" Servidor", 0, QApplication::UnicodeUTF8));
        leDireccionIP->setText(QApplication::translate("v_visualizador", "172.31.99.22", 0, QApplication::UnicodeUTF8));
        pbConectar->setText(QString());
        lb_Conectar->setText(QApplication::translate("v_visualizador", "Conectar", 0, QApplication::UnicodeUTF8));
        pbDesconectar->setText(QString());
        lbDesconectar->setText(QApplication::translate("v_visualizador", "Desconectar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btRegresar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        btRegresar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        btRegresar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        btRegresar->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btRegresar->setText(QString());
        btRegresar->setShortcut(QString());
        lbRegresar->setText(QApplication::translate("v_visualizador", "Atr\303\241s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class v_visualizador: public Ui_v_visualizador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V_VISUALIZADOR_H
