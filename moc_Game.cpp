/****************************************************************************
** Meta object code from reading C++ file 'Game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Game.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Game.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameENDCLASS = QtMocHelpers::stringData(
    "Game",
    "chessChange",
    "",
    "undoenable",
    "save_signal",
    "restart",
    "stop",
    "whoFirst",
    "type",
    "whoPlay",
    "gameundo",
    "x",
    "y",
    "whoWin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[8];
    char stringdata6[5];
    char stringdata7[9];
    char stringdata8[5];
    char stringdata9[8];
    char stringdata10[9];
    char stringdata11[2];
    char stringdata12[2];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameENDCLASS_t qt_meta_stringdata_CLASSGameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Game"
        QT_MOC_LITERAL(5, 11),  // "chessChange"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 10),  // "undoenable"
        QT_MOC_LITERAL(29, 11),  // "save_signal"
        QT_MOC_LITERAL(41, 7),  // "restart"
        QT_MOC_LITERAL(49, 4),  // "stop"
        QT_MOC_LITERAL(54, 8),  // "whoFirst"
        QT_MOC_LITERAL(63, 4),  // "type"
        QT_MOC_LITERAL(68, 7),  // "whoPlay"
        QT_MOC_LITERAL(76, 8),  // "gameundo"
        QT_MOC_LITERAL(85, 1),  // "x"
        QT_MOC_LITERAL(87, 1),  // "y"
        QT_MOC_LITERAL(89, 6)   // "whoWin"
    },
    "Game",
    "chessChange",
    "",
    "undoenable",
    "save_signal",
    "restart",
    "stop",
    "whoFirst",
    "type",
    "whoPlay",
    "gameundo",
    "x",
    "y",
    "whoWin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,
       3,    0,   73,    2, 0x06,    4 /* Public */,
       4,    0,   74,    2, 0x06,    5 /* Public */,
       5,    0,   75,    2, 0x06,    6 /* Public */,
       6,    0,   76,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   77,    2, 0x0a,    8 /* Public */,
       9,    1,   80,    2, 0x0a,   10 /* Public */,
      10,    2,   83,    2, 0x0a,   12 /* Public */,
      13,    0,   88,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Game, std::true_type>,
        // method 'chessChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'undoenable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'whoFirst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'whoPlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gameundo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'whoWin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->chessChange((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->undoenable(); break;
        case 2: _t->save_signal(); break;
        case 3: _t->restart(); break;
        case 4: _t->stop(); break;
        case 5: _t->whoFirst((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->whoPlay((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->gameundo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->whoWin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(QPoint , int );
            if (_t _q_method = &Game::chessChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Game::*)();
            if (_t _q_method = &Game::undoenable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Game::*)();
            if (_t _q_method = &Game::save_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Game::*)();
            if (_t _q_method = &Game::restart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Game::*)();
            if (_t _q_method = &Game::stop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Game::chessChange(QPoint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::undoenable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Game::save_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Game::restart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Game::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
