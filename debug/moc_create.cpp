/****************************************************************************
** Meta object code from reading C++ file 'create.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../create.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'create.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Create_t {
    QByteArrayData data[20];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Create_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Create_t qt_meta_stringdata_Create = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Create"
QT_MOC_LITERAL(1, 7, 20), // "displayCapturedImage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "processCapturedImage"
QT_MOC_LITERAL(4, 50, 9), // "requestId"
QT_MOC_LITERAL(5, 60, 3), // "img"
QT_MOC_LITERAL(6, 64, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(7, 83, 21), // "on_captureBtn_clicked"
QT_MOC_LITERAL(8, 105, 18), // "on_leftBtn_clicked"
QT_MOC_LITERAL(9, 124, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(10, 144, 19), // "on_rightBtn_clicked"
QT_MOC_LITERAL(11, 164, 7), // "doPaint"
QT_MOC_LITERAL(12, 172, 9), // "QPrinter*"
QT_MOC_LITERAL(13, 182, 7), // "printer"
QT_MOC_LITERAL(14, 190, 12), // "printPreview"
QT_MOC_LITERAL(15, 203, 7), // "doPrint"
QT_MOC_LITERAL(16, 211, 21), // "on_leftDelBtn_clicked"
QT_MOC_LITERAL(17, 233, 22), // "on_rightDelBtn_clicked"
QT_MOC_LITERAL(18, 256, 20), // "on_bedNum_textEdited"
QT_MOC_LITERAL(19, 277, 4) // "arg1"

    },
    "Create\0displayCapturedImage\0\0"
    "processCapturedImage\0requestId\0img\0"
    "on_saveBtn_clicked\0on_captureBtn_clicked\0"
    "on_leftBtn_clicked\0on_closeBtn_clicked\0"
    "on_rightBtn_clicked\0doPaint\0QPrinter*\0"
    "printer\0printPreview\0doPrint\0"
    "on_leftDelBtn_clicked\0on_rightDelBtn_clicked\0"
    "on_bedNum_textEdited\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Create[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    2,   80,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,
      15,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void Create::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Create *_t = static_cast<Create *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayCapturedImage(); break;
        case 1: _t->processCapturedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 2: _t->on_saveBtn_clicked(); break;
        case 3: _t->on_captureBtn_clicked(); break;
        case 4: _t->on_leftBtn_clicked(); break;
        case 5: _t->on_closeBtn_clicked(); break;
        case 6: _t->on_rightBtn_clicked(); break;
        case 7: _t->doPaint((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 8: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 9: _t->doPrint((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 10: _t->on_leftDelBtn_clicked(); break;
        case 11: _t->on_rightDelBtn_clicked(); break;
        case 12: _t->on_bedNum_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Create::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Create.data,
      qt_meta_data_Create,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Create::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Create::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Create.stringdata0))
        return static_cast<void*>(const_cast< Create*>(this));
    return QDialog::qt_metacast(_clname);
}

int Create::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
