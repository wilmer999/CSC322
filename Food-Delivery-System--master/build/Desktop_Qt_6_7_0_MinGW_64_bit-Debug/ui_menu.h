/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *food11;
    QSpinBox *food11c;
    QTextBrowser *food12;
    QSpinBox *food12c;
    QTextBrowser *food13;
    QSpinBox *food13c;
    QTextBrowser *food14;
    QSpinBox *food14c;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QTextBrowser *food21;
    QSpinBox *food21c;
    QLabel *label_2;
    QWidget *tab_3;
    QTextBrowser *food11_2;
    QLabel *label_7;
    QSpinBox *food11c_2;
    QLabel *label;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(905, 581);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(menu);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 10, 911, 551));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(18);
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(true);
        tabWidget->setTabletTracking(true);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 205, 123);\n"
"background-color: rgb(224, 112, 0);\n"
"background-color: rgb(137, 206, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"border-right-color: rgb(255, 198, 84);\n"
"selection-color: rgb(170, 170, 127);\n"
"border-color: rgb(255, 204, 74);\n"
"background-color: rgb(170, 255, 127);\n"
"background-color: rgb(239, 120, 0);\n"
"background-color: rgb(226, 113, 0);\n"
"background-color: rgb(175, 88, 0);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        food11 = new QTextBrowser(tab);
        food11->setObjectName("food11");
        food11->setGeometry(QRect(190, 20, 171, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(10);
        food11->setFont(font1);
        food11->setAutoFillBackground(true);
        food11->setStyleSheet(QString::fromUtf8(""));
        food11->setLineWidth(0);
        food11c = new QSpinBox(tab);
        food11c->setObjectName("food11c");
        food11c->setGeometry(QRect(190, 120, 51, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font2.setPointSize(10);
        font2.setBold(true);
        food11c->setFont(font2);
        food12 = new QTextBrowser(tab);
        food12->setObjectName("food12");
        food12->setGeometry(QRect(190, 160, 171, 111));
        QFont font3;
        font3.setPointSize(10);
        food12->setFont(font3);
        food12->setAutoFillBackground(true);
        food12c = new QSpinBox(tab);
        food12c->setObjectName("food12c");
        food12c->setGeometry(QRect(190, 270, 51, 31));
        food12c->setFont(font3);
        food13 = new QTextBrowser(tab);
        food13->setObjectName("food13");
        food13->setGeometry(QRect(580, 20, 171, 101));
        food13->setFont(font3);
        food13->setAutoFillBackground(true);
        food13c = new QSpinBox(tab);
        food13c->setObjectName("food13c");
        food13c->setGeometry(QRect(580, 120, 51, 31));
        food13c->setFont(font3);
        food14 = new QTextBrowser(tab);
        food14->setObjectName("food14");
        food14->setGeometry(QRect(580, 160, 171, 111));
        food14->setFont(font3);
        food14->setAutoFillBackground(true);
        food14c = new QSpinBox(tab);
        food14c->setObjectName("food14c");
        food14c->setGeometry(QRect(580, 270, 51, 31));
        food14c->setFont(font3);
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 430, 101, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font4.setPointSize(16);
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 157, 19);\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 171, 111));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/chaofan.jpg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(400, 10, 171, 111));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/chaofen.jpeg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 160, 171, 111));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/jiaozi.jpg")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(400, 160, 171, 111));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/tofu.jpeg")));
        label_6->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        food21 = new QTextBrowser(tab_2);
        food21->setObjectName("food21");
        food21->setGeometry(QRect(190, 20, 171, 111));
        food21->setFont(font1);
        food21->setAutoFillBackground(true);
        food21->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        food21c = new QSpinBox(tab_2);
        food21c->setObjectName("food21c");
        food21c->setGeometry(QRect(190, 130, 51, 31));
        food21c->setFont(font2);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 161, 111));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/vegieSoup.jpg")));
        label_2->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        food11_2 = new QTextBrowser(tab_3);
        food11_2->setObjectName("food11_2");
        food11_2->setGeometry(QRect(200, 20, 171, 81));
        food11_2->setFont(font1);
        food11_2->setAutoFillBackground(true);
        food11_2->setStyleSheet(QString::fromUtf8(""));
        food11_2->setLineWidth(0);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 20, 171, 81));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/drinks.jpeg")));
        label_7->setScaledContents(true);
        food11c_2 = new QSpinBox(tab_3);
        food11c_2->setObjectName("food11c_2");
        food11c_2->setGeometry(QRect(200, 100, 51, 31));
        food11c_2->setFont(font2);
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(800, -10, 101, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(28);
        font5.setBold(false);
        font5.setItalic(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";\n"
"font: 48pt \"Segoe UI\";\n"
"font: 28pt \"Segoe UI\";"));

        retranslateUi(menu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("menu", "back", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("menu", "Main", nullptr));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("menu", "Appetizers", nullptr));
        food11_2->setHtml(QCoreApplication::translate("menu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial Rounded MT Bold'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("menu", "Drinks", nullptr));
        label->setText(QCoreApplication::translate("menu", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
