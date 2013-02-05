TEMPLATE = subdirs

SUBDIRS *= utilities \
           engine \
           cli \
           qt

utilities.file = 3rdparty/common-cpp/code/utilities.pro

engine.depends = utilities

cli.depends = engine

qt.depends = engine
