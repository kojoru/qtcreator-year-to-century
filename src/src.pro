include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle
CONFIG   -= qt

TEMPLATE = lib

TARGET = myapp

SOURCES += \
    converter.cpp
HEADERS += \
    converter.h
