#ifndef MYSQL_GLOBAL_H
#define MYSQL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MYSQL_LIBRARY)
#  define MYSQLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MYSQLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MYSQL_GLOBAL_H
