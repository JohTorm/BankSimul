#ifndef MOOTTORI_H
#define MOOTTORI_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>
#include <QTimer>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include "C:\projekti\DLLpin\SQL_DLL\mysql.h"
namespace Ui {
class Moottori;
}

class Moottori : public QDialog
{
    Q_OBJECT

public:
    explicit Moottori(QWidget *parent = nullptr);
    ~Moottori();
    bool tarkastus(QString apu);
    void addID(QString idKortti);
    bool palautaPin();
signals:
    void pinOikein(QString id);
    void pinVaarin(QString id);
private slots:
    void on_pushButtonSulje_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButtonPin_clicked();

    void on_pushButton_C_clicked();

    void ajastinLaukesi();

private:
    Ui::Moottori *ui;
    MySQL *mySQL;
    QString pin = "";
    QTimer *timer;
    int calc = 10;
    int pinSyotetty = 0;
    int pinJaljella = 3;
    QString apuidKortti="";
    bool apuPin = false;
};

#endif // MOOTTORI_H
