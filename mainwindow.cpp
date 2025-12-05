#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSoundEffect>
#include "sound.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setFixedSize(600, 250);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_klawisz1_clicked()
{
    QString track = "c7.wav";
    playsound(track);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString track = "c8.wav";
    playsound(track);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString track = "c9.wav";
    playsound(track);
}


void MainWindow::on_pushButton_4_clicked()
{
    QString track = "c10.wav";
    playsound(track);
}



void MainWindow::on_pushButton_5_clicked()
{
    QString track = "c11.wav";
    playsound(track);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString track = "c12.wav";
    playsound(track);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString track = "c13.wav";
    playsound(track);
}


void MainWindow::on_pushButton_8_clicked()
{
    QString track = "c14.wav";
    playsound(track);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString track = "c15.wav";
    playsound(track);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString track = "c16.wav";
    playsound(track);
}

