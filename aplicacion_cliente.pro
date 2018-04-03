#-------------------------------------------------
#
# Project created by QtCreator 2017-06-28T15:14:16
#
#-------------------------------------------------

QT       += core gui concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = aplicacion_cliente
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11

#Librerias BOOST ASIO
INCLUDEPATH += /usr/include/boost

QMAKE_CXXFLAGS += -DBOOST_ASIO_DISABLE_STD_CHRONO
LIBS += -L/usr/include/boost -lboost_system -lboost_chrono -lboost_thread -lboost_timer

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    v_visualizador.cpp \
    threadcliente.cpp \
    v_autores11.cpp

HEADERS += \
        mainwindow.h \
    v_visualizador.h \
    threadcliente.h \
    v_autores11.h \
    darknet.h

FORMS += \
        mainwindow.ui \
    v_visualizador.ui \
    v_autores11.ui

RESOURCES += \
    imagenes.qrc
