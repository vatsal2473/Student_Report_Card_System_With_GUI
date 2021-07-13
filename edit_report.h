#ifndef EDIT_REPORT_H
#define EDIT_REPORT_H

#include <QDialog>

namespace Ui {
class Edit_report;
}

class Edit_report : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_report(QWidget *parent = nullptr);
    ~Edit_report();
    void clearscreen();

private slots:
    void on_btnAdd_clicked();

private:
    Ui::Edit_report *ui;
};

#endif // EDIT_REPORT_H
