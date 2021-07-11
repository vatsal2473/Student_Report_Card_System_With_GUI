#ifndef SEARCH_REPORT_H
#define SEARCH_REPORT_H

#include <QDialog>

namespace Ui {
class Search_report;
}

class Search_report : public QDialog
{
    Q_OBJECT

public:
    explicit Search_report(QWidget *parent = nullptr);
    ~Search_report();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Search_report *ui;
};

#endif // SEARCH_REPORT_H
