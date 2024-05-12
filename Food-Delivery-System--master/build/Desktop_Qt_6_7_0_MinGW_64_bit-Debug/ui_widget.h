/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *name;
    QLineEdit *password;
    QPushButton *pushButton_3;
    QPushButton *pushButton_menu;
    QLabel *label_5;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(778, 475);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 280, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(18);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 340, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 5, 127);\n"
"background-color: rgb(120, 200, 250);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(650, 420, 111, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 131);"));
        name = new QLineEdit(Widget);
        name->setObjectName("name");
        name->setGeometry(QRect(230, 230, 331, 31));
        password = new QLineEdit(Widget);
        password->setObjectName("password");
        password->setGeometry(QRect(230, 280, 331, 31));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 420, 91, 41));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"background-color: rgb(130, 200, 150);"));
        pushButton_menu = new QPushButton(Widget);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(680, 10, 81, 41));
        pushButton_menu->setFont(font1);
        pushButton_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"background-color: rgb(130, 200, 150);"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 230, 111, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(-10, -50, 1391, 661));
        textBrowser_2->setOpenLinks(true);
        textBrowser_2->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        name->raise();
        password->raise();
        pushButton_3->raise();
        pushButton_menu->raise();
        label_5->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Log-IN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Employee", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Sign-UP", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "UserID:", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/welcome.jpg\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
