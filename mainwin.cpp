#include "mainwin.h"
#include "ui_mainwin.h"
#include<QString>   //for Strings
#include<QDebug>    //For line outputs
#include<QMouseEvent> //For Mouse events

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

void MainWin:: mouseMoveEvent(QMouseEvent *e)
  {
    int x = e->x();
    int y = e->y();
    QString strX,strY;
    strX="BEWEGUNG ERKANN! Position der Mouse X: "+strX.number(x)+" Y: "+strY.number(y);
    ui->listWidget->addItem(strX);
    qDebug()<<"BEWEGUNG ERKANN! Position der Mouse X: "<<x<<" y: "<<y;
    if(ui->listWidget->count()==100){
        ui->listWidget->clear();
    }
  }

void MainWin::on_Input_1_textChanged()
{
    QString str;
    str=ui->Input_1->toPlainText();
    qDebug()<<str;
    ui->listWidget->addItem("Test");
    ui->listWidget->addItem(str);
}
