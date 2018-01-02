/********************************************************************************
** Form generated from reading UI file 'SheetType.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEETTYPE_H
#define UI_SHEETTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SheetType
{
public:
    QWidget *centralwidget;
    QPushButton *btn_arbeit;
    QPushButton *btn_projekt;
    QPushButton *btn_abschluss;
    QPushButton *btn_cancel;

    void setupUi(QMainWindow *SheetType)
    {
        if (SheetType->objectName().isEmpty())
            SheetType->setObjectName(QStringLiteral("SheetType"));
        SheetType->resize(566, 487);
        centralwidget = new QWidget(SheetType);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_arbeit = new QPushButton(centralwidget);
        btn_arbeit->setObjectName(QStringLiteral("btn_arbeit"));
        btn_arbeit->setGeometry(QRect(200, 60, 161, 51));
        QFont font;
        font.setPointSize(10);
        btn_arbeit->setFont(font);
        btn_projekt = new QPushButton(centralwidget);
        btn_projekt->setObjectName(QStringLiteral("btn_projekt"));
        btn_projekt->setGeometry(QRect(200, 140, 161, 51));
        btn_projekt->setFont(font);
        btn_abschluss = new QPushButton(centralwidget);
        btn_abschluss->setObjectName(QStringLiteral("btn_abschluss"));
        btn_abschluss->setGeometry(QRect(200, 220, 161, 51));
        btn_abschluss->setFont(font);
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(200, 300, 161, 51));
        btn_cancel->setFont(font);
        SheetType->setCentralWidget(centralwidget);

        retranslateUi(SheetType);

        QMetaObject::connectSlotsByName(SheetType);
    } // setupUi

    void retranslateUi(QMainWindow *SheetType)
    {
        SheetType->setWindowTitle(QApplication::translate("SheetType", "MainWindow", nullptr));
        btn_arbeit->setText(QApplication::translate("SheetType", "Arbeit", nullptr));
        btn_projekt->setText(QApplication::translate("SheetType", "Projektarbeit", nullptr));
        btn_abschluss->setText(QApplication::translate("SheetType", "Abschlussarbeit", nullptr));
        btn_cancel->setText(QApplication::translate("SheetType", "Abbrechen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SheetType: public Ui_SheetType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEETTYPE_H
