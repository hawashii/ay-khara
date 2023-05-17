#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"ttext.h"
#include"pattern.h"
#include <QMainWindow>
#include<QString>
#include<QTextStream>
#include<iostream>
#include"percentage1.h"
#include"brute_force.h"
#include<QProgressBar>
#include"percentage.h"
#include<QTextCursor>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
