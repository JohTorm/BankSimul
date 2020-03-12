#ifndef RFID_H
#define RFID_H

#include <QObject>
#include <qdebug.h>
#include <QtSerialPort/QSerialPort>
#include "rfid_global.h"

class RFIDSHARED_EXPORT Rfid : public QObject
{
    Q_OBJECT

public:
    Rfid();
    void PalautaPankkikortinNumeroKomponentti();
    QString cardSerialNumber;
    QString palautettavaArvo;

private:
    QSerialPort *serial;

signals:
    void signaaliRpSignaali();

public slots:
    void rajapintaSignaali();
    QString tulostus();
};

#endif // RFID_H
