/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_logout;
    QAction *act_search;
    QWidget *centralwidget;
    QListView *lsv_list;
    QWidget *formLayoutWidget;
    QFormLayout *lay_btns;
    QMenuBar *menubar;
    QMenu *menuOptionen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(743, 761);
        act_logout = new QAction(MainWindow);
        act_logout->setObjectName(QStringLiteral("act_logout"));
        act_search = new QAction(MainWindow);
        act_search->setObjectName(QStringLiteral("act_search"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lsv_list = new QListView(centralwidget);
        lsv_list->setObjectName(QStringLiteral("lsv_list"));
        lsv_list->setGeometry(QRect(20, 20, 701, 451));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(120, 530, 481, 181));
        lay_btns = new QFormLayout(formLayoutWidget);
        lay_btns->setObjectName(QStringLiteral("lay_btns"));
        lay_btns->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 26));
        menuOptionen = new QMenu(menubar);
        menuOptionen->setObjectName(QStringLiteral("menuOptionen"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOptionen->menuAction());
        menuOptionen->addAction(act_search);
        menuOptionen->addAction(act_logout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        act_logout->setText(QApplication::translate("MainWindow", "Logout", nullptr));
        act_search->setText(QApplication::translate("MainWindow", "Suchen", nullptr));
        menuOptionen->setTitle(QApplication::translate("MainWindow", "Optionen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
