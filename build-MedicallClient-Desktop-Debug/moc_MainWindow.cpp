/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MedicallClient/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "switchToWelcomeView"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "switchToLoginPatientView"
QT_MOC_LITERAL(4, 57, 23), // "switchToLoginDoctorView"
QT_MOC_LITERAL(5, 81, 31), // "switchToPatientRegistrationView"
QT_MOC_LITERAL(6, 113, 30), // "switchToDoctorRegistrationView"
QT_MOC_LITERAL(7, 144, 18), // "switchToSurveyView"
QT_MOC_LITERAL(8, 163, 19), // "switchToPatientView"
QT_MOC_LITERAL(9, 183, 4), // "data"
QT_MOC_LITERAL(10, 188, 18), // "switchToDoctorView"
QT_MOC_LITERAL(11, 207, 28), // "patientRegistration_Finished"
QT_MOC_LITERAL(12, 236, 27) // "doctorRegistration_Finished"

    },
    "MainWindow\0switchToWelcomeView\0\0"
    "switchToLoginPatientView\0"
    "switchToLoginDoctorView\0"
    "switchToPatientRegistrationView\0"
    "switchToDoctorRegistrationView\0"
    "switchToSurveyView\0switchToPatientView\0"
    "data\0switchToDoctorView\0"
    "patientRegistration_Finished\0"
    "doctorRegistration_Finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantHash,    9,
    QMetaType::Void, QMetaType::QVariantHash,    9,
    QMetaType::Void, QMetaType::QVariantHash,    9,
    QMetaType::Void, QMetaType::QVariantHash,    9,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchToWelcomeView(); break;
        case 1: _t->switchToLoginPatientView(); break;
        case 2: _t->switchToLoginDoctorView(); break;
        case 3: _t->switchToPatientRegistrationView(); break;
        case 4: _t->switchToDoctorRegistrationView(); break;
        case 5: _t->switchToSurveyView(); break;
        case 6: _t->switchToPatientView((*reinterpret_cast< QVariantHash(*)>(_a[1]))); break;
        case 7: _t->switchToDoctorView((*reinterpret_cast< QVariantHash(*)>(_a[1]))); break;
        case 8: _t->patientRegistration_Finished((*reinterpret_cast< QVariantHash(*)>(_a[1]))); break;
        case 9: _t->doctorRegistration_Finished((*reinterpret_cast< QVariantHash(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE