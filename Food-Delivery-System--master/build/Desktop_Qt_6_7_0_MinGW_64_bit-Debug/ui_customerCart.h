/********************************************************************************
** Form generated from reading UI file 'customerCart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCART_H
#define UI_CUSTOMERCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumerbill
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *consumerbill)
    {
        if (consumerbill->objectName().isEmpty())
            consumerbill->setObjectName("consumerbill");
        consumerbill->resize(865, 552);
        consumerbill->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 183, 183);"));
        textBrowser = new QTextBrowser(consumerbill);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(240, 90, 351, 431));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(consumerbill);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 50, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(consumerbill);

        QMetaObject::connectSlotsByName(consumerbill);
    } // setupUi

    void retranslateUi(QWidget *consumerbill)
    {
        consumerbill->setWindowTitle(QCoreApplication::translate("consumerbill", "Form", nullptr));
        label->setText(QCoreApplication::translate("consumerbill", "  Orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consumerbill: public Ui_consumerbill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCART_H
