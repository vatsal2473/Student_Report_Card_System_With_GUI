#include "login.h"
#include "ui_login.h"
#include"QMessageBox"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ptradmin = new Admin(this);
    this->setWindowTitle("Login");
    //ptrmainwindow = new QMainWindow(this);
}

Login::~Login()
{
    delete ui;
    delete ptradmin;
    //delete ptrmainwindow;
}

void Login::clearscreen()
{
    ui->lineEdit_username->setText("");
    ui->lineEdit_password->setText("");
}

void Login::on_pushButton_clicked()
{
    //ui->lineEdit_username->setText("");
    //ui->lineEdit_password->setText("");
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username=="admin@gmail.com"&&password=="admin1234")
    {

        //QMessageBox::information(this,"Login","username and password are correct");
        hide();
        //ptrmainwindow->hide();
        ptradmin->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","username and password are incorrect");
    }
}

