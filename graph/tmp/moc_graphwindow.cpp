/****************************************************************************
** Meta object code from reading C++ file 'graphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../graphwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphWindow_t {
    QByteArrayData data[13];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphWindow_t qt_meta_stringdata_GraphWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GraphWindow"
QT_MOC_LITERAL(1, 12, 11), // "setColCount"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "setRowCount"
QT_MOC_LITERAL(4, 37, 23), // "_dataTable_valueChanged"
QT_MOC_LITERAL(5, 61, 1), // "r"
QT_MOC_LITERAL(6, 63, 1), // "s"
QT_MOC_LITERAL(7, 65, 24), // "_labelTable_valueChanged"
QT_MOC_LITERAL(8, 90, 17), // "_btnClear_clicked"
QT_MOC_LITERAL(9, 108, 4), // "init"
QT_MOC_LITERAL(10, 113, 6), // "haveDB"
QT_MOC_LITERAL(11, 120, 15), // "_btnSql_clicked"
QT_MOC_LITERAL(12, 136, 14) // "languageChange"

    },
    "GraphWindow\0setColCount\0\0setRowCount\0"
    "_dataTable_valueChanged\0r\0s\0"
    "_labelTable_valueChanged\0_btnClear_clicked\0"
    "init\0haveDB\0_btnSql_clicked\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       3,    1,   57,    2, 0x0a /* Public */,
       4,    2,   60,    2, 0x0a /* Public */,
       7,    2,   65,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRowCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->_dataTable_valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->_labelTable_valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->_btnClear_clicked(); break;
        case 5: _t->init((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->_btnSql_clicked(); break;
        case 7: _t->languageChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GraphWindow.data,
    qt_meta_data_GraphWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GraphWindow"))
        return static_cast< Ui::GraphWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
