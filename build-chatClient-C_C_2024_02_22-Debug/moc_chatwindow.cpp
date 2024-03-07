/****************************************************************************
** Meta object code from reading C++ file 'chatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatClient/uipage/chatwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSChatWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatWindowENDCLASS = QtMocHelpers::stringData(
    "ChatWindow",
    "signalClose",
    "",
    "signalSendMessage",
    "type",
    "json",
    "SltChatMessage",
    "text",
    "on_btnSendMsg_clicked",
    "SltCloseWindow",
    "on_toolButton_7_clicked",
    "SltFileRecvFinished",
    "filePath",
    "SltUpdateProgress",
    "bytes",
    "total",
    "on_toolButton_6_clicked",
    "on_toolButton_clicked",
    "on_btnSendFile_clicked",
    "SltDownloadFiles",
    "fileName",
    "on_toolButton_4_clicked",
    "on_toolButton_3_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatWindowENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[15];
    char stringdata7[5];
    char stringdata8[22];
    char stringdata9[15];
    char stringdata10[24];
    char stringdata11[20];
    char stringdata12[9];
    char stringdata13[18];
    char stringdata14[6];
    char stringdata15[6];
    char stringdata16[24];
    char stringdata17[22];
    char stringdata18[23];
    char stringdata19[17];
    char stringdata20[9];
    char stringdata21[24];
    char stringdata22[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatWindowENDCLASS_t qt_meta_stringdata_CLASSChatWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatWindow"
        QT_MOC_LITERAL(11, 11),  // "signalClose"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 17),  // "signalSendMessage"
        QT_MOC_LITERAL(42, 4),  // "type"
        QT_MOC_LITERAL(47, 4),  // "json"
        QT_MOC_LITERAL(52, 14),  // "SltChatMessage"
        QT_MOC_LITERAL(67, 4),  // "text"
        QT_MOC_LITERAL(72, 21),  // "on_btnSendMsg_clicked"
        QT_MOC_LITERAL(94, 14),  // "SltCloseWindow"
        QT_MOC_LITERAL(109, 23),  // "on_toolButton_7_clicked"
        QT_MOC_LITERAL(133, 19),  // "SltFileRecvFinished"
        QT_MOC_LITERAL(153, 8),  // "filePath"
        QT_MOC_LITERAL(162, 17),  // "SltUpdateProgress"
        QT_MOC_LITERAL(180, 5),  // "bytes"
        QT_MOC_LITERAL(186, 5),  // "total"
        QT_MOC_LITERAL(192, 23),  // "on_toolButton_6_clicked"
        QT_MOC_LITERAL(216, 21),  // "on_toolButton_clicked"
        QT_MOC_LITERAL(238, 22),  // "on_btnSendFile_clicked"
        QT_MOC_LITERAL(261, 16),  // "SltDownloadFiles"
        QT_MOC_LITERAL(278, 8),  // "fileName"
        QT_MOC_LITERAL(287, 23),  // "on_toolButton_4_clicked"
        QT_MOC_LITERAL(311, 23)   // "on_toolButton_3_clicked"
    },
    "ChatWindow",
    "signalClose",
    "",
    "signalSendMessage",
    "type",
    "json",
    "SltChatMessage",
    "text",
    "on_btnSendMsg_clicked",
    "SltCloseWindow",
    "on_toolButton_7_clicked",
    "SltFileRecvFinished",
    "filePath",
    "SltUpdateProgress",
    "bytes",
    "total",
    "on_toolButton_6_clicked",
    "on_toolButton_clicked",
    "on_btnSendFile_clicked",
    "SltDownloadFiles",
    "fileName",
    "on_toolButton_4_clicked",
    "on_toolButton_3_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    2,   99,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  104,    2, 0x08,    5 /* Private */,
       8,    0,  107,    2, 0x08,    7 /* Private */,
       9,    0,  108,    2, 0x08,    8 /* Private */,
      10,    0,  109,    2, 0x08,    9 /* Private */,
      11,    2,  110,    2, 0x08,   10 /* Private */,
      13,    2,  115,    2, 0x08,   13 /* Private */,
      16,    0,  120,    2, 0x08,   16 /* Private */,
      17,    0,  121,    2, 0x08,   17 /* Private */,
      18,    0,  122,    2, 0x08,   18 /* Private */,
      19,    1,  123,    2, 0x08,   19 /* Private */,
      21,    0,  126,    2, 0x08,   21 /* Private */,
      22,    0,  127,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    4,   12,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomMoveWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatWindow, std::true_type>,
        // method 'signalClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltChatMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnSendMsg_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltCloseWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltFileRecvFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SltUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'on_toolButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSendFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltDownloadFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_toolButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalClose(); break;
        case 1: _t->signalSendMessage((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 2: _t->SltChatMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_btnSendMsg_clicked(); break;
        case 4: _t->SltCloseWindow(); break;
        case 5: _t->on_toolButton_7_clicked(); break;
        case 6: _t->SltFileRecvFinished((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->SltUpdateProgress((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        case 8: _t->on_toolButton_6_clicked(); break;
        case 9: _t->on_toolButton_clicked(); break;
        case 10: _t->on_btnSendFile_clicked(); break;
        case 11: _t->SltDownloadFiles((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->on_toolButton_4_clicked(); break;
        case 13: _t->on_toolButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatWindow::*)();
            if (_t _q_method = &ChatWindow::signalClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatWindow::*)(const quint8 & , const QJsonValue & );
            if (_t _q_method = &ChatWindow::signalSendMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int ChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ChatWindow::signalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatWindow::signalSendMessage(const quint8 & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
