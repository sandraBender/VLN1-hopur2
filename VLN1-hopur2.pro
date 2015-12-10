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
    database.cpp

HEADERS  += mainwindow.h \
    computer.h \
    scientist.h \
    service.h \
    database.h

FORMS    += mainwindow.ui
