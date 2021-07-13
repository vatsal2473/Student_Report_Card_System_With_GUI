#include "edit_report.h"
#include "ui_edit_report.h"
#include<QFile>
#include<QTextStream>
#include"QMessageBox"

Edit_report::Edit_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_report)
{
    ui->setupUi(this);
     this->setWindowTitle("Edit Report");
}

Edit_report::~Edit_report()
{
    delete ui;
}

void Edit_report::clearscreen()
{
    ui->txtfirstname->setText("");
    ui->txtlastname->setText("");
    ui->txtrollno->setText("");
    ui->txtphysics->setText("");
    ui->txtchemistry->setText("");
    ui->txtmaths->setText("");
    ui->txtcomputer->setText("");
}

void Edit_report::on_btnAdd_clicked()
{
    QString firstname = ui->txtfirstname->text();
    QString lastname = ui->txtlastname->text();
    QString rollno = ui->txtrollno->text();
    QString physics = ui->txtphysics->text();
    QString chemistry = ui->txtchemistry->text();
    QString maths = ui->txtmaths->text();
    QString computer = ui->txtcomputer->text();

    QString f,l,r,p,c,m,cp;

    QFile file1("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");
    QFile file2("C:/Users/ABCD/Documents/Student_Report_Card_System/new.txt");

    file1.open(QFile::ReadOnly | QFile::Text);
    file2.open(QFile::Append | QFile::Text);

    QTextStream in(&file1);
    QTextStream out(&file2);

    in>>f>>l>>r>>p>>c>>m>>cp;
    while(!in.atEnd())
    {
        if(r==rollno)
        {
            out<<"\n" << firstname << " " << lastname << " " << rollno << " " << physics << " " << chemistry << " " << maths << " " << computer << "\n";
        }
        else
        {
            out<<"\n" << f << " " << l << " " << r << " " << p << " " << c << " " << m << " " << cp << "\n";
        }
        in>>f>>l>>r>>p>>c>>m>>cp;

    }
    //file1.remove();
    //QFile::rename("C:/Users/ABCD/Documents/Student_Report_Card_System/new.txt","C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");
    file1.close();
    file2.flush();
    file2.close();
    QFile::remove("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");
    QFile::rename("C:/Users/ABCD/Documents/Student_Report_Card_System/new.txt","C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");
    hide();
}

