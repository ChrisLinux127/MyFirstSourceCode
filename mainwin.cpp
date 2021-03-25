#include "mainwin.h"
#include "ui_mainwin.h"
#include<QString>   //for Strings
#include<QDebug>    //For line outputs

MainWin::MainWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWin)
{
    ui->setupUi(this);
}

MainWin::~MainWin()
{
    delete ui;
}


void MainWin::on_Input_1_textChanged()
{
    QString str;
    str=ui->Input_1->toPlainText();
    qDebug()<<str;
}
