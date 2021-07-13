#include "student.h"
#include "ui_student.h"
#include"show_all_report.h"

Student::Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    ptrsearch = new Search_report(this);
    ptrshowreport = new Show_all_report(this);
     this->setWindowTitle("Student");
}

Student::~Student()
{
    delete ui;
    delete ptrsearch;
    delete ptrshowreport;
}

void Student::on_pushButton_2_clicked()
{
    ptrsearch->clearscreen();
    ptrsearch->show();
}


void Student::on_pushButton_clicked()
{
    ptrshowreport->show();
    ptrshowreport->show_reports();
}

