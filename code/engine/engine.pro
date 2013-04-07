TEMPLATE = lib

HEADERS *= $$PWD/GameServer.h \
           $$PWD/GameClient.h

SOURCES *= $$PWD/GameServer.cpp \
           $$PWD/GameClient.cpp

CONFIG -= qt

INSTALL_LIB_PATH = $$PWD/../
include($$PWD/../3rdparty/common-cpp/code/3rdparty/common-qmake/pri/installlib.pri)
