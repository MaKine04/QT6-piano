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

void MainWindow::key1_click()
{
    QString track = "c7.wav";
    playsound(track);
}


void MainWindow::key2_click()
{
    QString track = "c8.wav";
    playsound(track);
}


void MainWindow::key3_click()
{
    QString track = "c9.wav";
    playsound(track);
}


void MainWindow::key4_click()
{
    QString track = "c10.wav";
    playsound(track);
}



void MainWindow::key5_click()
{
    QString track = "c11.wav";
    playsound(track);
}


void MainWindow::key6_click()
{
    QString track = "c12.wav";
    playsound(track);
}

void MainWindow::key7_click()
{
    QString track = "c13.wav";
    playsound(track);
}


void MainWindow::key8_click()
{
    QString track = "c14.wav";
    playsound(track);
}

void MainWindow::key9_click()
{
    QString track = "c15.wav";
    playsound(track);
}

void MainWindow::key10_click()
{
    QString track = "c16.wav";
    playsound(track);
}

