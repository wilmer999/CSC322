#-------------------------------------------------
# Wilmer Chang
#
#
# CSC322
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Order_Delivering
TEMPLATE = app


SOURCES += main.cpp\
    CustomerMain.cpp \
    customerCart.cpp \
    customerOrderCheck.cpp \
    datastructure.cpp \
    surferView.cpp \
    widget.cpp \
    order.cpp \
    paybill.cpp \
    delivermainpage.cpp \
    taskreply.cpp \
    delivercheck.cpp

HEADERS  += \
    CustomerMain.h \
    customerCart.h \
    customerOrderCheck.h \
    datastruct.h \
    order.h \
    paybill.h \
    delivermainpage.h \
    surferView.h \
    taskreply.h \
    delivercheck.h \
    Widget.h

FORMS    += \
    CustomerMain.ui \
    customerCart.ui \
    customerOrderCheck.ui \
    surferView.ui \
    widget.ui \
    order.ui \
    paybill.ui \
    delivermainpage.ui \
    taskreply.ui \
    delivercheck.ui

RESOURCES += \
    pic.qrc
