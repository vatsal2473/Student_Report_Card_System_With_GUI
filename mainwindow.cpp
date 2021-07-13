#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrlogin = new Login(this);
    ptrstudent = new Student(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrlogin;
    delete ptrstudent;
}


void MainWindow::on_pushButton_3_clicked()
{

    QMessageBox::StandardButton reply =  QMessageBox::question(this,"Exit","Are you sure, you want to exit ?",
                       QMessageBox::Yes | QMessageBox::No);
    if(reply== QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        //qDebug()<<"No is Clicked";
    }
}



void MainWindow::on_pushButton_clicked()
{
    ptrlogin->clearscreen();
    ptrlogin->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrstudent->show();
}

