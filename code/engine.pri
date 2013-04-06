INCLUDEPATH *= $$PWD/include

LIBS *= -L$$PWD/lib \
        -lengine

libs.path = $$target.path
libs.files *= $$PWD/lib/engine.dll
INSTALLS *= libs
