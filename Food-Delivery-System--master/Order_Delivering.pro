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
    UserCustomer.cpp \
    customerCart.cpp \
    customerOrderCheck.cpp \
    datastructure.cpp \
    surferView.cpp \
    order.cpp \
    paybill.cpp \
    delivermainpage.cpp \
    taskreply.cpp \
    delivercheck.cpp

HEADERS  += \
    CustomerMain.h \
    Login.h \
    UserCustomer.h \
    customerCart.h \
    customerOrderCheck.h \
    datastruct.h \
    order.h \
    paybill.h \
    delivermainpage.h \
    surferView.h \
    taskreply.h \
    delivercheck.h

FORMS    += \
    CustomerMain.ui \
    Login.ui \
    SignUpTem.ui \
    customerCart.ui \
    customerOrderCheck.ui \
    surferView.ui \
    order.ui \
    paybill.ui \
    delivermainpage.ui \
    taskreply.ui \
    delivercheck.ui

RESOURCES += \
    pic.qrc

