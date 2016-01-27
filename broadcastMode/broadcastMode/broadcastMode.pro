TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    weatherdata.cpp \
    observer.cpp \
    staticsobserver.cpp

HEADERS += \
    weatherdata.h \
    observer.h \
    staticsobserver.h

QMAKE_CXXFLAGS += -std=gnu++0x

