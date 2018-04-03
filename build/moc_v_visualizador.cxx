/****************************************************************************
** Meta object code from reading C++ file 'v_visualizador.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../v_visualizador.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_visualizador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_v_visualizador[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   15,   15,   15, 0x08,
      48,   15,   15,   15, 0x08,
      72,   15,   15,   15, 0x08,
      99,   15,   15,   15, 0x08,
     110,   15,   15,   15, 0x08,
     140,  130,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_v_visualizador[] = {
    "v_visualizador\0\0datos()\0on_btRegresar_clicked()\0"
    "on_pbConectar_clicked()\0"
    "on_pbDesconectar_clicked()\0showTime()\0"
    "actualiza_proceso()\0imagen,im\0"
    "pasar_mat(std::vector<unsigned char>&,cv::Mat)\0"
};

void v_visualizador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        v_visualizador *_t = static_cast<v_visualizador *>(_o);
        switch (_id) {
        case 0: _t->datos(); break;
        case 1: _t->on_btRegresar_clicked(); break;
        case 2: _t->on_pbConectar_clicked(); break;
        case 3: _t->on_pbDesconectar_clicked(); break;
        case 4: _t->showTime(); break;
        case 5: _t->actualiza_proceso(); break;
        case 6: _t->pasar_mat((*reinterpret_cast< std::vector<unsigned char>(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData v_visualizador::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject v_visualizador::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_v_visualizador,
      qt_meta_data_v_visualizador, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &v_visualizador::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *v_visualizador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *v_visualizador::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_v_visualizador))
        return static_cast<void*>(const_cast< v_visualizador*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int v_visualizador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void v_visualizador::datos()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
