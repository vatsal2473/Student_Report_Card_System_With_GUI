#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include"create.h"
#include"edit_report.h"
#include"delete_report.h"
#include"search_report.h"
#include"show_all_report.h"
namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Admin *ui;
    Create *ptrcreate;
    Edit_report *ptredit;
    Delete_report *ptrdelete;
    Search_report *ptrsearch;
    Show_all_report *ptrshowreport;
};

#endif // ADMIN_H
