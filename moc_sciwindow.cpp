/****************************************************************************
** Meta object code from reading C++ file 'sciwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sciwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sciwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SciWindow_t {
    QByteArrayData data[7];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SciWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SciWindow_t qt_meta_stringdata_SciWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SciWindow"
QT_MOC_LITERAL(1, 10, 24), // "on_button_addsci_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 32), // "on_filter_scientists_textChanged"
QT_MOC_LITERAL(4, 69, 26), // "on_table_scientist_clicked"
QT_MOC_LITERAL(5, 96, 5), // "index"
QT_MOC_LITERAL(6, 102, 32) // "on_button_remove_student_clicked"

    },
    "SciWindow\0on_button_addsci_clicked\0\0"
    "on_filter_scientists_textChanged\0"
    "on_table_scientist_clicked\0index\0"
    "on_button_remove_student_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SciWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,

       0        // eod
};

void SciWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SciWindow *_t = static_cast<SciWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_addsci_clicked(); break;
        case 1: _t->on_filter_scientists_textChanged(); break;
        case 2: _t->on_table_scientist_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_button_remove_student_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SciWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SciWindow.data,
      qt_meta_data_SciWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SciWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SciWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SciWindow.stringdata0))
        return static_cast<void*>(const_cast< SciWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int SciWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
