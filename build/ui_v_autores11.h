/********************************************************************************
** Form generated from reading UI file 'v_autores11.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V_AUTORES11_H
#define UI_V_AUTORES11_H

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
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_v_autores11
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QPushButton *btRegresar;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *v_autores11)
    {
        if (v_autores11->objectName().isEmpty())
            v_autores11->setObjectName(QString::fromUtf8("v_autores11"));
        v_autores11->resize(1491, 841);
        v_autores11->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 156, 127);"));
        centralwidget = new QWidget(v_autores11);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(181, 201));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 121, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/jona.jpg")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(frame_2);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));

        horizontalLayout_2->addWidget(textEdit_2);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btRegresar = new QPushButton(centralwidget);
        btRegresar->setObjectName(QString::fromUtf8("btRegresar"));
        btRegresar->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-style: solid;\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/retroceso-rapido(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btRegresar->setIcon(icon);
        btRegresar->setIconSize(QSize(60, 60));

        verticalLayout->addWidget(btRegresar);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette;
        QBrush brush(QColor(52, 101, 164, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(175, 156, 127, 255));
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
        label_3->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(800, 50));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette1;
        QBrush brush3(QColor(238, 238, 236, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(46, 52, 54, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_4->setPalette(palette1);
        QFont font1;
        font1.setPointSize(12);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        gridLayout_2->addLayout(horizontalLayout_4, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(181, 201));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-width: 5px;\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 141, 181));
        label->setMinimumSize(QSize(141, 0));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/diego.jpg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(frame);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));

        horizontalLayout->addWidget(textEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        v_autores11->setCentralWidget(centralwidget);
        menubar = new QMenuBar(v_autores11);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1491, 22));
        v_autores11->setMenuBar(menubar);
        statusbar = new QStatusBar(v_autores11);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        v_autores11->setStatusBar(statusbar);

        retranslateUi(v_autores11);

        QMetaObject::connectSlotsByName(v_autores11);
    } // setupUi

    void retranslateUi(QMainWindow *v_autores11)
    {
        v_autores11->setWindowTitle(QApplication::translate("v_autores11", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        textEdit_2->setHtml(QApplication::translate("v_autores11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Jonathan Vargas</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Naci\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Quito-Ecuador</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">1993.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Realiz\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">estudios</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">secundarios</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-siz"
                        "e:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">el</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Instituto</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Nacional</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Mej\303\255a.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Es</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">parte</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">del</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Club</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Rob\303\263tica</span><span style=\" font-size:"
                        "12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">la</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Escuela</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">politecnica</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Nacional</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">desde</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">2014.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Finaliz\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">estudios</span><span style=\" font-size"
                        ":12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Ingenier\303\255a</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Electr\303\263nica</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">y</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Control</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">dicha</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">instituci\303\263n</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">2017</span><span style=\""
                        " font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">y</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">se</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">encuentra</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">realizando</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">su</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">proyecto</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">tesis.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Actualemente</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">forma</span><span style=\" font-si"
                        "ze:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">parte</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">del</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">proyecto</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">investigaci\303\263n</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">PIMI</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">15-12</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">la</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">EPN</span><span style=\" font-size:12pt; co"
                        "lor:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">donde</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">es</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">asistente</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">investigaci\303\263n.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">principales</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">intereses</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">son:</span><span style=\" font-size:12pt; color:#c0c0c0;\">  </span><span style=\" font-size:12pt;\">visi\303\263n</span><span style=\" fon"
                        "t-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">artificial,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sistemas</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">embebidos,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">software</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">libre,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">rob\303\263tica,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">automatizaci\303\263n,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">control</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">industrial</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:"
                        "12pt;\">y</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">potencia.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btRegresar->setText(QString());
        label_3->setText(QApplication::translate("v_autores11", "Atr\303\241s", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("v_autores11", "El presente trabajo forma parte del proyecto PIMI 15-12  de la \n"
" Escuela Polit\303\251cnica Nacional.", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("v_autores11", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Diego Navas</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Naci\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Atuntaqui-Ecuador</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">1993.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Realiz\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">estudios</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">secundarios</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\""
                        ">en la Unidad Educativa La Salle Conocoto.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Es</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">parte</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">del</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Club</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Rob\303\263tica</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">la</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Escuela</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\""
                        " font-size:12pt;\">politecnica</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Nacional</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">desde</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">2014.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Finaliz\303\263</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">estudios</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Ingenier\303\255a</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Electr\303\263nica</span><span style=\" font-size:12pt; color:#c0c0c"
                        "0;\"> </span><span style=\" font-size:12pt;\">y</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Control</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">dicha</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">instituci\303\263n</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">en</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">2017</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">y</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">se</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">encuentra</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><"
                        "span style=\" font-size:12pt;\">realizando</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">su</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">proyecto</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">tesis.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Actualemente</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">forma</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">parte</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">del</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">proyecto</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span"
                        " style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">investigaci\303\263n</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">PIMI</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">15-12</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">la</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">EPN</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">donde</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">es</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">asistente</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" f"
                        "ont-size:12pt;\">de</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">investigaci\303\263n.</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">Sus</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">principales</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">intereses</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">son: intrumentaci\303\263n, visi\303\263n</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">artificial,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">sistemas</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">embebidos,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">software</span><span style=\""
                        " font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">libre,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">rob\303\263tica,</span><span style=\" font-size:12pt; color:#c0c0c0;\"> </span><span style=\" font-size:12pt;\">energ\303\255as renovables.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class v_autores11: public Ui_v_autores11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V_AUTORES11_H
