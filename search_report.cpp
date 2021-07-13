#include "search_report.h"
#include "ui_search_report.h"
#include<QFile>
#include<QTextStream>
#include"QMessageBox"

Search_report::Search_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search_report)
{
    ui->setupUi(this);
     this->setWindowTitle("Search Report");
}

Search_report::~Search_report()
{
    delete ui;
}

void Search_report::clearscreen()
{
    ui->lineEdit_rollno->setText("");
    ui->txt_info->setText("");
}

void Search_report::on_pushButton_clicked()
{

    QString rollno = ui->lineEdit_rollno->text();


            QFile file1("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");

            if(!file1.open(QFile::ReadOnly | QFile::Text))
            {
                //QMessageBox::warning(this,"title","file not open");
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
                    int p1,c1,m1,cp1,to;
                    p1 = p.toInt();
                    c1 = c.toInt();
                    m1 = m.toInt();
                    cp1 = cp.toInt();
                    to = p1+c1+m1+cp1;
                    float pr = to/4;
                    QString tos = QString::number(to);
                    QString prs = QString::number(pr);
                    ui->txt_info->setPlainText("Name : "+f+" "+l+"\n\nMarks in Physics : "+p+"\n\nMarks in Chemistry : "+c+"\n\nMarks in maths : "+m+"\n\nMarks in Computer : "+cp+"\n\nTotal : "+tos+"\n\n Percentage : "+prs+"%");
                }
                in>>f>>l>>r>>p>>c>>m>>cp;
            }
            file1.close();
            if(found==0)
            {
                QMessageBox::warning(this,"title","Student report does not exist");
            }

          //hide();
}

