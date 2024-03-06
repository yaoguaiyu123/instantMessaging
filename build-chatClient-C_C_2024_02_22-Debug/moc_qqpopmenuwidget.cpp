/****************************************************************************
** Meta object code from reading C++ file 'qqpopmenuwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatClient/basewidget/qqlist/qqpopmenuwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqpopmenuwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS = QtMocHelpers::stringData(
    "QQPopMenuWidget",
    "onpopmenuwillshow",
    "",
    "QQPopMenuWidget*",
    "widget",
    "QMenu*",
    "menu"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[7];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS_t qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QQPopMenuWidget"
        QT_MOC_LITERAL(16, 17),  // "onpopmenuwillshow"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 16),  // "QQPopMenuWidget*"
        QT_MOC_LITERAL(52, 6),  // "widget"
        QT_MOC_LITERAL(59, 6),  // "QMenu*"
        QT_MOC_LITERAL(66, 4)   // "menu"
    },
    "QQPopMenuWidget",
    "onpopmenuwillshow",
    "",
    "QQPopMenuWidget*",
    "widget",
    "QMenu*",
    "menu"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQPopMenuWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject QQPopMenuWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQPopMenuWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QQPopMenuWidget, std::true_type>,
        // method 'onpopmenuwillshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQPopMenuWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>
    >,
    nullptr
} };

void QQPopMenuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQPopMenuWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onpopmenuwillshow((*reinterpret_cast< std::add_pointer_t<QQPopMenuWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMenu* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQPopMenuWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQPopMenuWidget::*)(QQPopMenuWidget * , QMenu * );
            if (_t _q_method = &QQPopMenuWidget::onpopmenuwillshow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QQPopMenuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQPopMenuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQQPopMenuWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomWidget::qt_metacast(_clname);
}

int QQPopMenuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QQPopMenuWidget::onpopmenuwillshow(QQPopMenuWidget * _t1, QMenu * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
