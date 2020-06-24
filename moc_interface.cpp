/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[19];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Interface"
QT_MOC_LITERAL(1, 10, 7), // "getDate"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "getSensorState"
QT_MOC_LITERAL(4, 34, 3), // "msg"
QT_MOC_LITERAL(5, 38, 9), // "luxDetect"
QT_MOC_LITERAL(6, 48, 11), // "soundDetect"
QT_MOC_LITERAL(7, 60, 15), // "onNewConnection"
QT_MOC_LITERAL(8, 76, 11), // "onReadyRead"
QT_MOC_LITERAL(9, 88, 18), // "socketStateChanged"
QT_MOC_LITERAL(10, 107, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(11, 136, 11), // "socketState"
QT_MOC_LITERAL(12, 148, 11), // "socketError"
QT_MOC_LITERAL(13, 160, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(14, 189, 18), // "socketDisconnected"
QT_MOC_LITERAL(15, 208, 14), // "displayArchive"
QT_MOC_LITERAL(16, 223, 11), // "viewChanger"
QT_MOC_LITERAL(17, 235, 2), // "id"
QT_MOC_LITERAL(18, 238, 8) // "loadMain"

    },
    "Interface\0getDate\0\0getSensorState\0msg\0"
    "luxDetect\0soundDetect\0onNewConnection\0"
    "onReadyRead\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "socketError\0QAbstractSocket::SocketError\0"
    "socketDisconnected\0displayArchive\0"
    "viewChanger\0id\0loadMain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      12,    1,   85,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->getSensorState((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->luxDetect(); break;
        case 3: _t->soundDetect(); break;
        case 4: _t->onNewConnection(); break;
        case 5: _t->onReadyRead(); break;
        case 6: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 7: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->socketDisconnected(); break;
        case 9: _t->displayArchive(); break;
        case 10: _t->viewChanger((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->loadMain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Interface::staticMetaObject = { {
    &QQuickView::staticMetaObject,
    qt_meta_stringdata_Interface.data,
    qt_meta_data_Interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata0))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
