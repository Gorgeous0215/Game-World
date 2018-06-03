/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *user_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *enter_pushButton;
    QPushButton *quit_pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setStyleSheet(QStringLiteral("QDialog#Dialog{border-image: url(:/over.jpg);}"));
        user_lineEdit = new QLineEdit(Dialog);
        user_lineEdit->setObjectName(QStringLiteral("user_lineEdit"));
        user_lineEdit->setGeometry(QRect(210, 80, 113, 25));
        user_lineEdit->setAutoFillBackground(false);
        user_lineEdit->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(255, 255, 255); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(245, 69, 234); }\n"
""));
        user_lineEdit->setFrame(false);
        password_lineEdit = new QLineEdit(Dialog);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(210, 170, 113, 25));
        password_lineEdit->setFrame(false);
        enter_pushButton = new QPushButton(Dialog);
        enter_pushButton->setObjectName(QStringLiteral("enter_pushButton"));
        enter_pushButton->setGeometry(QRect(50, 250, 112, 34));
        enter_pushButton->setAutoFillBackground(false);
        enter_pushButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(255, 132, 139); border-radius: 3px; color: rgb(255, 255, 255); } \n"
"QPushButton:hover { background-color:rgb(85, 255, 127); }\n"
"\n"
""));
        quit_pushButton = new QPushButton(Dialog);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        quit_pushButton->setGeometry(QRect(200, 250, 112, 34));
        quit_pushButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(255, 132, 139); border-radius: 3px; color: rgb(255, 255, 255); } \n"
"QPushButton:hover { background-color: rgb(245, 69, 234); }"));
        quit_pushButton->raise();
        enter_pushButton->raise();
        password_lineEdit->raise();
        user_lineEdit->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        user_lineEdit->setText(QString());
        password_lineEdit->setText(QString());
        enter_pushButton->setText(QApplication::translate("Dialog", "enter", 0));
        quit_pushButton->setText(QApplication::translate("Dialog", "quit", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
