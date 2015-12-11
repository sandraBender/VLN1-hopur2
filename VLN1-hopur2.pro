QT += core sql
QT += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VLN1-hopur2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computer.cpp \
    scientist.cpp \
    service.cpp \
    database.cpp \
    sciwindow.cpp \
    addsci.cpp

HEADERS  += mainwindow.h \
    computer.h \
    scientist.h \
    service.h \
    database.h \
    sciwindow.h \
    addsci.h

FORMS    += mainwindow.ui \
    sciwindow.ui \
    addsci.ui

DISTFILES +=
