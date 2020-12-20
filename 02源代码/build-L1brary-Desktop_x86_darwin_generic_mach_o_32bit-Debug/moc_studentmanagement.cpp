/****************************************************************************
** Meta object code from reading C++ file 'studentmanagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../L1brary/studentmanagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentmanagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentManagement_t {
    QByteArrayData data[11];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentManagement_t qt_meta_stringdata_studentManagement = {
    {
QT_MOC_LITERAL(0, 0, 17), // "studentManagement"
QT_MOC_LITERAL(1, 18, 28), // "on_pushButton_submit_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 28), // "on_pushButton_cencel_clicked"
QT_MOC_LITERAL(4, 77, 28), // "on_pushButton_select_clicked"
QT_MOC_LITERAL(5, 106, 36), // "on_pushButton_showAllStudent_..."
QT_MOC_LITERAL(6, 143, 36), // "on_pushButton_ascendingOrder_..."
QT_MOC_LITERAL(7, 180, 37), // "on_pushButton_descendingOrder..."
QT_MOC_LITERAL(8, 218, 35), // "on_pushButton_deleteStudent_c..."
QT_MOC_LITERAL(9, 254, 32), // "on_pushButton_addStudent_clicked"
QT_MOC_LITERAL(10, 287, 26) // "on_pushButton_exit_clicked"

    },
    "studentManagement\0on_pushButton_submit_clicked\0"
    "\0on_pushButton_cencel_clicked\0"
    "on_pushButton_select_clicked\0"
    "on_pushButton_showAllStudent_clicked\0"
    "on_pushButton_ascendingOrder_clicked\0"
    "on_pushButton_descendingOrder_clicked\0"
    "on_pushButton_deleteStudent_clicked\0"
    "on_pushButton_addStudent_clicked\0"
    "on_pushButton_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentManagement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentManagement *_t = static_cast<studentManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_submit_clicked(); break;
        case 1: _t->on_pushButton_cencel_clicked(); break;
        case 2: _t->on_pushButton_select_clicked(); break;
        case 3: _t->on_pushButton_showAllStudent_clicked(); break;
        case 4: _t->on_pushButton_ascendingOrder_clicked(); break;
        case 5: _t->on_pushButton_descendingOrder_clicked(); break;
        case 6: _t->on_pushButton_deleteStudent_clicked(); break;
        case 7: _t->on_pushButton_addStudent_clicked(); break;
        case 8: _t->on_pushButton_exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject studentManagement::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_studentManagement.data,
    qt_meta_data_studentManagement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *studentManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentManagement.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int studentManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
