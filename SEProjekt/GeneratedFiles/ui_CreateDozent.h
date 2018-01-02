/********************************************************************************
** Form generated from reading UI file 'CreateDozent.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDOZENT_H
#define UI_CREATEDOZENT_H

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

class Ui_CreateDozent
{
public:
    QWidget *centralwidget;
    QPushButton *btn_cancel;
    QPushButton *btn_confirm;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txt_firstname;
    QLineEdit *txt_lastname;
    QLineEdit *txt_email;

    void setupUi(QMainWindow *CreateDozent)
    {
        if (CreateDozent->objectName().isEmpty())
            CreateDozent->setObjectName(QStringLiteral("CreateDozent"));
        CreateDozent->resize(564, 294);
        centralwidget = new QWidget(CreateDozent);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(370, 210, 161, 41));
        QFont font;
        font.setPointSize(12);
        btn_cancel->setFont(font);
        btn_confirm = new QPushButton(centralwidget);
        btn_confirm->setObjectName(QStringLiteral("btn_confirm"));
        btn_confirm->setGeometry(QRect(20, 210, 161, 41));
        btn_confirm->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 221, 20));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 221, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 221, 16));
        label_3->setFont(font);
        txt_firstname = new QLineEdit(centralwidget);
        txt_firstname->setObjectName(QStringLiteral("txt_firstname"));
        txt_firstname->setGeometry(QRect(172, 50, 351, 22));
        txt_lastname = new QLineEdit(centralwidget);
        txt_lastname->setObjectName(QStringLiteral("txt_lastname"));
        txt_lastname->setGeometry(QRect(172, 90, 351, 22));
        txt_email = new QLineEdit(centralwidget);
        txt_email->setObjectName(QStringLiteral("txt_email"));
        txt_email->setGeometry(QRect(170, 130, 351, 22));
        CreateDozent->setCentralWidget(centralwidget);

        retranslateUi(CreateDozent);

        QMetaObject::connectSlotsByName(CreateDozent);
    } // setupUi

    void retranslateUi(QMainWindow *CreateDozent)
    {
        CreateDozent->setWindowTitle(QApplication::translate("CreateDozent", "MainWindow", nullptr));
        btn_cancel->setText(QApplication::translate("CreateDozent", "Abbrechen", nullptr));
        btn_confirm->setText(QApplication::translate("CreateDozent", "Best\303\244tigen", nullptr));
        label->setText(QApplication::translate("CreateDozent", "Vorname", nullptr));
        label_2->setText(QApplication::translate("CreateDozent", "Nachname", nullptr));
        label_3->setText(QApplication::translate("CreateDozent", "E-Mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDozent: public Ui_CreateDozent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDOZENT_H
