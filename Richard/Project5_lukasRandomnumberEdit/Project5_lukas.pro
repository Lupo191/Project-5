TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += C:\Qt\include
# LIBS += -L C:\Qt


SOURCES += main.cpp \
    planet.cpp \
    solarsystem.cpp \
    random.cpp

HEADERS += \
    planet.h \
    solarsystem.h \
    random.h

