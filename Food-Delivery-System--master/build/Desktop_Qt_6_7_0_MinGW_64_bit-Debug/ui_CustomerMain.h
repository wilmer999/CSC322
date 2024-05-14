/********************************************************************************
** Form generated from reading UI file 'CustomerMain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMAIN_H
#define UI_CUSTOMERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumermainpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *consumermainpage)
    {
        if (consumermainpage->objectName().isEmpty())
            consumermainpage->setObjectName("consumermainpage");
        consumermainpage->resize(912, 552);
        consumermainpage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(consumermainpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 500, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 182, 182);"));
        pushButton_2 = new QPushButton(consumermainpage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 500, 181, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 182, 182);"));
        pushButton_3 = new QPushButton(consumermainpage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 520, 111, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"background-color: rgb(182, 182, 182);"));
        pushButton_4 = new QPushButton(consumermainpage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(810, 510, 101, 31));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 182, 182);"));
        textBrowser = new QTextBrowser(consumermainpage);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 0, 761, 541));
        textBrowser->raise();
        pushButton_2->raise();
        pushButton->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(consumermainpage);

        QMetaObject::connectSlotsByName(consumermainpage);
    } // setupUi

    void retranslateUi(QWidget *consumermainpage)
    {
        consumermainpage->setWindowTitle(QCoreApplication::translate("consumermainpage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("consumermainpage", "Cart", nullptr));
        pushButton_2->setText(QCoreApplication::translate("consumermainpage", "Menu", nullptr));
        pushButton_3->setText(QCoreApplication::translate("consumermainpage", "Rating", nullptr));
        pushButton_4->setText(QCoreApplication::translate("consumermainpage", "Logoff ", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("consumermainpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/main1.jpg\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consumermainpage: public Ui_consumermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMAIN_H
