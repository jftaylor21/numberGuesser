TEMPLATE = lib

HEADERS *= $$PWD/BaseGame.h \
           $$PWD/BasePlayer.h

SOURCES *= $$PWD/BaseGame.cpp \
           $$PWD/BasePlayer.cpp

CONFIG -= qt

INSTALL_LIB_PATH = $$PWD/../
include($$PWD/../3rdparty/common-cpp/code/3rdparty/common-qmake/pri/installlib.pri)
