/****************************************************************************
** Meta object code from reading C++ file 'clientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatClient/clientsocket.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientSocketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientSocketENDCLASS = QtMocHelpers::stringData(
    "ClientSocket",
    "signalMessage",
    "",
    "type",
    "dataVal",
    "signalStatus",
    "state",
    "SltSendMessage",
    "onSendMessage",
    "json",
    "onFriendChatWindowClose",
    "SltDisconnected",
    "SltConnected",
    "SltReadyRead"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientSocketENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[5];
    char stringdata10[24];
    char stringdata11[16];
    char stringdata12[13];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientSocketENDCLASS_t qt_meta_stringdata_CLASSClientSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientSocket"
        QT_MOC_LITERAL(13, 13),  // "signalMessage"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 4),  // "type"
        QT_MOC_LITERAL(33, 7),  // "dataVal"
        QT_MOC_LITERAL(41, 12),  // "signalStatus"
        QT_MOC_LITERAL(54, 5),  // "state"
        QT_MOC_LITERAL(60, 14),  // "SltSendMessage"
        QT_MOC_LITERAL(75, 13),  // "onSendMessage"
        QT_MOC_LITERAL(89, 4),  // "json"
        QT_MOC_LITERAL(94, 23),  // "onFriendChatWindowClose"
        QT_MOC_LITERAL(118, 15),  // "SltDisconnected"
        QT_MOC_LITERAL(134, 12),  // "SltConnected"
        QT_MOC_LITERAL(147, 12)   // "SltReadyRead"
    },
    "ClientSocket",
    "signalMessage",
    "",
    "type",
    "dataVal",
    "signalStatus",
    "state",
    "SltSendMessage",
    "onSendMessage",
    "json",
    "onFriendChatWindowClose",
    "SltDisconnected",
    "SltConnected",
    "SltReadyRead"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientSocketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    1,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   70,    2, 0x0a,    6 /* Public */,
       8,    2,   75,    2, 0x0a,    9 /* Public */,
      10,    0,   80,    2, 0x0a,   12 /* Public */,
      11,    0,   81,    2, 0x08,   13 /* Private */,
      12,    0,   82,    2, 0x08,   14 /* Private */,
      13,    0,   83,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void, QMetaType::UChar,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void, QMetaType::SChar, QMetaType::QJsonValue,    3,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientSocket, std::true_type>,
        // method 'signalMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'signalStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        // method 'SltSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'onSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'onFriendChatWindowClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 1: _t->signalStatus((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 2: _t->SltSendMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 3: _t->onSendMessage((*reinterpret_cast< std::add_pointer_t<qint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 4: _t->onFriendChatWindowClose(); break;
        case 5: _t->SltDisconnected(); break;
        case 6: _t->SltConnected(); break;
        case 7: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSocket::*)(const quint8 & , const QJsonValue & );
            if (_t _q_method = &ClientSocket::signalMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const quint8 & );
            if (_t _q_method = &ClientSocket::signalStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ClientSocket::signalMessage(const quint8 & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSocket::signalStatus(const quint8 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
