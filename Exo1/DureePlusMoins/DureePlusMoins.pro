TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -static

SOURCES += main.cpp \
    Duree.cpp \
    TestDuree.cpp

HEADERS += \
    duree.h
