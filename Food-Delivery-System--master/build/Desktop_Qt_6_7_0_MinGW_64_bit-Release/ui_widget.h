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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *name;
    QLineEdit *password;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(815, 475);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 290, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(22);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 330, 111, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 0, 721, 141));
        QPalette palette;
        QBrush brush(QColor(0, 0, 239, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 0, 239, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        label_3->setPalette(palette);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 239);"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 370, 171, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font3.setPointSize(11);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 5, 127);\n"
"background-color: rgb(120, 200, 250);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 420, 171, 41));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 131);"));
        name = new QLineEdit(Widget);
        name->setObjectName("name");
        name->setGeometry(QRect(270, 290, 361, 31));
        password = new QLineEdit(Widget);
        password->setObjectName("password");
        password->setGeometry(QRect(270, 330, 361, 31));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 140, 831, 481));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix2/back_\345\211\257\346\234\254.png);"));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 420, 171, 41));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"background-color: rgb(130, 200, 150);"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 10, 811, 471));
        pushButton_menu = new QPushButton(Widget);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(460, 370, 171, 41));
        pushButton_menu->setFont(font3);
        pushButton_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"background-color: rgb(130, 200, 150);"));
        textBrowser->raise();
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        name->raise();
        password->raise();
        pushButton_3->raise();
        pushButton_menu->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "UserID", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Password", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "Log-IN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Employee", nullptr));
        label_4->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Widget", "Sign-UP", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/welcome.jpg\" /></p></body></html>", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
