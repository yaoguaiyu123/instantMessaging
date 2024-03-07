/****************************************************************************
** Meta object code from reading C++ file 'chatbubble.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatClient/basewidget/chatbubble.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatbubble.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSBubbleListENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBubbleListENDCLASS = QtMocHelpers::stringData(
    "BubbleList",
    "sig_setCurrentIndex",
    "",
    "currIndex",
    "sig_itemClicked",
    "str",
    "signalDownloadFile",
    "fileName",
    "setMaximum",
    "max"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBubbleListENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[4];
    char stringdata6[19];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBubbleListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBubbleListENDCLASS_t qt_meta_stringdata_CLASSBubbleListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "BubbleList"
        QT_MOC_LITERAL(11, 19),  // "sig_setCurrentIndex"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 9),  // "currIndex"
        QT_MOC_LITERAL(42, 15),  // "sig_itemClicked"
        QT_MOC_LITERAL(58, 3),  // "str"
        QT_MOC_LITERAL(62, 18),  // "signalDownloadFile"
        QT_MOC_LITERAL(81, 8),  // "fileName"
        QT_MOC_LITERAL(90, 10),  // "setMaximum"
        QT_MOC_LITERAL(101, 3)   // "max"
    },
    "BubbleList",
    "sig_setCurrentIndex",
    "",
    "currIndex",
    "sig_itemClicked",
    "str",
    "signalDownloadFile",
    "fileName",
    "setMaximum",
    "max"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBubbleListENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,
       6,    1,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   47,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject BubbleList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSBubbleListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBubbleListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBubbleListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BubbleList, std::true_type>,
        // method 'sig_setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sig_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'signalDownloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void BubbleList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BubbleList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sig_itemClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->signalDownloadFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BubbleList::*)(int );
            if (_t _q_method = &BubbleList::sig_setCurrentIndex; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BubbleList::*)(const QString & );
            if (_t _q_method = &BubbleList::sig_itemClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BubbleList::*)(const QString & );
            if (_t _q_method = &BubbleList::signalDownloadFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *BubbleList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBubbleListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BubbleList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BubbleList::sig_setCurrentIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BubbleList::sig_itemClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BubbleList::signalDownloadFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS = QtMocHelpers::stringData(
    "BubbleListPrivate",
    "sig_setMaximum",
    "",
    "max",
    "sig_setCurrentIndex",
    "currIndex",
    "sig_itemClicked",
    "str",
    "signalDownloadFile",
    "fileName",
    "setCurrentIndex",
    "curIndex",
    "SltFileMenuClicked",
    "QAction*",
    "action"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[20];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[4];
    char stringdata8[19];
    char stringdata9[9];
    char stringdata10[16];
    char stringdata11[9];
    char stringdata12[19];
    char stringdata13[9];
    char stringdata14[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS_t qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "BubbleListPrivate"
        QT_MOC_LITERAL(18, 14),  // "sig_setMaximum"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 3),  // "max"
        QT_MOC_LITERAL(38, 19),  // "sig_setCurrentIndex"
        QT_MOC_LITERAL(58, 9),  // "currIndex"
        QT_MOC_LITERAL(68, 15),  // "sig_itemClicked"
        QT_MOC_LITERAL(84, 3),  // "str"
        QT_MOC_LITERAL(88, 18),  // "signalDownloadFile"
        QT_MOC_LITERAL(107, 8),  // "fileName"
        QT_MOC_LITERAL(116, 15),  // "setCurrentIndex"
        QT_MOC_LITERAL(132, 8),  // "curIndex"
        QT_MOC_LITERAL(141, 18),  // "SltFileMenuClicked"
        QT_MOC_LITERAL(160, 8),  // "QAction*"
        QT_MOC_LITERAL(169, 6)   // "action"
    },
    "BubbleListPrivate",
    "sig_setMaximum",
    "",
    "max",
    "sig_setCurrentIndex",
    "currIndex",
    "sig_itemClicked",
    "str",
    "signalDownloadFile",
    "fileName",
    "setCurrentIndex",
    "curIndex",
    "SltFileMenuClicked",
    "QAction*",
    "action"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBubbleListPrivateENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       6,    1,   56,    2, 0x06,    5 /* Public */,
       8,    1,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   62,    2, 0x0a,    9 /* Public */,
      12,    1,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject BubbleListPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBubbleListPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BubbleListPrivate, std::true_type>,
        // method 'sig_setMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sig_setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sig_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'signalDownloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SltFileMenuClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void BubbleListPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BubbleListPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_setMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sig_setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->sig_itemClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->signalDownloadFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->SltFileMenuClicked((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BubbleListPrivate::*)(int );
            if (_t _q_method = &BubbleListPrivate::sig_setMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(int );
            if (_t _q_method = &BubbleListPrivate::sig_setCurrentIndex; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(const QString & );
            if (_t _q_method = &BubbleListPrivate::sig_itemClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(const QString & );
            if (_t _q_method = &BubbleListPrivate::signalDownloadFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *BubbleListPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleListPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBubbleListPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BubbleListPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BubbleListPrivate::sig_setMaximum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BubbleListPrivate::sig_setCurrentIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BubbleListPrivate::sig_itemClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BubbleListPrivate::signalDownloadFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
