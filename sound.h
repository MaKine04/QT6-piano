#pragma once

#include <QSoundEffect>
#include <QObject>
#include <QDebug>

void playsound(QString &track, QObject *parent = nullptr)
{
    QSoundEffect *clickSound = new QSoundEffect;
    QString filepath = "/home/piano/keysound/" + track;
    clickSound -> setSource(QUrl::fromLocalFile(filepath));
    clickSound->setVolume(1.0f);
    clickSound->play();

}
