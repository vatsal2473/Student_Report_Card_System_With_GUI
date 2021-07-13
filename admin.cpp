#include "admin.h"
#include "ui_admin.h"
#include "show_all_report.h"
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ptrcreate = new Create(this);
    ptredit = new Edit_report(this);
    ptrdelete = new Delete_report(this);
    ptrsearch = new Search_report(this);
    ptrshowreport = new Show_all_report(this);
     this->setWindowTitle("Admin");
}

Admin::~Admin()
{
    delete ui;
    delete ptrcreate;
    delete ptredit;
    delete ptrsearch;
    delete ptrshowreport;
}

void Admin::on_pushButton_6_clicked()
{
    hide();
}


void Admin::on_pushButton_clicked()
{
    ptrcreate->clearscreen();
    ptrcreate->show();
}


void Admin::on_pushButton_3_clicked()
{
    ptredit->clearscreen();
    ptredit->show();
}


void Admin::on_pushButton_4_clicked()
{
    ptrdelete->clearscreen();
    ptrdelete->show();
}


void Admin::on_pushButton_5_clicked()
{
    ptrsearch->clearscreen();
    ptrsearch->show();
}


void Admin::on_pushButton_2_clicked()
{
    ptrshowreport->show();
    ptrshowreport->show_reports();
}

