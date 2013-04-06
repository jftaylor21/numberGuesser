HEADERS *= $$PWD/CLI.h \
           $$PWD/BaseMenu.h \
           $$PWD/MainMenu.h \
           $$PWD/JoinGameMenu.h \
           $$PWD/CreateGameMenu.h

SOURCES *= $$PWD/CLI.cpp \
           $$PWD/main.cpp \
           $$PWD/BaseMenu.cpp \
           $$PWD/MainMenu.cpp \
           $$PWD/JoinGameMenu.cpp \
           $$PWD/CreateGameMenu.cpp

CONFIG -= qt
CONFIG *= console

target.path = c:/numberGuesser
INSTALLS *= target

include($$PWD/../3rdparty/common-cpp/common-cpp.pri)
include($$PWD/../engine.pri)
