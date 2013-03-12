INCLUDEPATH *= $$PWD/../3rdparty/common-cpp/include

LIBS *= -L$$PWD/../3rdparty/common-cpp/lib \
        -lutilities

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

libs.path = $$target.path
libs.files = $$PWD/../3rdparty/common-cpp/lib/*.dll
INSTALLS *= libs
