/****************************************************************************
** Meta object code from reading C++ file 'MyQLabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyQLabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyQLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyQLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    9,    9,    9, 0x0a,
      34,    9,    9,    9, 0x0a,
      43,   41,    9,    9, 0x0a,
      63,   61,    9,    9, 0x0a,
      81,   79,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQLabel[] = {
    "MyQLabel\0\0n\0setGraus(int)\0resta()\0"
    "suma()\0i\0setIncrement(int)\0v\0"
    "setVermell(int)\0g\0setGroc(int)\0"
};

void MyQLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQLabel *_t = static_cast<MyQLabel *>(_o);
        switch (_id) {
        case 0: _t->setGraus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->resta(); break;
        case 2: _t->suma(); break;
        case 3: _t->setIncrement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setVermell((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setGroc((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyQLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyQLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_MyQLabel,
      qt_meta_data_MyQLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyQLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyQLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyQLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQLabel))
        return static_cast<void*>(const_cast< MyQLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int MyQLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MyQLabel::setGraus(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
