/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSOptionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOptionsENDCLASS = QtMocHelpers::stringData(
    "Options",
    "type",
    "",
    "undo_signal",
    "open_type",
    "start",
    "on_black_clicked",
    "on_white_clicked",
    "on_start_clicked",
    "on_undo_clicked",
    "undoenable",
    "on_open",
    "newBuilt"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOptionsENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[8];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[17];
    char stringdata9[16];
    char stringdata10[11];
    char stringdata11[8];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOptionsENDCLASS_t qt_meta_stringdata_CLASSOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Options"
        QT_MOC_LITERAL(8, 4),  // "type"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 11),  // "undo_signal"
        QT_MOC_LITERAL(26, 9),  // "open_type"
        QT_MOC_LITERAL(36, 5),  // "start"
        QT_MOC_LITERAL(42, 16),  // "on_black_clicked"
        QT_MOC_LITERAL(59, 16),  // "on_white_clicked"
        QT_MOC_LITERAL(76, 16),  // "on_start_clicked"
        QT_MOC_LITERAL(93, 15),  // "on_undo_clicked"
        QT_MOC_LITERAL(109, 10),  // "undoenable"
        QT_MOC_LITERAL(120, 7),  // "on_open"
        QT_MOC_LITERAL(128, 8)   // "newBuilt"
    },
    "Options",
    "type",
    "",
    "undo_signal",
    "open_type",
    "start",
    "on_black_clicked",
    "on_white_clicked",
    "on_start_clicked",
    "on_undo_clicked",
    "undoenable",
    "on_open",
    "newBuilt"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOptionsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       3,    0,   83,    2, 0x06,    3 /* Public */,
       4,    1,   84,    2, 0x06,    4 /* Public */,
       5,    0,   87,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   88,    2, 0x0a,    7 /* Public */,
       7,    0,   89,    2, 0x0a,    8 /* Public */,
       8,    0,   90,    2, 0x0a,    9 /* Public */,
       9,    0,   91,    2, 0x0a,   10 /* Public */,
      10,    0,   92,    2, 0x0a,   11 /* Public */,
      11,    0,   93,    2, 0x0a,   12 /* Public */,
      12,    0,   94,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    1,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Options::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOptionsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Options, std::true_type>,
        // method 'type'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'undo_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open_type'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_black_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_white_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_start_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_undo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoenable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newBuilt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Options::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Options *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->type((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->undo_signal(); break;
        case 2: _t->open_type((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->on_black_clicked(); break;
        case 5: _t->on_white_clicked(); break;
        case 6: _t->on_start_clicked(); break;
        case 7: _t->on_undo_clicked(); break;
        case 8: _t->undoenable(); break;
        case 9: _t->on_open(); break;
        case 10: _t->newBuilt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Options::*)(int );
            if (_t _q_method = &Options::type; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Options::*)();
            if (_t _q_method = &Options::undo_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Options::*)(int );
            if (_t _q_method = &Options::open_type; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Options::*)();
            if (_t _q_method = &Options::start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Options::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOptionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Options::type(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Options::undo_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Options::open_type(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Options::start()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
