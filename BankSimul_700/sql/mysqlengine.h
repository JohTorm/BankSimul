#ifndef MYSQLENGINE_H
#define MYSQLENGINE_H

#include <QTime>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QWidget>
#include <QtSql/QSqlTableModel>

//#include <QSql>


class MySQLEngine


{
public:
    MySQLEngine();
    ~MySQLEngine();

    //palauttaja-funktiot
    QString returnPincode(QString IDKortti);
    QString returnSaldo(QString IDKortti);
    QString returnIdTili(QString IDKortti);

    QString returnEtuNimi(QString IDKortti);
    QString returnSukuNimi(QString IDKortti);
    QString returnKokoNimi(QString IDKortti);

    QString returnNostoRaja(QString IDKortti);
    QString returnNostoRajaKaytetty(QString IDKortti);

    //muokkaus-funktiot
    void editSaldo(QString IDKortti, QString uusiSaldo);
    void editNostorajaKaytetty(QString IDKortti, QString uusiNostoRajaKaytetty);

    bool createConnection();

private:
    QString pinCodeFromDatabase;
    QString saldoFromDatabase;
    QString idTiliFromDatabase;

    QString etuNimiFromDatabase;
    QString sukuNimiFromDatabase;
    QString kokoNimiFromDatabase;

    QString idAsiakasFromDatabase;
    QString nostoRajaFromDatabase;
    QString nostoRajaKaytettyFromDatabse;

    //QSqlDatabase *db;
};

#endif // MYSQLENGINE_H
