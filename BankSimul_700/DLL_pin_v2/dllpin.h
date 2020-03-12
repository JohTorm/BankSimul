#ifndef DLLPIN_H
#define DLLPIN_H

#include "dllpin_global.h"
#include "moottori.h"
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QtDebug>
class DLLPINSHARED_EXPORT DLLpin : public QObject
{

public:
    bool DLLpincode(QString idKortti);

private:
    Moottori *olioMoottori;

};

#endif // DLLPIN_H
