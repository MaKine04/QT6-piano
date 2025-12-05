#pragma once

#include <QMainWindow>
#include <qfiledialog.h>
#include <QSoundEffect>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void key1_click();

    void key2_click();

    void key3_click();

    void key4_click();

    void key5_click();

    void key6_click();

    void key7_click();

    void key8_click();

    void key9_click();

    void key10_click();

private:
    Ui::MainWindow *ui;
};

