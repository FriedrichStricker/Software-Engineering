/********************************************************************************
** Form generated from reading UI file 'Error.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QWidget *centralwidget;
    QTextEdit *txt_message;
    QPushButton *btn_ok;

    void setupUi(QMainWindow *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QStringLiteral("Error"));
        Error->resize(565, 323);
        centralwidget = new QWidget(Error);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        txt_message = new QTextEdit(centralwidget);
        txt_message->setObjectName(QStringLiteral("txt_message"));
        txt_message->setGeometry(QRect(30, 30, 501, 161));
        QFont font;
        font.setPointSize(12);
        txt_message->setFont(font);
        txt_message->setReadOnly(true);
        btn_ok = new QPushButton(centralwidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(210, 230, 141, 51));
        btn_ok->setFont(font);
        Error->setCentralWidget(centralwidget);

        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QMainWindow *Error)
    {
        Error->setWindowTitle(QApplication::translate("Error", "Error", nullptr));
        btn_ok->setText(QApplication::translate("Error", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
