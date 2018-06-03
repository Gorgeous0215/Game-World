
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QMessageBox>
#include <qlineedit.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~Dialog();
private slots:
    void on_enter_pushButton_clicked();


    void on_user_lineEdit_textEdited(const QString &arg1);
    void on_password_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Dialog *ui;


};

#endif // DIALOG_H
