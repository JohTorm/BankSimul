#ifndef MYSQL_H
#define MYSQL_H

#include "mysql_global.h"
#include "mysqlengine.h"


/*
//#include "connection.h"

//#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>

#include <QSql>
*/


class /*MYSQLSHARED_EXPORT*/ MySQL
{

public:
    //MySQL();

    //get-funktiot
    QString MYSQLSHARED_EXPORT getPIN(QString IDkortti); //rajapintafunktio pinkoodin hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getSaldo(QString IDkortti); //rajapintafunktio saldon hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getIdTili(QString IDkortti); //rajapintafunktio tilin id-numeron hakemiseksi tietokannasta

    QString MYSQLSHARED_EXPORT getKokoNimi(QString IDkortti); //rajapintafunktio asiakkaan koko nimen hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getEtuNimi(QString IDkortti); //rajapintafunktio asiakkaan etunimen hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getSukuNimi(QString IDkortti); //rajapintafunktio asiakkaan sukunimen hakemiseksi tietokannasta

    QString MYSQLSHARED_EXPORT getNostoRaja(QString IDkortti); //rajapintafunktio nostorajan hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getNostoRajaKaytetty(QString IDkortti); //rajapintafunktio käytetyn nostorajan hakemiseksi tietokannasta

    //set-funktiot
    void MYSQLSHARED_EXPORT setSaldo(QString IDkortti, QString uusiSaldo); //rajapintafunktio saldon asettamiseksi tietokantaan
    void MYSQLSHARED_EXPORT setNostoRajaKaytetty(QString IDkortti, QString uusiNostoRajaKaytetty); //rajapintafunktio käytetyn nostorajan asettamiseksi tietokantaan

private:
    MySQLEngine *mySqlEngine;

    QString pinCodeToReturn;
    QString saldoToReturn;
    QString idTiliToReturn;

    QString etuNimiToReturn;
    QString sukuNimiToReturn;
    QString kokoNimiToReturn;

    QString NostoRajaToReturn;
    QString NostoRajaKaytettyToReturn;

};


#endif // MYSQL_H
