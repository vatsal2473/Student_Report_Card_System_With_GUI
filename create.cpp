#include "create.h"
#include "ui_create.h"
#include<fstream>
#include<QFile>
#include<QTextStream>
#include"QMessageBox"
using namespace std;
Create::Create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
     this->setWindowTitle("Create Report");
}

Create::~Create()
{
    delete ui;
}

void Create::on_btnAdd_clicked()
{
    QString firstname = ui->txtfirstname->text();
    QString lastname = ui->txtlastname->text();
    QString rollno = ui->txtrollno->text();
    QString physics = ui->txtphysics->text();
    QString chemistry = ui->txtchemistry->text();
    QString maths = ui->txtmaths->text();
    QString computer = ui->txtcomputer->text();


// code for writing to a file



// code for reading to a file
            QFile file1("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");

            if(!file1.open(QFile::ReadOnly | QFile::Text))
            {
                QMessageBox::warning(this,"title","file not open");
            }
            QString f,l,r,p,c,m,cp;
            int found=0;
            QTextStream in(&file1);
            in>>f>>l>>r>>p>>c>>m>>cp;
            while(!in.atEnd())
            {
                if(r==rollno)
                {
                    found=1;
                }
                in>>f>>l>>r>>p>>c>>m>>cp;
            }
            file1.close();
            if(found==1)
            {
                QMessageBox::warning(this,"title","Student report already exist");
            }
            else
            {
                QFile file("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");
                if (!file.open(QFile::Append | QFile::Text))
                {
                    QMessageBox::warning(this,"title","file not open");
                }
                QTextStream out(&file);
                out<<"\n" << firstname << " " << lastname << " " << rollno << " " << physics << " " << chemistry << " " << maths << " " << computer << "\n";
                file.flush();
                file.close();
            }
            //QString text = in.readAll();



    hide();
}

