#include "dialog1.h"
#include "ui_dialog1.h"
#include "mainwindow.h"


#include<QDebug>
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);


   // this->setAttribute(Qt::WA_DeleteOnClose,1);

    ui->enter->setDefault(true);
    connect(ui->enter,&QPushButton::clicked,this,&Dialog1::on_enter_clicked);
   // connect(ui->quit_pushButton,&QPushButton::clicked,this,&Dialog::close);

     ui->lineEdit->setPlaceholderText("please decide");
    // ui->password_lineEdit->setPlaceholderText("passcode");

     connect(this,SIGNAL(showmainwindow()),a,SLOT(receivelogin())); //对话框消失
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_lineEdit_textEdited(const QString &arg1)
{

}
void Dialog1::on_enter_clicked()
{
    if(ui->lineEdit->text() == tr("I accept") )
    {
        emit showmainwindow();
        this->close();



//        //accept();
//            emit sendsigal();
//            this ->close();
    }
    else
    {
//        emit sendsigal();
//        this ->close();
       // buwanyouxi
    }
}

void Dialog1::on_quit_clicked()
{
    emit sendsigal();
    this ->close();
}
