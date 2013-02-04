TEMPLATE = subdirs

CONFIG *= ordered

SUBDIRS *= engine \
           cli \
           qt

cli.depends = engine

qt.depends = engine
