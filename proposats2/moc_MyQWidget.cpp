/****************************************************************************
** Meta object code from reading C++ file 'MyQWidget.h'
**
** Created:
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyQWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyQWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyQWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      27,   25,   10,   10, 0x0a,
      43,   41,   10,   10, 0x0a,
      57,   55,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQWidget[] = {
    "MyQWidget\0\0updateColor()\0g\0getGreen(int)\0"
    "r\0getRed(int)\0b\0getBlue(int)\0"
};

void MyQWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQWidget *_t = static_cast<MyQWidget *>(_o);
        switch (_id) {
        case 0: _t->updateColor(); break;
        case 1: _t->getGreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getRed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->getBlue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyQWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyQWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyQWidget,
      qt_meta_data_MyQWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyQWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyQWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyQWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQWidget))
        return static_cast<void*>(const_cast< MyQWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyQWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
