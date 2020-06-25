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
    QByteArrayData data[26];
    char stringdata0[347];
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
QT_MOC_LITERAL(3, 19, 7), // "getFlag"
QT_MOC_LITERAL(4, 27, 15), // "addLuxDetection"
QT_MOC_LITERAL(5, 43, 17), // "addSoundDetection"
QT_MOC_LITERAL(6, 61, 14), // "getSensorState"
QT_MOC_LITERAL(7, 76, 3), // "msg"
QT_MOC_LITERAL(8, 80, 9), // "luxDetect"
QT_MOC_LITERAL(9, 90, 11), // "soundDetect"
QT_MOC_LITERAL(10, 102, 15), // "onNewConnection"
QT_MOC_LITERAL(11, 118, 11), // "onReadyRead"
QT_MOC_LITERAL(12, 130, 18), // "socketStateChanged"
QT_MOC_LITERAL(13, 149, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(14, 178, 11), // "socketState"
QT_MOC_LITERAL(15, 190, 11), // "socketError"
QT_MOC_LITERAL(16, 202, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(17, 231, 18), // "socketDisconnected"
QT_MOC_LITERAL(18, 250, 14), // "displayArchive"
QT_MOC_LITERAL(19, 265, 18), // "getIndexArchiveLux"
QT_MOC_LITERAL(20, 284, 20), // "getIndexArchiveSound"
QT_MOC_LITERAL(21, 305, 13), // "registerLabel"
QT_MOC_LITERAL(22, 319, 3), // "obj"
QT_MOC_LITERAL(23, 323, 11), // "viewChanger"
QT_MOC_LITERAL(24, 335, 2), // "id"
QT_MOC_LITERAL(25, 338, 8) // "loadMain"

    },
    "Interface\0getDate\0\0getFlag\0addLuxDetection\0"
    "addSoundDetection\0getSensorState\0msg\0"
    "luxDetect\0soundDetect\0onNewConnection\0"
    "onReadyRead\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "socketError\0QAbstractSocket::SocketError\0"
    "socketDisconnected\0displayArchive\0"
    "getIndexArchiveLux\0getIndexArchiveSound\0"
    "registerLabel\0obj\0viewChanger\0id\0"
    "loadMain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    1,  108,    2, 0x0a /* Public */,
       8,    0,  111,    2, 0x0a /* Public */,
       9,    0,  112,    2, 0x0a /* Public */,
      10,    0,  113,    2, 0x0a /* Public */,
      11,    0,  114,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      17,    0,  121,    2, 0x0a /* Public */,
      18,    0,  122,    2, 0x0a /* Public */,
      19,    0,  123,    2, 0x0a /* Public */,
      20,    0,  124,    2, 0x0a /* Public */,
      21,    1,  125,    2, 0x0a /* Public */,
      23,    1,  128,    2, 0x08 /* Private */,
      25,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void, QMetaType::Int,   24,
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
        case 1: { bool _r = _t->getFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addLuxDetection(); break;
        case 3: _t->addSoundDetection(); break;
        case 4: _t->getSensorState((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->luxDetect(); break;
        case 6: _t->soundDetect(); break;
        case 7: _t->onNewConnection(); break;
        case 8: _t->onReadyRead(); break;
        case 9: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 10: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 11: _t->socketDisconnected(); break;
        case 12: _t->displayArchive(); break;
        case 13: { int _r = _t->getIndexArchiveLux();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->getIndexArchiveSound();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->registerLabel((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 16: _t->viewChanger((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->loadMain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 10:
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
