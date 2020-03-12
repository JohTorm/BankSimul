#ifndef MYSQLENGINE_H
#define MYSQLENGINE_H

#define Connected true
#define NotConnected false

#include <QTime>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QWidget>
#include <QtSql/QSqlTableModel>




class MySQLEngine

{


public:
    MySQLEngine();
    ~MySQLEngine();

    //palauttaja-funktiot
    QString returnIdKortti(QString RFIDkortti);

    bool returnKaytossa(QString IDKortti);
    int returnPinYrityksiaJaljella(QString IDKortti);
    QString returnPincode(QString IDKortti);

    QString returnSaldo(QString IDKortti);
    QString returnIdTili(QString IDKortti);

    QString returnEtuNimi(QString IDKortti);
    QString returnSukuNimi(QString IDKortti);
    QString returnKokoNimi(QString IDKortti);

    QString returnNostoRaja(QString IDKortti);
    QString returnNostoRajaKaytetty(QString IDKortti);


    int returnTilitapahtumaRiviMaara(QString IDKortti); //palauttaa tilin tapahtumien lukumäärän
    QString returnTapahtumaID(QString IDKortti, int row);
    QString returnTapahtumaTyyppi(QString IDtilitapahtuma);
    QString returnTapahtumaSumma(QString IDtilitapahtuma);
    QString returntTapahtumaPVM(QString IDtilitapahtuma);



    //muokkaus-funktiot
    bool editKaytossa(QString IDKortti, bool kaytossa);
    bool editPinYrityksiaJaljella(QString IDKortti, int uusiMaara);

    bool editSaldo(QString IDKortti, float uusiSaldo);
    bool editNostorajaKaytetty(QString IDKortti, float uusiNostoRajaKaytetty);

    bool createTilitapahtuma(QString IDKortti, float summa, QString tapahtumaTyyppi);

    bool createConnection();


private:
    QString idKorttiFromDatabase;

    QString pinCodeFromDatabase;
    QString saldoFromDatabase;
    QString idTiliFromDatabase;

    QString etuNimiFromDatabase;
    QString sukuNimiFromDatabase;
    QString kokoNimiFromDatabase;

    QString idAsiakasFromDatabase;
    QString nostoRajaFromDatabase;
    QString nostoRajaKaytettyFromDatabse;


    QString idTilitapahtumaFromDatabase;
    QString tilitapahtumaTyyppiFromDatabase;
    QString tilitapahtumaSummaFromDatabase;
    QString tilitapahtumaPvmFromDatabase;

    bool kaytossaFromDatabase;
    int pinYrityksiaJaljellaFromDatabase;




    bool connectionStatus;
    QString errorMessage = "NotConnected"; //functions return this message if connectionStatus = NotConnected


};

#endif // MYSQLENGINE_H
