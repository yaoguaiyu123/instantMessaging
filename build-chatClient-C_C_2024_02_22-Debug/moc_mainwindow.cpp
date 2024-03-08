/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatClient/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_btnWinClose_clicked",
    "",
    "SltMainPageChanged",
    "index",
    "SltSystemTrayIconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "SltTrayIconMenuClicked",
    "QAction*",
    "SltQuitapp",
    "SltTcpReply",
    "type",
    "datacal",
    "SltTcpStatus",
    "state",
    "on_btnWinMin_clicked",
    "onAddFriendMenuDidSelected",
    "action",
    "onGroupPopMenuDidSelected",
    "onChildPopMenuDidSelected",
    "SltFriendsClicked",
    "QQCell*",
    "cell",
    "SltGroupsClicked",
    "SltFriendChatWindowClose",
    "PraseInitFriendList",
    "dataval"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[6];
    char stringdata5[27];
    char stringdata6[34];
    char stringdata7[7];
    char stringdata8[23];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[12];
    char stringdata12[5];
    char stringdata13[8];
    char stringdata14[13];
    char stringdata15[6];
    char stringdata16[21];
    char stringdata17[27];
    char stringdata18[7];
    char stringdata19[26];
    char stringdata20[26];
    char stringdata21[18];
    char stringdata22[8];
    char stringdata23[5];
    char stringdata24[17];
    char stringdata25[25];
    char stringdata26[20];
    char stringdata27[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_btnWinClose_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 18),  // "SltMainPageChanged"
        QT_MOC_LITERAL(54, 5),  // "index"
        QT_MOC_LITERAL(60, 26),  // "SltSystemTrayIconActivated"
        QT_MOC_LITERAL(87, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(121, 6),  // "reason"
        QT_MOC_LITERAL(128, 22),  // "SltTrayIconMenuClicked"
        QT_MOC_LITERAL(151, 8),  // "QAction*"
        QT_MOC_LITERAL(160, 10),  // "SltQuitapp"
        QT_MOC_LITERAL(171, 11),  // "SltTcpReply"
        QT_MOC_LITERAL(183, 4),  // "type"
        QT_MOC_LITERAL(188, 7),  // "datacal"
        QT_MOC_LITERAL(196, 12),  // "SltTcpStatus"
        QT_MOC_LITERAL(209, 5),  // "state"
        QT_MOC_LITERAL(215, 20),  // "on_btnWinMin_clicked"
        QT_MOC_LITERAL(236, 26),  // "onAddFriendMenuDidSelected"
        QT_MOC_LITERAL(263, 6),  // "action"
        QT_MOC_LITERAL(270, 25),  // "onGroupPopMenuDidSelected"
        QT_MOC_LITERAL(296, 25),  // "onChildPopMenuDidSelected"
        QT_MOC_LITERAL(322, 17),  // "SltFriendsClicked"
        QT_MOC_LITERAL(340, 7),  // "QQCell*"
        QT_MOC_LITERAL(348, 4),  // "cell"
        QT_MOC_LITERAL(353, 16),  // "SltGroupsClicked"
        QT_MOC_LITERAL(370, 24),  // "SltFriendChatWindowClose"
        QT_MOC_LITERAL(395, 19),  // "PraseInitFriendList"
        QT_MOC_LITERAL(415, 7)   // "dataval"
    },
    "MainWindow",
    "on_btnWinClose_clicked",
    "",
    "SltMainPageChanged",
    "index",
    "SltSystemTrayIconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "SltTrayIconMenuClicked",
    "QAction*",
    "SltQuitapp",
    "SltTcpReply",
    "type",
    "datacal",
    "SltTcpStatus",
    "state",
    "on_btnWinMin_clicked",
    "onAddFriendMenuDidSelected",
    "action",
    "onGroupPopMenuDidSelected",
    "onChildPopMenuDidSelected",
    "SltFriendsClicked",
    "QQCell*",
    "cell",
    "SltGroupsClicked",
    "SltFriendChatWindowClose",
    "PraseInitFriendList",
    "dataval"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    1,  105,    2, 0x08,    2 /* Private */,
       5,    1,  108,    2, 0x08,    4 /* Private */,
       8,    1,  111,    2, 0x08,    6 /* Private */,
      10,    0,  114,    2, 0x08,    8 /* Private */,
      11,    2,  115,    2, 0x08,    9 /* Private */,
      14,    1,  120,    2, 0x08,   12 /* Private */,
      16,    0,  123,    2, 0x08,   14 /* Private */,
      17,    1,  124,    2, 0x08,   15 /* Private */,
      19,    1,  127,    2, 0x08,   17 /* Private */,
      20,    1,  130,    2, 0x08,   19 /* Private */,
      21,    1,  133,    2, 0x08,   21 /* Private */,
      24,    1,  136,    2, 0x08,   23 /* Private */,
      25,    0,  139,    2, 0x08,   25 /* Private */,
      26,    1,  140,    2, 0x08,   26 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,   12,   13,
    QMetaType::Void, QMetaType::UChar,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomMoveWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_btnWinClose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltMainPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SltSystemTrayIconActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'SltTrayIconMenuClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'SltQuitapp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SltTcpReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'SltTcpStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        // method 'on_btnWinMin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddFriendMenuDidSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'onGroupPopMenuDidSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'onChildPopMenuDidSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'SltFriendsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQCell *, std::false_type>,
        // method 'SltGroupsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQCell *, std::false_type>,
        // method 'SltFriendChatWindowClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PraseInitFriendList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnWinClose_clicked(); break;
        case 1: _t->SltMainPageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SltSystemTrayIconActivated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 3: _t->SltTrayIconMenuClicked((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 4: _t->SltQuitapp(); break;
        case 5: _t->SltTcpReply((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 6: _t->SltTcpStatus((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1]))); break;
        case 7: _t->on_btnWinMin_clicked(); break;
        case 8: _t->onAddFriendMenuDidSelected((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 9: _t->onGroupPopMenuDidSelected((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 10: _t->onChildPopMenuDidSelected((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 11: _t->SltFriendsClicked((*reinterpret_cast< std::add_pointer_t<QQCell*>>(_a[1]))); break;
        case 12: _t->SltGroupsClicked((*reinterpret_cast< std::add_pointer_t<QQCell*>>(_a[1]))); break;
        case 13: _t->SltFriendChatWindowClose(); break;
        case 14: _t->PraseInitFriendList((*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
