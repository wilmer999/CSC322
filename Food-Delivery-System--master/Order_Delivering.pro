#-------------------------------------------------
# Wilmer Chang
#
#
# CSC322
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Order_Delivering
TEMPLATE = app


SOURCES += main.cpp\
    CustomerMain.cpp \
    Login.cpp \
    custcart.cpp \
    customerOrderCheck.cpp \
    datastructure.cpp \
    dialog.cpp \
    signup.cpp \
    surferView.cpp \
    order.cpp \
    delivermainpage.cpp \
    taskreply.cpp \
    delivercheck.cpp

HEADERS  += \
    CustomerMain.h \
    Login.h \
    OrderdataStore.h \
    UserCustomer.h \
    custcart.h \
    customerOrderCheck.h \
    database.h \
    datastruct.h \
    dialog.h \
    order.h \
    delivermainpage.h \
    signup.h \
    surferView.h \
    taskreply.h \
    delivercheck.h

FORMS    += \
    CustomerMain.ui \
    Login.ui \
    custcart.ui \
    customerOrderCheck.ui \
    dialog.ui \
    signup.ui \
    surferView.ui \
    order.ui \
    delivermainpage.ui \
    taskreply.ui \
    delivercheck.ui

RESOURCES += \
    pic.qrc

