#ifndef MYSQL_H
#define MYSQL_H

#include "mysql_global.h"
#include "mysqlengine.h"




class /*MYSQLSHARED_EXPORT*/ MySQL : public QObject
{
    Q_OBJECT

public:
   MYSQLSHARED_EXPORT MySQL();
   MYSQLSHARED_EXPORT ~MySQL();

//**************get-funktiot*************************************
    QString MYSQLSHARED_EXPORT getIdKortti(QString RFIDkortti);

    bool MYSQLSHARED_EXPORT getKaytossa(QString IDkortti); //palauttaa falsen jos kortti on lukittu
    int MYSQLSHARED_EXPORT getPinYrityksiaJaljella(QString IDkortti);

    QString MYSQLSHARED_EXPORT getPIN(QString IDkortti); //rajapintafunktio pinkoodin hakemiseksi tietokannasta
    float MYSQLSHARED_EXPORT getSaldo(QString IDkortti); //rajapintafunktio saldon hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getIdTili(QString IDkortti); //rajapintafunktio tilin id-numeron hakemiseksi tietokannasta

    QString MYSQLSHARED_EXPORT getKokoNimi(QString IDkortti); //rajapintafunktio asiakkaan koko nimen hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getEtuNimi(QString IDkortti); //rajapintafunktio asiakkaan etunimen hakemiseksi tietokannasta
    QString MYSQLSHARED_EXPORT getSukuNimi(QString IDkortti); //rajapintafunktio asiakkaan sukunimen hakemiseksi tietokannasta

    float MYSQLSHARED_EXPORT getNostoRaja(QString IDkortti); //rajapintafunktio nostorajan hakemiseksi tietokannasta
    float MYSQLSHARED_EXPORT getNostoRajaKaytetty(QString IDkortti); //rajapintafunktio käytetyn nostorajan hakemiseksi tietokannasta

    //Tilitapahtumien haku
    int MYSQLSHARED_EXPORT getTilitapahtumaRiviMaara(QString IDkortti); //palauttaa rivimäärän. HUOM ensimmäisen rivin numero on 0, joten viimeisen rivin numero getTilitapahtumaID() -funktiota varten on rivimäärä -1
    QString MYSQLSHARED_EXPORT getTilitapahtumaID(QString IDkortti, int rivi);

    QString MYSQLSHARED_EXPORT getTilitapahtumaTyyppi(QString IDTilitapahtuma);
    QString MYSQLSHARED_EXPORT getTilitapahtumaSumma(QString IDTilitapahtuma);
    QString MYSQLSHARED_EXPORT getTilitapahtumaPVM(QString IDTilitapahtuma);


//************set-funktiot********************************************************
    bool MYSQLSHARED_EXPORT setSaldo(QString IDkortti, float uusiSaldo); //rajapintafunktio saldon asettamiseksi tietokantaan
    bool MYSQLSHARED_EXPORT setNostoRajaKaytetty(QString IDkortti, float uusiNostoRajaKaytetty); //rajapintafunktio käytetyn nostorajan asettamiseksi tietokantaan

    bool MYSQLSHARED_EXPORT setUusiTilitapahtuma(QString IDkortti, float summa, QString tapahtumaTyyppi); //

    bool MYSQLSHARED_EXPORT setKorttiKaytossa(QString IDkortti, bool kaytossa); //käytä mielummin signaalia lukitseKortti();

public slots:
    void MYSQLSHARED_EXPORT lukitseKortti(QString IDkortti);// lukitsee kortin
    void MYSQLSHARED_EXPORT pinKoodiVaarin(QString IDkortti); //vähentää pin-koodin yrityksiä yhdellä ja lukitsee kortin jos 3. kerta väärin.
    void MYSQLSHARED_EXPORT pinKoodiOikein(QString IDkortti); //resetoi pin-koodin yritykset takaisin 3

signals:
    void MYSQLSHARED_EXPORT failedToSetSaldo();
    void MYSQLSHARED_EXPORT failedToSetNostoRajaKaytetty();
    void MYSQLSHARED_EXPORT failedToSetUusiTilitapahtuma();

    void MYSQLSHARED_EXPORT korttiLukittu(); //lukitseKortti(QString IDkortti) emitoi tänän, kun kortti on lukittu.


private:
    MySQLEngine *mySqlEngine;

};


#endif // MYSQL_H
