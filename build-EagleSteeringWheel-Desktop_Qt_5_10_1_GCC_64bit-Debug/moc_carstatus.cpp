/****************************************************************************
** Meta object code from reading C++ file 'carstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Volante/carstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CarStatus_t {
    QByteArrayData data[38];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CarStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CarStatus_t qt_meta_stringdata_CarStatus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CarStatus"
QT_MOC_LITERAL(1, 10, 11), // "tempChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "temperature"
QT_MOC_LITERAL(4, 35, 10), // "socChanged"
QT_MOC_LITERAL(5, 46, 3), // "soc"
QT_MOC_LITERAL(6, 50, 15), // "execModeChanged"
QT_MOC_LITERAL(7, 66, 13), // "ctrlIsEnabled"
QT_MOC_LITERAL(8, 80, 8), // "ctrlIsOn"
QT_MOC_LITERAL(9, 89, 7), // "warning"
QT_MOC_LITERAL(10, 97, 5), // "error"
QT_MOC_LITERAL(11, 103, 16), // "carStatusChanged"
QT_MOC_LITERAL(12, 120, 9), // "toggleCar"
QT_MOC_LITERAL(13, 130, 15), // "HVStatusChanged"
QT_MOC_LITERAL(14, 146, 16), // "CANStatusChanged"
QT_MOC_LITERAL(15, 163, 16), // "ERRStatusChanged"
QT_MOC_LITERAL(16, 180, 17), // "APPSStatusChanged"
QT_MOC_LITERAL(17, 198, 16), // "BSEStatusChanged"
QT_MOC_LITERAL(18, 215, 18), // "STEERStatusChanged"
QT_MOC_LITERAL(19, 234, 18), // "CTRLEnabledChanged"
QT_MOC_LITERAL(20, 253, 15), // "velocityChanged"
QT_MOC_LITERAL(21, 269, 13), // "presetChanged"
QT_MOC_LITERAL(22, 283, 10), // "toggleCtrl"
QT_MOC_LITERAL(23, 294, 15), // "toggleCarStatus"
QT_MOC_LITERAL(24, 310, 7), // "stopCar"
QT_MOC_LITERAL(25, 318, 12), // "changePreset"
QT_MOC_LITERAL(26, 331, 8), // "presetID"
QT_MOC_LITERAL(27, 340, 9), // "CANStatus"
QT_MOC_LITERAL(28, 350, 8), // "HVStatus"
QT_MOC_LITERAL(29, 359, 9), // "ERRStatus"
QT_MOC_LITERAL(30, 369, 11), // "CTRLEnabled"
QT_MOC_LITERAL(31, 381, 10), // "APPSStatus"
QT_MOC_LITERAL(32, 392, 10), // "QList<int>"
QT_MOC_LITERAL(33, 403, 9), // "BSEStatus"
QT_MOC_LITERAL(34, 413, 11), // "STEERStatus"
QT_MOC_LITERAL(35, 425, 8), // "velocity"
QT_MOC_LITERAL(36, 434, 6), // "preset"
QT_MOC_LITERAL(37, 441, 9) // "carStatus"

    },
    "CarStatus\0tempChanged\0\0temperature\0"
    "socChanged\0soc\0execModeChanged\0"
    "ctrlIsEnabled\0ctrlIsOn\0warning\0error\0"
    "carStatusChanged\0toggleCar\0HVStatusChanged\0"
    "CANStatusChanged\0ERRStatusChanged\0"
    "APPSStatusChanged\0BSEStatusChanged\0"
    "STEERStatusChanged\0CTRLEnabledChanged\0"
    "velocityChanged\0presetChanged\0toggleCtrl\0"
    "toggleCarStatus\0stopCar\0changePreset\0"
    "presetID\0CANStatus\0HVStatus\0ERRStatus\0"
    "CTRLEnabled\0APPSStatus\0QList<int>\0"
    "BSEStatus\0STEERStatus\0velocity\0preset\0"
    "carStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CarStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      10,  136, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       6,    4,  110,    2, 0x06 /* Public */,
      11,    0,  119,    2, 0x06 /* Public */,
      12,    0,  120,    2, 0x06 /* Public */,
      13,    0,  121,    2, 0x06 /* Public */,
      14,    0,  122,    2, 0x06 /* Public */,
      15,    0,  123,    2, 0x06 /* Public */,
      16,    0,  124,    2, 0x06 /* Public */,
      17,    0,  125,    2, 0x06 /* Public */,
      18,    0,  126,    2, 0x06 /* Public */,
      19,    0,  127,    2, 0x06 /* Public */,
      20,    0,  128,    2, 0x06 /* Public */,
      21,    0,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  130,    2, 0x0a /* Public */,
      23,    0,  131,    2, 0x0a /* Public */,
      24,    0,  132,    2, 0x0a /* Public */,
      25,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   26,

 // properties: name, type, flags
      27, QMetaType::QString, 0x00495001,
      28, QMetaType::QString, 0x00495001,
      29, QMetaType::QString, 0x00495001,
      30, QMetaType::QString, 0x00495001,
      31, 0x80000000 | 32, 0x00495009,
      33, 0x80000000 | 32, 0x00495009,
      34, 0x80000000 | 32, 0x00495009,
      35, QMetaType::Int, 0x00495001,
      36, QMetaType::Int, 0x00495001,
      37, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       6,
       5,
       7,
      11,
       8,
       9,
      10,
      12,
      13,
       3,

       0        // eod
};

void CarStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CarStatus *_t = static_cast<CarStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tempChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->socChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->execModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->carStatusChanged(); break;
        case 4: _t->toggleCar(); break;
        case 5: _t->HVStatusChanged(); break;
        case 6: _t->CANStatusChanged(); break;
        case 7: _t->ERRStatusChanged(); break;
        case 8: _t->APPSStatusChanged(); break;
        case 9: _t->BSEStatusChanged(); break;
        case 10: _t->STEERStatusChanged(); break;
        case 11: _t->CTRLEnabledChanged(); break;
        case 12: _t->velocityChanged(); break;
        case 13: _t->presetChanged(); break;
        case 14: { int _r = _t->toggleCtrl();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->toggleCarStatus();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->stopCar();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->changePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CarStatus::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::tempChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::socChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::execModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::carStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::toggleCar)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::HVStatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::CANStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::ERRStatusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::APPSStatusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::BSEStatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::STEERStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::CTRLEnabledChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::velocityChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (CarStatus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CarStatus::presetChanged)) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CarStatus *_t = static_cast<CarStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->CANStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->HVStatus(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->ERRStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->CTRLEnabled(); break;
        case 4: *reinterpret_cast< QList<int>*>(_v) = _t->APPSStatus(); break;
        case 5: *reinterpret_cast< QList<int>*>(_v) = _t->BSEStatus(); break;
        case 6: *reinterpret_cast< QList<int>*>(_v) = _t->STEERStatus(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->velocity(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->preset(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->carStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CarStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CarStatus.data,
      qt_meta_data_CarStatus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CarStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CarStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CarStatus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CarStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CarStatus::tempChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CarStatus::socChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CarStatus::execModeChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CarStatus::carStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CarStatus::toggleCar()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CarStatus::HVStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CarStatus::CANStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CarStatus::ERRStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CarStatus::APPSStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CarStatus::BSEStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CarStatus::STEERStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CarStatus::CTRLEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void CarStatus::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CarStatus::presetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
