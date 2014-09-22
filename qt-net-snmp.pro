######################################################################
# Automatically generated by qmake (2.01a) s�b ago 30 19:10:50 2014
######################################################################

TEMPLATE = app

OBJECTS_DIR = build
MOC_DIR = build

DEPENDPATH += . include src

INCLUDEPATH += . include src

HEADERS += \
    include/qsnmpmanager.h \
    include/types.h \
    include/global.h \
    include/qsnmpexception.h \
    include/qsnmpobject.h \
    include/qsnmpcore.h \
    include/qsnmpdata.h \
    include/qsnmpoid.h \
    include/ostream.h \
    include/qmibtree.h

SOURCES += \
    src/qsnmpmanager.cpp \
    src/main.cpp \
    src/qsnmpobject.cpp \
    src/qsnmpcore.cpp \
    src/qsnmpoid.cpp \
    src/qsnmpdata.cpp \
    src/ostream.cpp \
    src/qmibtree.cpp

LIBS += -lnetsnmp

OTHER_FILES += \
    AUTHOR \
    LICENSE \
    README
