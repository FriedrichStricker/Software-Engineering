/********************************************************************************
** Form generated from reading UI file 'ChangePassword.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QWidget *centralwidget;
    QLineEdit *txt_old_password;
    QLineEdit *txt_new_password;
    QLineEdit *txt_new_password_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_accept;
    QPushButton *btn_cancel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(566, 328);
        centralwidget = new QWidget(ChangePassword);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        txt_old_password = new QLineEdit(centralwidget);
        txt_old_password->setObjectName(QStringLiteral("txt_old_password"));
        txt_old_password->setGeometry(QRect(300, 50, 201, 22));
        txt_new_password = new QLineEdit(centralwidget);
        txt_new_password->setObjectName(QStringLiteral("txt_new_password"));
        txt_new_password->setGeometry(QRect(300, 100, 201, 22));
        txt_new_password_2 = new QLineEdit(centralwidget);
        txt_new_password_2->setObjectName(QStringLiteral("txt_new_password_2"));
        txt_new_password_2->setGeometry(QRect(300, 150, 201, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 201, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 100, 201, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 201, 16));
        label_3->setFont(font);
        btn_accept = new QPushButton(centralwidget);
        btn_accept->setObjectName(QStringLiteral("btn_accept"));
        btn_accept->setGeometry(QRect(20, 240, 171, 41));
        btn_accept->setFont(font);
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(370, 240, 171, 41));
        btn_cancel->setFont(font);
        ChangePassword->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ChangePassword);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChangePassword->setStatusBar(statusbar);

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QMainWindow *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "ChangePassword", nullptr));
        label->setText(QApplication::translate("ChangePassword", "Altes Passwort", nullptr));
        label_2->setText(QApplication::translate("ChangePassword", "Neues Passwort", nullptr));
        label_3->setText(QApplication::translate("ChangePassword", "Neues Passwort", nullptr));
        btn_accept->setText(QApplication::translate("ChangePassword", "Best\303\244tigen", nullptr));
        btn_cancel->setText(QApplication::translate("ChangePassword", "Abbrechen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
