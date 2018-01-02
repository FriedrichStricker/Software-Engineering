/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginClass
{
public:
    QWidget *centralWidget;
    QPushButton *btn_login;
    QPushButton *btn_login_guest;
    QPushButton *btn_exit;
    QLineEdit *txt_email;
    QLineEdit *txt_password;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *LoginClass)
    {
        if (LoginClass->objectName().isEmpty())
            LoginClass->setObjectName(QStringLiteral("LoginClass"));
        LoginClass->resize(600, 400);
        centralWidget = new QWidget(LoginClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_login = new QPushButton(centralWidget);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(180, 190, 201, 28));
        QFont font;
        font.setPointSize(12);
        btn_login->setFont(font);
        btn_login_guest = new QPushButton(centralWidget);
        btn_login_guest->setObjectName(QStringLiteral("btn_login_guest"));
        btn_login_guest->setGeometry(QRect(180, 240, 201, 28));
        btn_login_guest->setFont(font);
        btn_exit = new QPushButton(centralWidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(180, 290, 201, 28));
        btn_exit->setFont(font);
        txt_email = new QLineEdit(centralWidget);
        txt_email->setObjectName(QStringLiteral("txt_email"));
        txt_email->setGeometry(QRect(300, 70, 201, 22));
        txt_password = new QLineEdit(centralWidget);
        txt_password->setObjectName(QStringLiteral("txt_password"));
        txt_password->setGeometry(QRect(300, 100, 201, 22));
        txt_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 91, 16));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 110, 101, 16));
        label_2->setFont(font);
        LoginClass->setCentralWidget(centralWidget);

        retranslateUi(LoginClass);

        QMetaObject::connectSlotsByName(LoginClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginClass)
    {
        LoginClass->setWindowTitle(QApplication::translate("LoginClass", "Login", nullptr));
        btn_login->setText(QApplication::translate("LoginClass", "Anmelden", nullptr));
        btn_login_guest->setText(QApplication::translate("LoginClass", "Anmelden Als Gast", nullptr));
        btn_exit->setText(QApplication::translate("LoginClass", "Beenden", nullptr));
        label->setText(QApplication::translate("LoginClass", "E-Mail", nullptr));
        label_2->setText(QApplication::translate("LoginClass", "Passwort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginClass: public Ui_LoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
