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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumerbill
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *consumerbill)
    {
        if (consumerbill->objectName().isEmpty())
            consumerbill->setObjectName("consumerbill");
        consumerbill->resize(865, 552);
        consumerbill->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 183, 183);"));
        label = new QLabel(consumerbill);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 50, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(16);
        label->setFont(font);
        tableWidget = new QTableWidget(consumerbill);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(150, 90, 471, 351));
        pushButton = new QPushButton(consumerbill);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 493, 121, 31));
        lineEdit = new QLineEdit(consumerbill);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(460, 460, 161, 41));
        label_2 = new QLabel(consumerbill);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 460, 71, 41));

        retranslateUi(consumerbill);

        QMetaObject::connectSlotsByName(consumerbill);
    } // setupUi

    void retranslateUi(QWidget *consumerbill)
    {
        consumerbill->setWindowTitle(QCoreApplication::translate("consumerbill", "Form", nullptr));
        label->setText(QCoreApplication::translate("consumerbill", "  Orders", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("consumerbill", "                           Items                          ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("consumerbill", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("consumerbill", "Confirmation", nullptr));
        pushButton->setText(QCoreApplication::translate("consumerbill", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("consumerbill", "Total Price:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consumerbill: public Ui_consumerbill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCART_H
