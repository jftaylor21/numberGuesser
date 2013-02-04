TEMPLATE = subdirs

SUBDIRS *= utilities \
           code

utilities.file = 3rdparty/common-cpp/code/utilities.pro

code.depends = utilities
