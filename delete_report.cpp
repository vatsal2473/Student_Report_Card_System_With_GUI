#include "delete_report.h"
#include "ui_delete_report.h"
#include<QFile>
#include<QTextStream>
#include"QMessageBox"


Delete_report::Delete_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_report)
{
    ui->setupUi(this);
     this->setWindowTitle("Delete Report");
}

Delete_report::~Delete_report()
{
    delete ui;
}

void Delete_report::clearscreen()
{
    ui->lineEdit_rollno->setText("");
}

void Delete_report::on_pushButton_clicked()
{
    QString rollno = ui->lineEdit_rollno->text();

    QString f,l,r,p,c,m,cp;
    int found=0;

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
            //out<<"\n" << firstname << " " << lastname << " " << rollno << " " << physics << " " << chemistry << " " << maths << " " << computer << "\n";
            found=1;
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
    if(found==0)
    {
        QMessageBox::information(this,"info","Student with roll no "+rollno+" does not exist");
    }
    else
    {
        QMessageBox::information(this,"info","Successfully deleted !");
    }
}

