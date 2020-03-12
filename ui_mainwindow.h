/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QPushButton *pushButtonNum3;
    QPushButton *pushButtonNum6;
    QPushButton *pushButtonNum9;
    QLineEdit *lineEditNum;
    QPushButton *pushButtonNum2;
    QPushButton *pushButtonNum1;
    QPushButton *pushButtonNum5;
    QPushButton *pushButtonNum4;
    QPushButton *pushButtonNum7;
    QPushButton *pushButtonNum8;
    QPushButton *pushButtonNumC;
    QPushButton *pushButtonNum0;
    QPushButton *pushButtonNumNosta;
    QPushButton *pushButtonNumPeruuta;
    QWidget *page_3;
    QLabel *label_7;
    QWidget *page_4;
    QLabel *label_6;
    QWidget *page_5;
    QPushButton *pushButtonNosta_20;
    QPushButton *pushButtonNosta_50;
    QPushButton *pushButtonNosta_90;
    QPushButton *pushButtonNosta_120;
    QPushButton *pushButtonNosta_200;
    QPushButton *pushButtonNostaMuuSumma;
    QPushButton *pushButtonNostaPeruuta;
    QPushButton *pushButtonNostaJaSaldo;
    QPushButton *pushButtonNostaRahat;
    QLabel *label_5;
    QWidget *page_6;
    QPushButton *pushButtonNostaJaLahjoita_20;
    QPushButton *pushButtonNostaJaLahjoita_50;
    QPushButton *pushButtonNostaJaLahjoita_90;
    QPushButton *pushButtonNostaJaLahjoita_120;
    QPushButton *pushButtonNostaJaLahjoita_200;
    QPushButton *pushButtonNostaJaLahjoitaMuuSumma;
    QPushButton *pushButtonNostaJaLahjoitaPeruuta;
    QPushButton *pushButtonNostaJaLahjoitaSaldo;
    QPushButton *pushButtonNostaJaLahjoitaRaha;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonLahjoitus_1;
    QPushButton *pushButtonLahjoitus_2;
    QPushButton *pushButtonLahjoitus_5;
    QWidget *page_7;
    QTextEdit *textEditTiliTapahtumat;
    QLabel *label_2;
    QPushButton *pushButtonTiliTakaisin;
    QTextBrowser *textBrowserPvm;
    QTextBrowser *textBrowserTyyppi;
    QTextBrowser *textBrowser;
    QWidget *page_8;
    QPushButton *pushButtonSaldoTakasin;
    QTextEdit *textEditSaldo;
    QLabel *label;
    QWidget *page_2;
    QPushButton *pushButtonNosta;
    QPushButton *pushButtonLahjoita;
    QPushButton *pushButtonSaldo;
    QPushButton *pushButtonTilitapahtumat;
    QPushButton *pushButtonUlos;
    QWidget *page;
    QLabel *label_8;
    QWidget *page_9;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1307, 678);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1301, 631));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        pushButtonNum3 = new QPushButton(page_1);
        pushButtonNum3->setObjectName(QString::fromUtf8("pushButtonNum3"));
        pushButtonNum3->setGeometry(QRect(820, 190, 261, 61));
        QFont font;
        font.setPointSize(20);
        pushButtonNum3->setFont(font);
        pushButtonNum6 = new QPushButton(page_1);
        pushButtonNum6->setObjectName(QString::fromUtf8("pushButtonNum6"));
        pushButtonNum6->setGeometry(QRect(820, 280, 261, 61));
        pushButtonNum6->setFont(font);
        pushButtonNum9 = new QPushButton(page_1);
        pushButtonNum9->setObjectName(QString::fromUtf8("pushButtonNum9"));
        pushButtonNum9->setGeometry(QRect(820, 370, 261, 61));
        pushButtonNum9->setFont(font);
        lineEditNum = new QLineEdit(page_1);
        lineEditNum->setObjectName(QString::fromUtf8("lineEditNum"));
        lineEditNum->setGeometry(QRect(240, 100, 841, 61));
        lineEditNum->setFont(font);
        lineEditNum->setLayoutDirection(Qt::LeftToRight);
        lineEditNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditNum->setReadOnly(true);
        pushButtonNum2 = new QPushButton(page_1);
        pushButtonNum2->setObjectName(QString::fromUtf8("pushButtonNum2"));
        pushButtonNum2->setGeometry(QRect(530, 190, 261, 61));
        pushButtonNum2->setFont(font);
        pushButtonNum1 = new QPushButton(page_1);
        pushButtonNum1->setObjectName(QString::fromUtf8("pushButtonNum1"));
        pushButtonNum1->setGeometry(QRect(240, 190, 261, 61));
        pushButtonNum1->setFont(font);
        pushButtonNum5 = new QPushButton(page_1);
        pushButtonNum5->setObjectName(QString::fromUtf8("pushButtonNum5"));
        pushButtonNum5->setGeometry(QRect(530, 280, 261, 61));
        pushButtonNum5->setFont(font);
        pushButtonNum4 = new QPushButton(page_1);
        pushButtonNum4->setObjectName(QString::fromUtf8("pushButtonNum4"));
        pushButtonNum4->setGeometry(QRect(240, 280, 261, 61));
        pushButtonNum4->setFont(font);
        pushButtonNum7 = new QPushButton(page_1);
        pushButtonNum7->setObjectName(QString::fromUtf8("pushButtonNum7"));
        pushButtonNum7->setGeometry(QRect(240, 370, 261, 61));
        pushButtonNum7->setFont(font);
        pushButtonNum8 = new QPushButton(page_1);
        pushButtonNum8->setObjectName(QString::fromUtf8("pushButtonNum8"));
        pushButtonNum8->setGeometry(QRect(530, 370, 261, 61));
        pushButtonNum8->setFont(font);
        pushButtonNumC = new QPushButton(page_1);
        pushButtonNumC->setObjectName(QString::fromUtf8("pushButtonNumC"));
        pushButtonNumC->setGeometry(QRect(240, 460, 261, 61));
        pushButtonNumC->setFont(font);
        pushButtonNum0 = new QPushButton(page_1);
        pushButtonNum0->setObjectName(QString::fromUtf8("pushButtonNum0"));
        pushButtonNum0->setGeometry(QRect(530, 460, 261, 61));
        pushButtonNum0->setFont(font);
        pushButtonNumNosta = new QPushButton(page_1);
        pushButtonNumNosta->setObjectName(QString::fromUtf8("pushButtonNumNosta"));
        pushButtonNumNosta->setGeometry(QRect(1020, 550, 261, 61));
        pushButtonNumNosta->setFont(font);
        pushButtonNumPeruuta = new QPushButton(page_1);
        pushButtonNumPeruuta->setObjectName(QString::fromUtf8("pushButtonNumPeruuta"));
        pushButtonNumPeruuta->setGeometry(QRect(30, 550, 261, 61));
        pushButtonNumPeruuta->setFont(font);
        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 210, 291, 181));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(36);
        label_7->setFont(font1);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 180, 291, 181));
        label_6->setFont(font1);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButtonNosta_20 = new QPushButton(page_5);
        pushButtonNosta_20->setObjectName(QString::fromUtf8("pushButtonNosta_20"));
        pushButtonNosta_20->setGeometry(QRect(70, 60, 371, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(24);
        pushButtonNosta_20->setFont(font2);
        pushButtonNosta_50 = new QPushButton(page_5);
        pushButtonNosta_50->setObjectName(QString::fromUtf8("pushButtonNosta_50"));
        pushButtonNosta_50->setGeometry(QRect(70, 190, 371, 91));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(26);
        pushButtonNosta_50->setFont(font3);
        pushButtonNosta_90 = new QPushButton(page_5);
        pushButtonNosta_90->setObjectName(QString::fromUtf8("pushButtonNosta_90"));
        pushButtonNosta_90->setGeometry(QRect(70, 320, 371, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(28);
        pushButtonNosta_90->setFont(font4);
        pushButtonNosta_120 = new QPushButton(page_5);
        pushButtonNosta_120->setObjectName(QString::fromUtf8("pushButtonNosta_120"));
        pushButtonNosta_120->setGeometry(QRect(810, 60, 351, 81));
        pushButtonNosta_120->setFont(font4);
        pushButtonNosta_200 = new QPushButton(page_5);
        pushButtonNosta_200->setObjectName(QString::fromUtf8("pushButtonNosta_200"));
        pushButtonNosta_200->setGeometry(QRect(810, 180, 351, 81));
        pushButtonNosta_200->setFont(font4);
        pushButtonNostaMuuSumma = new QPushButton(page_5);
        pushButtonNostaMuuSumma->setObjectName(QString::fromUtf8("pushButtonNostaMuuSumma"));
        pushButtonNostaMuuSumma->setGeometry(QRect(810, 310, 351, 81));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(20);
        pushButtonNostaMuuSumma->setFont(font5);
        pushButtonNostaPeruuta = new QPushButton(page_5);
        pushButtonNostaPeruuta->setObjectName(QString::fromUtf8("pushButtonNostaPeruuta"));
        pushButtonNostaPeruuta->setGeometry(QRect(70, 540, 291, 61));
        pushButtonNostaPeruuta->setFont(font5);
        pushButtonNostaJaSaldo = new QPushButton(page_5);
        pushButtonNostaJaSaldo->setObjectName(QString::fromUtf8("pushButtonNostaJaSaldo"));
        pushButtonNostaJaSaldo->setGeometry(QRect(550, 540, 291, 61));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(16);
        pushButtonNostaJaSaldo->setFont(font6);
        pushButtonNostaRahat = new QPushButton(page_5);
        pushButtonNostaRahat->setObjectName(QString::fromUtf8("pushButtonNostaRahat"));
        pushButtonNostaRahat->setGeometry(QRect(860, 540, 281, 61));
        pushButtonNostaRahat->setFont(font5);
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(550, 10, 211, 41));
        label_5->setFont(font5);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        pushButtonNostaJaLahjoita_20 = new QPushButton(page_6);
        pushButtonNostaJaLahjoita_20->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoita_20"));
        pushButtonNostaJaLahjoita_20->setGeometry(QRect(100, 70, 351, 81));
        pushButtonNostaJaLahjoita_20->setFont(font5);
        pushButtonNostaJaLahjoita_50 = new QPushButton(page_6);
        pushButtonNostaJaLahjoita_50->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoita_50"));
        pushButtonNostaJaLahjoita_50->setGeometry(QRect(100, 170, 351, 81));
        pushButtonNostaJaLahjoita_50->setFont(font5);
        pushButtonNostaJaLahjoita_90 = new QPushButton(page_6);
        pushButtonNostaJaLahjoita_90->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoita_90"));
        pushButtonNostaJaLahjoita_90->setGeometry(QRect(100, 280, 351, 81));
        pushButtonNostaJaLahjoita_90->setFont(font5);
        pushButtonNostaJaLahjoita_120 = new QPushButton(page_6);
        pushButtonNostaJaLahjoita_120->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoita_120"));
        pushButtonNostaJaLahjoita_120->setGeometry(QRect(850, 60, 351, 81));
        pushButtonNostaJaLahjoita_120->setFont(font5);
        pushButtonNostaJaLahjoita_200 = new QPushButton(page_6);
        pushButtonNostaJaLahjoita_200->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoita_200"));
        pushButtonNostaJaLahjoita_200->setGeometry(QRect(850, 180, 351, 81));
        pushButtonNostaJaLahjoita_200->setFont(font5);
        pushButtonNostaJaLahjoitaMuuSumma = new QPushButton(page_6);
        pushButtonNostaJaLahjoitaMuuSumma->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoitaMuuSumma"));
        pushButtonNostaJaLahjoitaMuuSumma->setGeometry(QRect(850, 290, 351, 81));
        pushButtonNostaJaLahjoitaMuuSumma->setFont(font5);
        pushButtonNostaJaLahjoitaPeruuta = new QPushButton(page_6);
        pushButtonNostaJaLahjoitaPeruuta->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoitaPeruuta"));
        pushButtonNostaJaLahjoitaPeruuta->setGeometry(QRect(90, 540, 231, 61));
        pushButtonNostaJaLahjoitaPeruuta->setFont(font5);
        pushButtonNostaJaLahjoitaSaldo = new QPushButton(page_6);
        pushButtonNostaJaLahjoitaSaldo->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoitaSaldo"));
        pushButtonNostaJaLahjoitaSaldo->setGeometry(QRect(660, 540, 271, 61));
        pushButtonNostaJaLahjoitaSaldo->setFont(font6);
        pushButtonNostaJaLahjoitaRaha = new QPushButton(page_6);
        pushButtonNostaJaLahjoitaRaha->setObjectName(QString::fromUtf8("pushButtonNostaJaLahjoitaRaha"));
        pushButtonNostaJaLahjoitaRaha->setGeometry(QRect(950, 540, 251, 61));
        pushButtonNostaJaLahjoitaRaha->setFont(font5);
        label_3 = new QLabel(page_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 10, 201, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(20);
        font7.setBold(false);
        font7.setWeight(50);
        label_3->setFont(font7);
        label_4 = new QLabel(page_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 420, 251, 61));
        label_4->setFont(font5);
        pushButtonLahjoitus_1 = new QPushButton(page_6);
        pushButtonLahjoitus_1->setObjectName(QString::fromUtf8("pushButtonLahjoitus_1"));
        pushButtonLahjoitus_1->setGeometry(QRect(250, 420, 291, 61));
        pushButtonLahjoitus_1->setFont(font5);
        pushButtonLahjoitus_2 = new QPushButton(page_6);
        pushButtonLahjoitus_2->setObjectName(QString::fromUtf8("pushButtonLahjoitus_2"));
        pushButtonLahjoitus_2->setGeometry(QRect(550, 420, 291, 61));
        pushButtonLahjoitus_2->setFont(font5);
        pushButtonLahjoitus_5 = new QPushButton(page_6);
        pushButtonLahjoitus_5->setObjectName(QString::fromUtf8("pushButtonLahjoitus_5"));
        pushButtonLahjoitus_5->setGeometry(QRect(860, 420, 291, 61));
        pushButtonLahjoitus_5->setFont(font5);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        textEditTiliTapahtumat = new QTextEdit(page_7);
        textEditTiliTapahtumat->setObjectName(QString::fromUtf8("textEditTiliTapahtumat"));
        textEditTiliTapahtumat->setGeometry(QRect(90, 70, 1131, 411));
        textEditTiliTapahtumat->setFont(font6);
        textEditTiliTapahtumat->setReadOnly(true);
        label_2 = new QLabel(page_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 10, 331, 41));
        label_2->setFont(font5);
        pushButtonTiliTakaisin = new QPushButton(page_7);
        pushButtonTiliTakaisin->setObjectName(QString::fromUtf8("pushButtonTiliTakaisin"));
        pushButtonTiliTakaisin->setGeometry(QRect(90, 520, 351, 81));
        pushButtonTiliTakaisin->setFont(font5);
        textBrowserPvm = new QTextBrowser(page_7);
        textBrowserPvm->setObjectName(QString::fromUtf8("textBrowserPvm"));
        textBrowserPvm->setGeometry(QRect(105, 80, 281, 391));
        QFont font8;
        font8.setPointSize(16);
        textBrowserPvm->setFont(font8);
        textBrowserPvm->setFrameShape(QFrame::Box);
        textBrowserTyyppi = new QTextBrowser(page_7);
        textBrowserTyyppi->setObjectName(QString::fromUtf8("textBrowserTyyppi"));
        textBrowserTyyppi->setGeometry(QRect(400, 80, 541, 391));
        textBrowserTyyppi->setFont(font8);
        textBrowserTyyppi->setFrameShape(QFrame::Box);
        textBrowser = new QTextBrowser(page_7);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(955, 80, 251, 391));
        textBrowser->setFont(font8);
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        pushButtonSaldoTakasin = new QPushButton(page_8);
        pushButtonSaldoTakasin->setObjectName(QString::fromUtf8("pushButtonSaldoTakasin"));
        pushButtonSaldoTakasin->setGeometry(QRect(70, 510, 351, 81));
        pushButtonSaldoTakasin->setFont(font5);
        textEditSaldo = new QTextEdit(page_8);
        textEditSaldo->setObjectName(QString::fromUtf8("textEditSaldo"));
        textEditSaldo->setGeometry(QRect(70, 80, 1131, 411));
        textEditSaldo->setFont(font6);
        textEditSaldo->setReadOnly(true);
        label = new QLabel(page_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 20, 331, 41));
        label->setFont(font5);
        stackedWidget->addWidget(page_8);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButtonNosta = new QPushButton(page_2);
        pushButtonNosta->setObjectName(QString::fromUtf8("pushButtonNosta"));
        pushButtonNosta->setGeometry(QRect(60, 50, 351, 81));
        pushButtonNosta->setFont(font5);
        pushButtonLahjoita = new QPushButton(page_2);
        pushButtonLahjoita->setObjectName(QString::fromUtf8("pushButtonLahjoita"));
        pushButtonLahjoita->setGeometry(QRect(60, 210, 351, 81));
        pushButtonLahjoita->setFont(font5);
        pushButtonSaldo = new QPushButton(page_2);
        pushButtonSaldo->setObjectName(QString::fromUtf8("pushButtonSaldo"));
        pushButtonSaldo->setGeometry(QRect(910, 50, 351, 81));
        pushButtonSaldo->setFont(font5);
        pushButtonTilitapahtumat = new QPushButton(page_2);
        pushButtonTilitapahtumat->setObjectName(QString::fromUtf8("pushButtonTilitapahtumat"));
        pushButtonTilitapahtumat->setGeometry(QRect(910, 210, 351, 81));
        pushButtonTilitapahtumat->setFont(font5);
        pushButtonUlos = new QPushButton(page_2);
        pushButtonUlos->setObjectName(QString::fromUtf8("pushButtonUlos"));
        pushButtonUlos->setGeometry(QRect(60, 520, 351, 81));
        pushButtonUlos->setFont(font5);
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 230, 311, 121));
        label_8->setFont(font);
        stackedWidget->addWidget(page);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        label_9 = new QLabel(page_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 150, 421, 121));
        label_9->setFont(font);
        label_10 = new QLabel(page_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(270, 400, 211, 101));
        label_10->setFont(font);
        stackedWidget->addWidget(page_9);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1307, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonNum3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButtonNum6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButtonNum9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButtonNum2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButtonNum1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButtonNum5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButtonNum4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButtonNum7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButtonNum8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButtonNumC->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButtonNum0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonNumNosta->setText(QApplication::translate("MainWindow", "VAHVISTA", nullptr));
        pushButtonNumPeruuta->setText(QApplication::translate("MainWindow", "PERUUTA", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "OTA KORTTI", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "OTA  RAHAT", nullptr));
        pushButtonNosta_20->setText(QApplication::translate("MainWindow", "20", nullptr));
        pushButtonNosta_50->setText(QApplication::translate("MainWindow", "50", nullptr));
        pushButtonNosta_90->setText(QApplication::translate("MainWindow", "90", nullptr));
        pushButtonNosta_120->setText(QApplication::translate("MainWindow", "120", nullptr));
        pushButtonNosta_200->setText(QApplication::translate("MainWindow", "200", nullptr));
        pushButtonNostaMuuSumma->setText(QApplication::translate("MainWindow", "MUU SUMMA", nullptr));
        pushButtonNostaPeruuta->setText(QApplication::translate("MainWindow", "PERUUTA", nullptr));
        pushButtonNostaJaSaldo->setText(QApplication::translate("MainWindow", "NOSTA JA N\303\204YT\303\204 SALDO", nullptr));
        pushButtonNostaRahat->setText(QApplication::translate("MainWindow", "NOSTA", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "NOSTO", nullptr));
        pushButtonNostaJaLahjoita_20->setText(QApplication::translate("MainWindow", "20", nullptr));
        pushButtonNostaJaLahjoita_50->setText(QApplication::translate("MainWindow", "50", nullptr));
        pushButtonNostaJaLahjoita_90->setText(QApplication::translate("MainWindow", "90", nullptr));
        pushButtonNostaJaLahjoita_120->setText(QApplication::translate("MainWindow", "120", nullptr));
        pushButtonNostaJaLahjoita_200->setText(QApplication::translate("MainWindow", "200", nullptr));
        pushButtonNostaJaLahjoitaMuuSumma->setText(QApplication::translate("MainWindow", "MUU SUMMA", nullptr));
        pushButtonNostaJaLahjoitaPeruuta->setText(QApplication::translate("MainWindow", "PERUUTA", nullptr));
        pushButtonNostaJaLahjoitaSaldo->setText(QApplication::translate("MainWindow", "NOSTA JA N\303\204YT\303\204 SALDO", nullptr));
        pushButtonNostaJaLahjoitaRaha->setText(QApplication::translate("MainWindow", "NOSTA", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "NOSTO", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "LAHJOITUS:", nullptr));
        pushButtonLahjoitus_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButtonLahjoitus_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButtonLahjoitus_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TILITAPAHTUMAT", nullptr));
        pushButtonTiliTakaisin->setText(QApplication::translate("MainWindow", "TAKAISIN", nullptr));
        pushButtonSaldoTakasin->setText(QApplication::translate("MainWindow", "TAKAISIN", nullptr));
        label->setText(QApplication::translate("MainWindow", "SALDO", nullptr));
        pushButtonNosta->setText(QApplication::translate("MainWindow", "NOSTA", nullptr));
        pushButtonLahjoita->setText(QApplication::translate("MainWindow", "NOSTA JA LAHJOITA", nullptr));
        pushButtonSaldo->setText(QApplication::translate("MainWindow", "SALDO", nullptr));
        pushButtonTilitapahtumat->setText(QApplication::translate("MainWindow", "TILITAPAHTUMAT", nullptr));
        pushButtonUlos->setText(QApplication::translate("MainWindow", "KIRJAUDU ULOS", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "SY\303\226T\303\204 KORTTI", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "OLET KIRJAUTUNUT ULOS", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "OTA KORTTI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
