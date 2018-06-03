#include "dialog.h"
#include "ui_dialog.h"
#include <qlineedit.h>
#include <QPainter>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->enter_pushButton->setDefault(true);
    connect(ui->enter_pushButton,&QPushButton::clicked,this,&Dialog::on_enter_pushButton_clicked);
    connect(ui->quit_pushButton,&QPushButton::clicked,this,&Dialog::close);
     ui->user_lineEdit->setPlaceholderText("username");
     ui->password_lineEdit->setPlaceholderText("passcode");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_enter_pushButton_clicked()
{
    if(ui->user_lineEdit->text() == tr("zhangxinyu") && ui->password_lineEdit->text() == tr("0215"))
    {
        accept();
    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误"));
        ui->user_lineEdit->clear();
        ui->password_lineEdit->clear();
        ui->user_lineEdit->setFocus();
    }
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter *pa;
    pa = new QPainter();
    QPixmap all;
    all.load("F:\\QT\\over.jpg");
    pa->drawPixmap(QPoint(0,0),all);
}


void Dialog::on_user_lineEdit_textEdited(const QString &arg1)
{
    ui->user_lineEdit->setPlaceholderText("username");
    ui->user_lineEdit->setEchoMode(QLineEdit::Normal);
   // z在这里写的 keneng  需要

}

void Dialog::on_password_lineEdit_textEdited(const QString &arg1)
{
    ui->password_lineEdit->setPlaceholderText("passcode");
    ui->password_lineEdit->setEchoMode(QLineEdit::Password);
}
