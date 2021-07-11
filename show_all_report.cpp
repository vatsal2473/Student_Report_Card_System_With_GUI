#include "show_all_report.h"
#include "ui_show_all_report.h"
#include<QFile>
#include<QTextStream>
#include"QMessageBox"

Show_all_report::Show_all_report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_all_report)
{
    ui->setupUi(this);
     this->setWindowTitle("Show Reports");
}

Show_all_report::~Show_all_report()
{
    delete ui;
}

void Show_all_report::show_reports()
{
    QFile file1("C:/Users/ABCD/Documents/Student_Report_Card_System/report.txt");

    if(!file1.open(QFile::ReadOnly | QFile::Text))
    {
        //QMessageBox::warning(this,"title","file not open");
    }
    QString f,l,r,p,c,m,cp;
    QTextStream in(&file1);
    in>>f>>l>>r>>p>>c>>m>>cp;
    while(!in.atEnd())
    {
            int p1,c1,m1,cp1,to;
            p1 = p.toInt();
            c1 = c.toInt();
            m1 = m.toInt();
            cp1 = cp.toInt();
            to = p1+c1+m1+cp1;
            float pr = to/4;
            QString tos = QString::number(to);
            QString prs = QString::number(pr);
            ui->txtshowall->appendPlainText("Name : "+f+" "+l+"\n\nMarks in Physics : "+p+"\n\nMarks in Chemistry : "+c+"\n\nMarks in maths : "+m+"\n\nMarks in Computer : "+cp+"\n\nTotal : "+tos+"\n\nPercentage : "+prs+"%\n\n");
            ui->txtshowall->appendPlainText("#############################################\n\n");
        in>>f>>l>>r>>p>>c>>m>>cp;
    }
    file1.close();
}
