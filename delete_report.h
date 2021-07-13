#ifndef DELETE_REPORT_H
#define DELETE_REPORT_H

#include <QDialog>

namespace Ui {
class Delete_report;
}

class Delete_report : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_report(QWidget *parent = nullptr);
    ~Delete_report();
    void clearscreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Delete_report *ui;
};

#endif // DELETE_REPORT_H
