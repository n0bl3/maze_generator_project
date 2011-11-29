#ifndef MAZE_GENERATOR_LIB_GLOBAL_H
#define MAZE_GENERATOR_LIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MAZE_GENERATOR_LIB_LIBRARY)
#  define MAZE_GENERATOR_LIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MAZE_GENERATOR_LIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MAZE_GENERATOR_LIB_GLOBAL_H