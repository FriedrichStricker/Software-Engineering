/****************************************************************************
** Meta object code from reading C++ file 'Confirm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Confirm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Confirm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Confirm_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Confirm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Confirm_t qt_meta_stringdata_Confirm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Confirm"
QT_MOC_LITERAL(1, 8, 8), // "showText"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "message"
QT_MOC_LITERAL(4, 26, 20), // "function<void(bool)>"
QT_MOC_LITERAL(5, 47, 6), // "result"
QT_MOC_LITERAL(6, 54, 21), // "on_btn_accept_clicked"
QT_MOC_LITERAL(7, 76, 21) // "on_btn_cancel_clicked"

    },
    "Confirm\0showText\0\0message\0"
    "function<void(bool)>\0result\0"
    "on_btn_accept_clicked\0on_btn_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Confirm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Confirm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Confirm *_t = static_cast<Confirm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< function<void(bool)>(*)>(_a[2]))); break;
        case 1: _t->on_btn_accept_clicked(); break;
        case 2: _t->on_btn_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Confirm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Confirm.data,
      qt_meta_data_Confirm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Confirm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Confirm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Confirm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Confirm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
