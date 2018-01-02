/********************************************************************************
** Form generated from reading UI file 'Search.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_Search
{
public:
    QWidget *centralwidget;
    QPushButton *btn_cancel;
    QPushButton *btn_search;
    QTextEdit *txt_search;

    void setupUi(QMainWindow *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(711, 311);
        centralwidget = new QWidget(Search);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(80, 180, 93, 28));
        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setGeometry(QRect(520, 180, 93, 28));
        txt_search = new QTextEdit(centralwidget);
        txt_search->setObjectName(QStringLiteral("txt_search"));
        txt_search->setGeometry(QRect(30, 30, 601, 87));
        Search->setCentralWidget(centralwidget);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QMainWindow *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Search", nullptr));
        btn_cancel->setText(QApplication::translate("Search", "PushButton", nullptr));
        btn_search->setText(QApplication::translate("Search", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
