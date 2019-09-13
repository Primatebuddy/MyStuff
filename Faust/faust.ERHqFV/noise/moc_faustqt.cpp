/****************************************************************************
** Meta object code from reading C++ file 'faustqt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/usr/include/faust/gui/faustqt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faustqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_uiButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      20,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_uiButton[] = {
    "uiButton\0\0pressed()\0released()\0"
};

void uiButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        uiButton *_t = static_cast<uiButton *>(_o);
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData uiButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uiButton,
      qt_meta_data_uiButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiButton))
        return static_cast<void*>(const_cast< uiButton*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiButton*>(this));
    return QObject::qt_metacast(_clname);
}

int uiButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_uiCheckButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_uiCheckButton[] = {
    "uiCheckButton\0\0v\0setState(int)\0"
};

void uiCheckButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        uiCheckButton *_t = static_cast<uiCheckButton *>(_o);
        switch (_id) {
        case 0: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData uiCheckButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiCheckButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uiCheckButton,
      qt_meta_data_uiCheckButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiCheckButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiCheckButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiCheckButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiCheckButton))
        return static_cast<void*>(const_cast< uiCheckButton*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiCheckButton*>(this));
    return QObject::qt_metacast(_clname);
}

int uiCheckButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_uiSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_uiSlider[] = {
    "uiSlider\0\0v\0setValue(int)\0"
};

void uiSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        uiSlider *_t = static_cast<uiSlider *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData uiSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiSlider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uiSlider,
      qt_meta_data_uiSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiSlider))
        return static_cast<void*>(const_cast< uiSlider*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiSlider*>(this));
    return QObject::qt_metacast(_clname);
}

int uiSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ZoneSetter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZoneSetter[] = {
    "ZoneSetter\0\0set(bool)\0"
};

void ZoneSetter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoneSetter *_t = static_cast<ZoneSetter *>(_o);
        switch (_id) {
        case 0: _t->set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZoneSetter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZoneSetter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZoneSetter,
      qt_meta_data_ZoneSetter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoneSetter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoneSetter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoneSetter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoneSetter))
        return static_cast<void*>(const_cast< ZoneSetter*>(this));
    return QObject::qt_metacast(_clname);
}

int ZoneSetter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_uiRadioButtons[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_uiRadioButtons[] = {
    "uiRadioButtons\0"
};

void uiRadioButtons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData uiRadioButtons::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiRadioButtons::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_uiRadioButtons,
      qt_meta_data_uiRadioButtons, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiRadioButtons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiRadioButtons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiRadioButtons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiRadioButtons))
        return static_cast<void*>(const_cast< uiRadioButtons*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiRadioButtons*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int uiRadioButtons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_uiMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_uiMenu[] = {
    "uiMenu\0\0updateZone(int)\0"
};

void uiMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        uiMenu *_t = static_cast<uiMenu *>(_o);
        switch (_id) {
        case 0: _t->updateZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData uiMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiMenu::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_uiMenu,
      qt_meta_data_uiMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiMenu))
        return static_cast<void*>(const_cast< uiMenu*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiMenu*>(this));
    return QComboBox::qt_metacast(_clname);
}

int uiMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_uiBargraph[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_uiBargraph[] = {
    "uiBargraph\0"
};

void uiBargraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData uiBargraph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiBargraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uiBargraph,
      qt_meta_data_uiBargraph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiBargraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiBargraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiBargraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiBargraph))
        return static_cast<void*>(const_cast< uiBargraph*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiBargraph*>(this));
    return QObject::qt_metacast(_clname);
}

int uiBargraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_uiNumEntry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_uiNumEntry[] = {
    "uiNumEntry\0\0v\0setValue(double)\0"
};

void uiNumEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        uiNumEntry *_t = static_cast<uiNumEntry *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData uiNumEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject uiNumEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uiNumEntry,
      qt_meta_data_uiNumEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &uiNumEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *uiNumEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *uiNumEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiNumEntry))
        return static_cast<void*>(const_cast< uiNumEntry*>(this));
    if (!strcmp(_clname, "uiItem"))
        return static_cast< uiItem*>(const_cast< uiNumEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int uiNumEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QTGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QTGUI[] = {
    "QTGUI\0\0update()\0"
};

void QTGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTGUI *_t = static_cast<QTGUI *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QTGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTGUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTGUI,
      qt_meta_data_QTGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTGUI))
        return static_cast<void*>(const_cast< QTGUI*>(this));
    if (!strcmp(_clname, "GUI"))
        return static_cast< GUI*>(const_cast< QTGUI*>(this));
    if (!strcmp(_clname, "MetaDataUI"))
        return static_cast< MetaDataUI*>(const_cast< QTGUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
