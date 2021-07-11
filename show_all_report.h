#ifndef SHOW_ALL_REPORT_H
#define SHOW_ALL_REPORT_H

#include <QDialog>

namespace Ui {
class Show_all_report;
}

class Show_all_report : public QDialog
{
    Q_OBJECT

public:
    explicit Show_all_report(QWidget *parent = nullptr);
    ~Show_all_report();
    void show_reports();

private:
    Ui::Show_all_report *ui;
};

#endif // SHOW_ALL_REPORT_H
