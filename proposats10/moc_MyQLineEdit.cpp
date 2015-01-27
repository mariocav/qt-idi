/****************************************************************************
** Meta object code from reading C++ file 'MyQLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyQLineEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyQLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyQLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      17,   12,   12,   12, 0x0a,
      21,   12,   12,   12, 0x0a,
      25,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x0a,
      33,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQLineEdit[] = {
    "MyQLineEdit\0\0A()\0E()\0I()\0O()\0U()\0"
    "toggleShift()\0"
};

void MyQLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQLineEdit *_t = static_cast<MyQLineEdit *>(_o);
        switch (_id) {
        case 0: _t->A(); break;
        case 1: _t->E(); break;
        case 2: _t->I(); break;
        case 3: _t->O(); break;
        case 4: _t->U(); break;
        case 5: _t->toggleShift(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyQLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyQLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_MyQLineEdit,
      qt_meta_data_MyQLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyQLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyQLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyQLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQLineEdit))
        return static_cast<void*>(const_cast< MyQLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int MyQLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
