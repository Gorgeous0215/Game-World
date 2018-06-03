#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include<QDebug>
#include<QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog m;
    if(m.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    else
        return 0;
}
//#include "widget.h"
