/****************************************************************************
** Meta object code from reading C++ file 'queueingwaypoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/pedsim_ros/pedsim_simulator/include/pedsim_simulator/element/queueingwaypoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queueingwaypoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QueueingWaypoint_t {
    QByteArrayData data[5];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QueueingWaypoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QueueingWaypoint_t qt_meta_stringdata_QueueingWaypoint = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QueueingWaypoint"
QT_MOC_LITERAL(1, 17, 15), // "positionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 1), // "x"
QT_MOC_LITERAL(4, 36, 1) // "y"

    },
    "QueueingWaypoint\0positionChanged\0\0x\0"
    "y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QueueingWaypoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

       0        // eod
};

void QueueingWaypoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QueueingWaypoint *_t = static_cast<QueueingWaypoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QueueingWaypoint::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueingWaypoint::positionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QueueingWaypoint::staticMetaObject = {
    { &Waypoint::staticMetaObject, qt_meta_stringdata_QueueingWaypoint.data,
      qt_meta_data_QueueingWaypoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QueueingWaypoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueueingWaypoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QueueingWaypoint.stringdata0))
        return static_cast<void*>(this);
    return Waypoint::qt_metacast(_clname);
}

int QueueingWaypoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Waypoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QueueingWaypoint::positionChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
