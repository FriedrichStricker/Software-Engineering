/********************************************************************************
** Form generated from reading UI file 'Confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

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

class Ui_Confirm
{
public:
    QWidget *centralwidget;
    QPushButton *btn_accept;
    QPushButton *btn_cancel;
    QTextEdit *txt_confirm_message;

    void setupUi(QMainWindow *Confirm)
    {
        if (Confirm->objectName().isEmpty())
            Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->resize(565, 328);
        centralwidget = new QWidget(Confirm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_accept = new QPushButton(centralwidget);
        btn_accept->setObjectName(QStringLiteral("btn_accept"));
        btn_accept->setGeometry(QRect(20, 230, 171, 41));
        QFont font;
        font.setPointSize(12);
        btn_accept->setFont(font);
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(370, 230, 171, 41));
        btn_cancel->setFont(font);
        txt_confirm_message = new QTextEdit(centralwidget);
        txt_confirm_message->setObjectName(QStringLiteral("txt_confirm_message"));
        txt_confirm_message->setGeometry(QRect(20, 40, 521, 141));
        txt_confirm_message->setFont(font);
        txt_confirm_message->setToolTipDuration(-5);
        txt_confirm_message->setReadOnly(true);
        txt_confirm_message->setTabStopDistance(80);
        Confirm->setCentralWidget(centralwidget);

        retranslateUi(Confirm);

        QMetaObject::connectSlotsByName(Confirm);
    } // setupUi

    void retranslateUi(QMainWindow *Confirm)
    {
        Confirm->setWindowTitle(QApplication::translate("Confirm", "Confirm", nullptr));
        btn_accept->setText(QApplication::translate("Confirm", "Best\303\244tigen", nullptr));
        btn_cancel->setText(QApplication::translate("Confirm", "Abbrechen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Confirm: public Ui_Confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
