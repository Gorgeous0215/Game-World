/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionBasic;
    QAction *actionMedium;
    QAction *actionHard;
    QAction *actionQuit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuLevel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionBasic = new QAction(MainWindow);
        actionBasic->setObjectName(QStringLiteral("actionBasic"));
        actionMedium = new QAction(MainWindow);
        actionMedium->setObjectName(QStringLiteral("actionMedium"));
        actionHard = new QAction(MainWindow);
        actionHard->setObjectName(QStringLiteral("actionHard"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuLevel = new QMenu(menu);
        menuLevel->setObjectName(QStringLiteral("menuLevel"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionStart);
        menu->addAction(menuLevel->menuAction());
        menu->addAction(actionQuit);
        menuLevel->addAction(actionBasic);
        menuLevel->addAction(actionMedium);
        menuLevel->addAction(actionHard);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionStart->setText(QApplication::translate("MainWindow", "start", 0));
        actionBasic->setText(QApplication::translate("MainWindow", "basic", 0));
        actionMedium->setText(QApplication::translate("MainWindow", "medium", 0));
        actionHard->setText(QApplication::translate("MainWindow", "hard", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "quit", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217", 0));
        menuLevel->setTitle(QApplication::translate("MainWindow", "level", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
