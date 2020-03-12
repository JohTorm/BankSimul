#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QLayout>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);


    ui->stackedWidget->setCurrentIndex(8); //aloittaa päänäytöstä
    //idKortti="101"; //debuggausta varten

    objectRfid = new Rfid;
    objectMySQL = new MySQL;
    objectDLLpin = new DLLpin;
    objectTimer = new QTimer (this);
    objectTimerOne = new QTimer ( this);

    objectRfid->PalautaPankkikortinNumeroKomponentti();
    connect(objectRfid, SIGNAL(signaaliRpSignaali()), this, SLOT(kortinLuku()));
    objectTimer->setInterval(1200);
    connect(objectTimer,SIGNAL(timeout()),this,SLOT(rfidAjastin()));
    connect(objectTimerOne,SIGNAL(timeout()),this,SLOT(ajastin()));
    objectTimerOne->setInterval(1000);
    objectTimerOne->start();

    aika = 3;

    ui->pushButtonNosta_20->setCheckable(true);
    ui->pushButtonNosta_20->setChecked(false);
    ui->pushButtonNosta_50->setCheckable(true);
    ui->pushButtonNosta_50->setChecked(false);
    ui->pushButtonNosta_90->setCheckable(true);
    ui->pushButtonNosta_90->setChecked(false);
    ui->pushButtonNosta_120->setCheckable(true);
    ui->pushButtonNosta_120->setChecked(false);
    ui->pushButtonNosta_200->setCheckable(true);
    ui->pushButtonNosta_200->setChecked(false);

    ui->pushButtonNostaJaLahjoita_20->setCheckable(true);
    ui->pushButtonNostaJaLahjoita_20->setChecked(false);
    ui->pushButtonNostaJaLahjoita_50->setCheckable(true);
    ui->pushButtonNostaJaLahjoita_50->setChecked(false);
    ui->pushButtonNostaJaLahjoita_90->setCheckable(true);
    ui->pushButtonNostaJaLahjoita_90->setChecked(false);
    ui->pushButtonNostaJaLahjoita_120->setCheckable(true);
    ui->pushButtonNostaJaLahjoita_120->setChecked(false);
    ui->pushButtonNostaJaLahjoita_200->setCheckable(true);
    ui->pushButtonNostaJaLahjoita_200->setChecked(false);

    ui->pushButtonLahjoitus_1->setCheckable(true);
    ui->pushButtonLahjoitus_1->setChecked(false);
    ui->pushButtonLahjoitus_2->setCheckable(true);
    ui->pushButtonLahjoitus_2->setChecked(false);
    ui->pushButtonLahjoitus_5->setCheckable(true);
    ui->pushButtonLahjoitus_5->setChecked(false);

    ui->pushButtonNostaMuuSumma->setCheckable(true);
    ui->pushButtonNostaJaLahjoitaMuuSumma->setCheckable(true);

    saldo = objectMySQL->getSaldo(idKortti);
    QString a = QString::number(saldo);
    ui->textEditSaldo->setText(a);

    qDebug() << saldo;
}

void MainWindow::unCheckAll()
{

    ui->pushButtonNosta_20->setChecked(false);
    ui->pushButtonNosta_50->setChecked(false);
    ui->pushButtonNosta_90->setChecked(false);
    ui->pushButtonNosta_120->setChecked(false);
    ui->pushButtonNosta_200->setChecked(false);

    ui->pushButtonNostaJaLahjoita_20->setChecked(false);
    ui->pushButtonNostaJaLahjoita_50->setChecked(false);
    ui->pushButtonNostaJaLahjoita_90->setChecked(false);
    ui->pushButtonNostaJaLahjoita_120->setChecked(false);
    ui->pushButtonNostaJaLahjoita_200->setChecked(false);


    ui->pushButtonNostaMuuSumma->setChecked(false);
    ui->pushButtonNostaJaLahjoitaMuuSumma->setChecked(false);

    ui->pushButtonNostaMuuSumma->setText("MUU SUMMA");
    ui->pushButtonNostaJaLahjoitaMuuSumma->setText("MUU SUMMA");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectRfid;
    delete objectMySQL;
    delete objectDLLpin;
}

void MainWindow::kortinLuku()
{
    QString rfidKortinNumero = objectRfid->cardSerialNumber;
    idKortti = objectMySQL->getIdKortti(rfidKortinNumero);
    rfidAjastin();
    aika=3;
    objectTimer->start();

    if(objectMySQL->getKaytossa(idKortti)){
        if(kirjautunutSisaan == false && kirjautuminenKaynnissa == false)
        {
            kirjautuminenKaynnissa = true;
            if(objectDLLpin->DLLpincode(idKortti))
            {
                kirjautunutSisaan = true;
                kirjautuminenKaynnissa = false;
                ui->stackedWidget->setCurrentIndex(7);
                ui->pushButtonSaldoTakasin->show();
                aika = 3;
                objectTimer->start();
                rfidAjastin();

            }else {
               kirjautuminenKaynnissa = false;
                  }
        }
    }
    else if(messageBoxNakyvissa ==false){
        messageBoxNakyvissa = true;
        QMessageBox msgBox;
        msgBox.setWindowTitle("VIRHE");
        QSpacerItem* horizontalSpacer = new QSpacerItem(500, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
        msgBox.setText("Kortti lukittu! Ota yhteys Lallukkaan!");

        QGridLayout* layout = (QGridLayout*)msgBox.layout();
        layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        msgBox.exec();
        messageBoxNakyvissa = false;

    }


    if(idKortti != objectMySQL->getIdKortti(rfidKortinNumero)){

        ui->stackedWidget->setCurrentIndex(0);

    }
}
/*
    index 0 = muu summa
          2 = ota rahat
          3 = rahan nosto
          4 = nosta ja lahjoita
          5 = Tilitapahtumat
          6 = Saldo
          7 = päänäyttö
          8 = aloitus
          9 = kirjautunut ulos
 */
void MainWindow::on_pushButtonNosta_clicked()   //rahan nosto näkymä
{
    calc = 30;
    unCheckAll();
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonSaldo_clicked()   //näyttää saldon
{
    calc = 30;
    saldo = objectMySQL->getSaldo(idKortti);
    QString a = QString::number(saldo);
    ui->textEditSaldo->setText(a);
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButtonLahjoita_clicked()    //rahan nosto ja lahjoitus näkymä
{
    calc = 30;
    unCheckAll();
    on_pushButtonLahjoitus_1_clicked();
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonTilitapahtumat_clicked()  //näyttää tilitapahtumat
{
    calc = 30;
    disconnect(objectRfid, SIGNAL(signaaliRpSignaali()), this, SLOT(kortinLuku()));
    //aika=8;
    int riviMaara = objectMySQL->getTilitapahtumaRiviMaara(idKortti);
    QString tilitapahtumaID;

    QString tilitapahtumaKaikki;
    QString tilitapahtumaPaiva;
    QString tilitapahtumaTyyppi;
    QString tilitapahtumaSumma;


    objectTimer->stop();

    for(int i=0; i<10; i++)
    {

        qDebug() << riviMaara;
    tilitapahtumaID = objectMySQL->getTilitapahtumaID(idKortti, riviMaara-1);

    tilitapahtumaPaiva = tilitapahtumaPaiva+"\n"+objectMySQL->getTilitapahtumaPVM(tilitapahtumaID);
    tilitapahtumaTyyppi = tilitapahtumaTyyppi+"\n"+objectMySQL->getTilitapahtumaTyyppi(tilitapahtumaID);
    tilitapahtumaSumma = tilitapahtumaSumma+"\n"+objectMySQL->getTilitapahtumaSumma(tilitapahtumaID);

    //tilitapahtumaKaikki = tilitapahtumaKaikki++tilitapahtumaPaiva+"\t\t\t\t"+tilitapatumaTyyppi+"\t\t\t\t\t\t"+tilitapahtumaSumma;

    riviMaara--;

    }
    connect(objectRfid, SIGNAL(signaaliRpSignaali()), this, SLOT(kortinLuku()));
    objectTimer->start();
    ui->textBrowserPvm->setText(tilitapahtumaPaiva);
    ui->textBrowserTyyppi->setText(tilitapahtumaTyyppi);
    ui->textBrowser->setText(tilitapahtumaSumma);

   // ui->textEditTiliTapahtumat->setText(tilitapahtumaKaikki);
   //ui->textEditTiliTapahtumat->setReadOnly(true);
    ui->stackedWidget->setCurrentIndex(5);
   // aika = 3;
}

void MainWindow::on_pushButtonSaldoTakasin_clicked()    //Saldosta takaisin päänäyttöön
{
    calc = 30;
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButtonTiliTakaisin_clicked()    //tilitapahtumasta takaisin päänäyttöön
{
    calc = 30;
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButtonNostaJaLahjoitaPeruuta_clicked()  //takaisin päänäyttöön
{
    calc = 30;
    ui->pushButtonNostaJaLahjoitaMuuSumma->setText("MUU SUMMA");
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButtonNostaJaLahjoitaRaha_clicked() //ota vain rahat
{
    calc = 30;
    saldo = objectMySQL->getSaldo(idKortti);
    uusisaldo = saldo-(Nosto+Lahjoitus);

    float nostoraja = objectMySQL->getNostoRaja(idKortti);
    float nostorajaKaytetty = objectMySQL->getNostoRajaKaytetty(idKortti);
    float nostorajaJaljella;
    nostorajaJaljella = nostoraja - nostorajaKaytetty;

    if(nostorajaJaljella < Nosto && nostoraja != 0)
    {
        virheellinenSumma("Nostoraja ylitetty");
    }else{

            if(uusisaldo>=0){
                objectMySQL->setSaldo(idKortti,uusisaldo);
                objectMySQL->setUusiTilitapahtuma(idKortti,-Nosto-Lahjoitus,"Nosto ja lahjoitus");
                objectMySQL->setNostoRajaKaytetty(idKortti, nostorajaKaytetty+Nosto);

                ui->stackedWidget->setCurrentIndex(2);
                QTimer::singleShot(3000, this, SLOT(kirjautunutUlos()));
            }else {
            virheellinenSumma("Tilin kate ei riitä");
            }
    }

}

void MainWindow::on_pushButtonNostaPeruuta_clicked()    //takaisin päänäyttöön
{
    calc = 30;
    ui->pushButtonNostaMuuSumma->setChecked(false);
    ui->pushButtonNostaMuuSumma->setText("MUU SUMMA");
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButtonNostaRahat_clicked()  //ota vain rahat
{
    calc = 30;


    saldo = objectMySQL->getSaldo(idKortti);
        uusisaldo = saldo-Nosto;

        float nostoraja = objectMySQL->getNostoRaja(idKortti);
        float nostorajaKaytetty = objectMySQL->getNostoRajaKaytetty(idKortti);
        float nostorajaJaljella;
        nostorajaJaljella = nostoraja - nostorajaKaytetty;

        if(nostorajaJaljella < Nosto && nostoraja != 0)
        {
            virheellinenSumma("Nostoraja ylitetty");
        }else{
                qDebug()<<saldo;
                if(uusisaldo>=0){
                    objectMySQL->setSaldo(idKortti,uusisaldo);
                    objectMySQL->setUusiTilitapahtuma(idKortti,-Nosto,"Nosto");
                    objectMySQL->setNostoRajaKaytetty(idKortti, nostorajaKaytetty+Nosto);

                    ui->stackedWidget->setCurrentIndex(2);
                    QTimer::singleShot(3000, this, SLOT(kirjautunutUlos()));
                }
                else {
                    virheellinenSumma("Tilin kate ei riitä");
                    }
            //ota rahat ikkunan jälkeen palaa päänäyttöön
            }
}

void MainWindow::on_pushButtonNostaJaSaldo_clicked()    //ota rahat ja näytä saldo
{
    calc = 30;
    saldo = objectMySQL->getSaldo(idKortti);
    uusisaldo = saldo-Nosto;

    float nostoraja = objectMySQL->getNostoRaja(idKortti);
    float nostorajaKaytetty = objectMySQL->getNostoRajaKaytetty(idKortti);
    float nostorajaJaljella;
    nostorajaJaljella = nostoraja - nostorajaKaytetty;

    if(nostorajaJaljella < Nosto && nostoraja != 0)
    {
        virheellinenSumma("Nostoraja ylitetty");
    }else{

            if(uusisaldo>=0){
                objectMySQL->setSaldo(idKortti,uusisaldo);
                objectMySQL->setUusiTilitapahtuma(idKortti,-Nosto,"Nosto");
                objectMySQL->setNostoRajaKaytetty(idKortti, nostorajaKaytetty+Nosto);


                aika = 8;
                ui->stackedWidget->setCurrentIndex(2);
                QTimer::singleShot(4000, this, SLOT(on_pushButtonSaldo_clicked()));


                ui->pushButtonSaldoTakasin->hide();
                QTimer::singleShot(8000, this, SLOT(kirjautunutUlos())); // ota rahat ikkunan jälkeen siirtuu saldonäkymään
            }else {
                virheellinenSumma("Tilin kate ei riitä");
                }
        }
}

void MainWindow::on_pushButtonNostaJaLahjoitaSaldo_clicked()    //ota rahat ja näytä saldo
{
    calc = 30;
    saldo = objectMySQL->getSaldo(idKortti);
    uusisaldo = saldo-(Nosto+Lahjoitus);

    float nostoraja = objectMySQL->getNostoRaja(idKortti);
    float nostorajaKaytetty = objectMySQL->getNostoRajaKaytetty(idKortti);
    float nostorajaJaljella;
    nostorajaJaljella = nostoraja - nostorajaKaytetty;

    if(nostorajaJaljella < Nosto && nostoraja != 0)
    {
        virheellinenSumma("Nostoraja ylitetty");
    }else{

            if(uusisaldo>=0){
                objectMySQL->setSaldo(idKortti,uusisaldo);
                objectMySQL->setUusiTilitapahtuma(idKortti,-Nosto-Lahjoitus,"Nosto ja lahjoitus");


                aika = 8;
                ui->stackedWidget->setCurrentIndex(2);
                QTimer::singleShot(4000, this, SLOT(on_pushButtonSaldo_clicked()));


                ui->pushButtonSaldoTakasin->hide();
                QTimer::singleShot(8000, this, SLOT(kirjautunutUlos())); // ota rahat ikkunan jälkeen siirtuu saldonäkymään
            }
            else {
                    virheellinenSumma("Tilin kate ei riitä");
                    }; //ota rahat ikkunanjälkeen siirtyy sadlonäkymään
        }
}

// muutoksia tästä alaspäin

// numpad
void MainWindow::on_pushButtonNumNosta_clicked() // numpadin vahvista nappi
{
    unCheckAll();
    calc = 30;


    Nosto=Num.toInt();

    if(Nosto < 10)
    {
        Nosto = 10;
    }

    if(Nosto%10 <5)
    {
        Nosto = Nosto - Nosto%10;
        Num.setNum(Nosto);
    }else
    {
        Nosto = Nosto - Nosto%10 +10;
        Num.setNum(Nosto);
    }


    ui->stackedWidget->setCurrentIndex(edellinenSivu);
    if(edellinenSivu==3){
        ui->pushButtonNostaMuuSumma->setText("MUU SUMMA: "+ Num);
        ui->pushButtonNostaMuuSumma->setChecked(true);
    }else if (edellinenSivu==4) {
        ui->pushButtonNostaJaLahjoitaMuuSumma->setText("MUU SUMMA: "+ Num);
        ui->pushButtonNostaJaLahjoitaMuuSumma->setChecked(true);
    }
}

void MainWindow::on_pushButtonNum1_clicked()    // numero 1
{
    calc = 30;
    Num = Num + "1";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum2_clicked()    // numero 2
{
    calc = 30;
    Num = Num + "2";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum3_clicked()    // numero 3
{
    calc = 30;
    Num = Num + "3";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum4_clicked()    //numero 4
{
    calc = 30;
    Num = Num + "4";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum5_clicked()    //numero 5
{
    calc = 30;
    Num = Num + "5";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum6_clicked()    //numero 6
{
    calc = 30;
    Num = Num + "6";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum7_clicked()    //numero 7
{
    calc = 30;
    Num = Num + "7";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum8_clicked()    //numero 8
{
    calc = 30;
    Num = Num + "8";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNum9_clicked()    //numero 9
{
    calc = 30;
    Num = Num + "9";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNumC_clicked()    //tyhjentää kentän
{
    calc = 30;
    ui->lineEditNum->clear();
    Num = "";
}

void MainWindow::on_pushButtonNum0_clicked()    //
{
    calc = 30;
    Num = Num + "0";
    ui->lineEditNum->setText(Num);
}

void MainWindow::on_pushButtonNostaMuuSumma_clicked()//avaa numpadin
{
    calc = 30;
    edellinenSivu = 3;
    ui->lineEditNum->clear();
    Num = "";
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonNumPeruuta_clicked()
{
    calc = 30;
    ui->pushButtonNostaMuuSumma->setChecked(false);
    ui->pushButtonNostaJaLahjoitaMuuSumma->setText("MUU SUMMA");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonNostaJaLahjoitaMuuSumma_clicked()//avaa numpadin
{
    calc = 30;
    edellinenSivu = 4;
    ui->lineEditNum->clear();
    Num = "";
    ui->stackedWidget->setCurrentIndex(0);
}

//nosto ja lahjoita napit
void MainWindow::on_pushButtonNostaJaLahjoita_20_clicked()
{
    calc = 30;
    Nosto = 20;
    unCheckAll();
    ui->pushButtonNostaJaLahjoita_20->setChecked(true);

}

void MainWindow::on_pushButtonNostaJaLahjoita_50_clicked()
{
    calc = 30;
    Nosto = 50;
    unCheckAll();
    ui->pushButtonNostaJaLahjoita_50->setChecked(true);
}

void MainWindow::on_pushButtonNostaJaLahjoita_90_clicked()
{
   calc = 30;
    Nosto = 90;
    unCheckAll();
    ui->pushButtonNostaJaLahjoita_90->setChecked(true);

}

void MainWindow::on_pushButtonNostaJaLahjoita_120_clicked()
{
    calc = 30;
    Nosto = 120;
    unCheckAll();
    ui->pushButtonNostaJaLahjoita_120->setChecked(true);
}

void MainWindow::on_pushButtonNostaJaLahjoita_200_clicked()
{
    calc = 30;
    Nosto = 200;
    unCheckAll();
    ui->pushButtonNostaJaLahjoita_200->setChecked(true);
}

void MainWindow::on_pushButtonLahjoitus_1_clicked()
{
    calc = 30;
    Lahjoitus = 1;
    ui->pushButtonLahjoitus_1->setChecked(true);
    ui->pushButtonLahjoitus_2->setChecked(false);
    ui->pushButtonLahjoitus_5->setChecked(false);
}

void MainWindow::on_pushButtonLahjoitus_2_clicked()
{
    calc = 30;
    Lahjoitus = 2;
    ui->pushButtonLahjoitus_1->setChecked(false);
    ui->pushButtonLahjoitus_2->setChecked(true);
    ui->pushButtonLahjoitus_5->setChecked(false);
}

void MainWindow::on_pushButtonLahjoitus_5_clicked()
{
    calc = 30;
    Lahjoitus = 5;
    ui->pushButtonLahjoitus_1->setChecked(false);
    ui->pushButtonLahjoitus_2->setChecked(false);
    ui->pushButtonLahjoitus_5->setChecked(true);
}

//noston määrä napit

void MainWindow::on_pushButtonNosta_20_clicked()
{
    calc = 30;
    Nosto = 20;
    unCheckAll();
    ui->pushButtonNosta_20->setChecked(true);
}

void MainWindow::on_pushButtonNosta_50_clicked()
{
    calc = 30;
    Nosto = 50;
    unCheckAll();
    ui->pushButtonNosta_50->setChecked(true);

}

void MainWindow::on_pushButtonNosta_90_clicked()
{
    calc = 30;
    Nosto = 90;
    unCheckAll();
    ui->pushButtonNosta_90->setChecked(true);
}

void MainWindow::on_pushButtonNosta_120_clicked()
{
    calc = 30;
    Nosto = 120;
    unCheckAll();
    ui->pushButtonNosta_120->setChecked(true);
}

void MainWindow::on_pushButtonNosta_200_clicked()
{
    calc = 30;
    Nosto = 200;
    unCheckAll();
    ui->pushButtonNosta_200->setChecked(true);
}

void MainWindow::on_pushButtonUlos_clicked()
{
    calc = 30;
    ui->stackedWidget->setCurrentIndex(9);
    QTimer::singleShot(4000, this, SLOT(kirjautunutUlos()));
}

void MainWindow::kirjautunutUlos()
{

    ui->stackedWidget->setCurrentIndex(8);
    kirjautunutSisaan = false;
}

void MainWindow::rfidAjastin()
{

   aika--;
    qDebug() << aika;
    if(aika==0){
        objectTimer->stop();
        emit objectRfid->tulostus();
        ui->stackedWidget->setCurrentIndex(8);
        kirjautunutSisaan = false;
    }
}
void MainWindow::virheellinenSumma(QString viesti)
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("VIRHE");
    QSpacerItem* horizontalSpacer = new QSpacerItem(500, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    msgBox.setText(viesti);

    QGridLayout* layout = (QGridLayout*)msgBox.layout();
    layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
    msgBox.exec();

    ui->lineEditNum->clear();
    Num = "";
    ui->pushButtonNostaMuuSumma->setText("MUU SUMMA");
    ui->pushButtonNostaJaLahjoitaMuuSumma->setText("MUU SUMMA");
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::ajastin()
{
    calc--;
    if(calc==0){

        kirjautunutUlos();
    }
}
