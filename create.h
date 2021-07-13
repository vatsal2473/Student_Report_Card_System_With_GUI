#ifndef CREATE_H
#define CREATE_H

#include <QDialog>

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();
    void clearscreen();

private slots:
    void on_btnAdd_clicked();

private:
    Ui::Create *ui;
};

#endif // CREATE_H
