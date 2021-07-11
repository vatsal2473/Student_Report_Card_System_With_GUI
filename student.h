#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include"search_report.h"
#include"show_all_report.h"

namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = nullptr);
    ~Student();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Student *ui;
    Search_report *ptrsearch;
    Show_all_report *ptrshowreport;
};

#endif // STUDENT_H
