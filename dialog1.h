#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include "mainwindow.h"

//开始扫雷游戏的对话框

class MainWindow;
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private:
    Ui::Dialog1 *ui;
    MainWindow *a;

signals:
    void sendsigal();

    void showmainwindow();

private slots:
    void on_enter_clicked();
    void on_lineEdit_textEdited(const QString &arg1);
    void on_quit_clicked();
};

#endif // DIALOG1_H
