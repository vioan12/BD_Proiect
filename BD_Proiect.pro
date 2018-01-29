#-------------------------------------------------
#
# Project created by QtCreator 2018-01-21T23:40:43
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BD_Proiect
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    addparticipant.cpp \
    addorganizatie.cpp \
    addcategoriegreutate.cpp \
    databasemanager.cpp \
    participant.cpp \
    categoriegreutate.cpp \
    organizatie.cpp \
    clasamentgreutate.cpp \
    clasament.cpp \
    tur.cpp \
    etapa.cpp

HEADERS += \
        mainwindow.h \
    addparticipant.h \
    addorganizatie.h \
    addcategoriegreutate.h \
    databasemanager.h \
    participant.h \
    categoriegreutate.h \
    organizatie.h \
    clasamentgreutate.h \
    clasament.h \
    tur.h \
    etapa.h

FORMS += \
        mainwindow.ui \
    addparticipant.ui \
    addorganizatie.ui \
    addcategoriegreutate.ui
