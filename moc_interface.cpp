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
    QByteArrayData data[27];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Interface"
QT_MOC_LITERAL(1, 10, 10), // "changeView"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "swipe"
QT_MOC_LITERAL(4, 28, 7), // "getDate"
QT_MOC_LITERAL(5, 36, 7), // "getFlag"
QT_MOC_LITERAL(6, 44, 15), // "addLuxDetection"
QT_MOC_LITERAL(7, 60, 17), // "addSoundDetection"
QT_MOC_LITERAL(8, 78, 14), // "getSensorState"
QT_MOC_LITERAL(9, 93, 3), // "msg"
QT_MOC_LITERAL(10, 97, 9), // "luxDetect"
QT_MOC_LITERAL(11, 107, 11), // "soundDetect"
QT_MOC_LITERAL(12, 119, 15), // "onNewConnection"
QT_MOC_LITERAL(13, 135, 11), // "onReadyRead"
QT_MOC_LITERAL(14, 147, 18), // "socketStateChanged"
QT_MOC_LITERAL(15, 166, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(16, 195, 11), // "socketState"
QT_MOC_LITERAL(17, 207, 11), // "socketError"
QT_MOC_LITERAL(18, 219, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(19, 248, 18), // "socketDisconnected"
QT_MOC_LITERAL(20, 267, 14), // "displayArchive"
QT_MOC_LITERAL(21, 282, 18), // "getIndexArchiveLux"
QT_MOC_LITERAL(22, 301, 13), // "registerLabel"
QT_MOC_LITERAL(23, 315, 3), // "obj"
QT_MOC_LITERAL(24, 319, 11), // "viewChanger"
QT_MOC_LITERAL(25, 331, 2), // "id"
QT_MOC_LITERAL(26, 334, 8) // "loadMain"

    },
    "Interface\0changeView\0\0swipe\0getDate\0"
    "getFlag\0addLuxDetection\0addSoundDetection\0"
    "getSensorState\0msg\0luxDetect\0soundDetect\0"
    "onNewConnection\0onReadyRead\0"
    "socketStateChanged\0QAbstractSocket::SocketState\0"
    "socketState\0socketError\0"
    "QAbstractSocket::SocketError\0"
    "socketDisconnected\0displayArchive\0"
    "getIndexArchiveLux\0registerLabel\0obj\0"
    "viewChanger\0id\0loadMain"
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
       1,    1,  104,    2, 0x0a /* Public */,
       4,    0,  107,    2, 0x0a /* Public */,
       5,    0,  108,    2, 0x0a /* Public */,
       6,    0,  109,    2, 0x0a /* Public */,
       7,    0,  110,    2, 0x0a /* Public */,
       8,    1,  111,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    1,  118,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    1,  127,    2, 0x0a /* Public */,
      24,    1,  130,    2, 0x08 /* Private */,
      26,    0,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QObjectStar,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeView((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->getFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->addLuxDetection(); break;
        case 4: _t->addSoundDetection(); break;
        case 5: _t->getSensorState((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->luxDetect(); break;
        case 7: _t->soundDetect(); break;
        case 8: _t->onNewConnection(); break;
        case 9: _t->onReadyRead(); break;
        case 10: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 11: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 12: _t->socketDisconnected(); break;
        case 13: _t->displayArchive(); break;
        case 14: { int _r = _t->getIndexArchiveLux();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->registerLabel((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 16: _t->viewChanger((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->loadMain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 11:
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
