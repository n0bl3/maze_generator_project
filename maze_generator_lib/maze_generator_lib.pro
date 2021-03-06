#-------------------------------------------------
#
# Project created by QtCreator 2011-11-22T19:23:27
#
#-------------------------------------------------

QT       -= core gui

TARGET = maze_generator_lib
TEMPLATE = lib
CONFIG += staticlib

DEFINES += MAZE_GENERATOR_LIB_LIBRARY

SOURCES += current_maze.cpp \
	dfs_maze_generator.cpp \
	maze.cpp \
	random_maze_generator.cpp \
    location_t.cpp \
    change_command.cpp \
    wall_position_t.cpp \
    maze_generator_factory.cpp \
    unknown_maze_generator_exception.cpp

HEADERS += current_maze.h \
	dfs_maze_generator.h \
	direction_t.h \
	maze_generator_interface.h \
	maze_generator_lib_global.h \
	maze.h \
	random_maze_generator.h \
	vector2d.h \
    location_t.h \
    change_command.h \
    wall_position_t.h \
    maze_generator_factory.h \
    unknown_maze_generator_exception.h \
    maze_generator_type.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE6440EA2
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = maze_generator_lib.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
