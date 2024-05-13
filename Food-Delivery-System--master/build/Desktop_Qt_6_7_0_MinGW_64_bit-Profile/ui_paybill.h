/********************************************************************************
** Form generated from reading UI file 'paybill.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYBILL_H
#define UI_PAYBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paybill
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QWidget *paybill)
    {
        if (paybill->objectName().isEmpty())
            paybill->setObjectName("paybill");
        paybill->resize(542, 572);
        textBrowser = new QTextBrowser(paybill);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(180, 350, 241, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT Black")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        textBrowser->setFont(font);
        label = new QLabel(paybill);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 360, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(paybill);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 400, 141, 31));
        label_2->setFont(font1);
        textBrowser_2 = new QTextBrowser(paybill);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(180, 400, 241, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font2.setPointSize(16);
        font2.setItalic(true);
        textBrowser_2->setFont(font2);
        tableWidget = new QTableWidget(paybill);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(100, 70, 341, 261));
        pushButton = new QPushButton(paybill);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 500, 131, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font3.setPointSize(12);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 108, 45);"));
        label_3 = new QLabel(paybill);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 20, 81, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font4.setPointSize(22);
        label_3->setFont(font4);
        pushButton_2 = new QPushButton(paybill);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 10, 51, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font5.setBold(true);
        pushButton_2->setFont(font5);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 108, 45);"));
        label_4 = new QLabel(paybill);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-20, -10, 601, 591));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 204, 152);"));
        label_4->raise();
        textBrowser->raise();
        label->raise();
        label_2->raise();
        textBrowser_2->raise();
        tableWidget->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_2->raise();

        retranslateUi(paybill);

        QMetaObject::connectSlotsByName(paybill);
    } // setupUi

    void retranslateUi(QWidget *paybill)
    {
        paybill->setWindowTitle(QCoreApplication::translate("paybill", "Form", nullptr));
        label->setText(QCoreApplication::translate("paybill", "  Total ", nullptr));
        label_2->setText(QCoreApplication::translate("paybill", "Account Balance", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("paybill", "                           Items                          ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("paybill", "                  Numbers                 ", nullptr));
        pushButton->setText(QCoreApplication::translate("paybill", "Confirm", nullptr));
        label_3->setText(QCoreApplication::translate("paybill", "Cart", nullptr));
        pushButton_2->setText(QCoreApplication::translate("paybill", "Back", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class paybill: public Ui_paybill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYBILL_H
