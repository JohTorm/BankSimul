#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStackedWidget>
#include <QMainWindow>
#include <QTimer>
#include <QLineEdit>
#include <QMessageBox>
#include "C:\BankSimul\BankSimul_700\rfid\rfid.h"
#include "C:\BankSimul\BankSimul_700\MySQL_dll_v3\mysql.h"
#include "C:\BankSimul\BankSimul_700\DLL_pin_v2\dllpin.h"
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void unCheckAll();

private slots:
    void on_pushButtonNosta_clicked();

    void on_pushButtonSaldo_clicked();

    void on_pushButtonLahjoita_clicked();

    void on_pushButtonTilitapahtumat_clicked();

    void on_pushButtonSaldoTakasin_clicked();

    void on_pushButtonTiliTakaisin_clicked();

    void on_pushButtonNostaJaLahjoitaPeruuta_clicked();

    void on_pushButtonNostaJaLahjoitaRaha_clicked();

    void on_pushButtonNostaPeruuta_clicked();

    void on_pushButtonNostaRahat_clicked();

    void on_pushButtonNostaJaSaldo_clicked();

    void on_pushButtonNostaJaLahjoitaSaldo_clicked();

    void on_pushButtonNumNosta_clicked();

    void on_pushButtonNum1_clicked();

    void on_pushButtonNum2_clicked();

    void on_pushButtonNum3_clicked();

    void on_pushButtonNum4_clicked();

    void on_pushButtonNum5_clicked();

    void on_pushButtonNum6_clicked();

    void on_pushButtonNum7_clicked();

    void on_pushButtonNum8_clicked();

    void on_pushButtonNum9_clicked();

    void on_pushButtonNumC_clicked();

    void on_pushButtonNum0_clicked();

    void on_pushButtonNostaMuuSumma_clicked();

    void on_pushButtonNumPeruuta_clicked();

    void on_pushButtonNostaJaLahjoitaMuuSumma_clicked();

    void on_pushButtonNostaJaLahjoita_20_clicked();

    void on_pushButtonNostaJaLahjoita_50_clicked();

    void on_pushButtonNostaJaLahjoita_90_clicked();

    void on_pushButtonNostaJaLahjoita_120_clicked();

    void on_pushButtonNostaJaLahjoita_200_clicked();

    void on_pushButtonLahjoitus_1_clicked();

    void on_pushButtonLahjoitus_2_clicked();

    void on_pushButtonLahjoitus_5_clicked();

    void on_pushButtonNosta_20_clicked();

    void on_pushButtonNosta_50_clicked();

    void on_pushButtonNosta_90_clicked();

    void on_pushButtonNosta_120_clicked();

    void on_pushButtonNosta_200_clicked();

    void kortinLuku();

    void kirjautunutUlos();

    void on_pushButtonUlos_clicked();

    void rfidAjastin();

    void virheellinenSumma(QString viesti);

    void ajastin();
private:
    Ui::MainWindow *ui;
    QString Num = "";
    int Nosto = 0;
    int Lahjoitus = 0;
    float saldo;
    float uusisaldo;
    int edellinenSivu;
    int calc = 30;

    Rfid *objectRfid;
    MySQL * objectMySQL;
    DLLpin *objectDLLpin;
    QString idKortti;
    QMessageBox *objectQMessageBox;
    QTimer *objectTimer;
    QTimer *objectTimerOne;
    int aika;

    bool kirjautunutSisaan = false;
    bool kirjautuminenKaynnissa = false;
    bool messageBoxNakyvissa =  false;
};

#endif // MAINWINDOW_H
