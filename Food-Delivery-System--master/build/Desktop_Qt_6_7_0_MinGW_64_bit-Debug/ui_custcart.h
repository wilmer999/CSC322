/********************************************************************************
** Form generated from reading UI file 'custcart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTCART_H
#define UI_CUSTCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CustCart
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;

    void setupUi(QDialog *CustCart)
    {
        if (CustCart->objectName().isEmpty())
            CustCart->setObjectName("CustCart");
        CustCart->resize(608, 534);
        label_2 = new QLabel(CustCart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 450, 71, 41));
        label = new QLabel(CustCart);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 40, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(16);
        label->setFont(font);
        pushButton = new QPushButton(CustCart);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 483, 121, 31));
        lineEdit = new QLineEdit(CustCart);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(420, 450, 161, 41));
        tableWidget = new QTableWidget(CustCart);
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
        tableWidget->setGeometry(QRect(110, 80, 471, 351));

        retranslateUi(CustCart);

        QMetaObject::connectSlotsByName(CustCart);
    } // setupUi

    void retranslateUi(QDialog *CustCart)
    {
        CustCart->setWindowTitle(QCoreApplication::translate("CustCart", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CustCart", "Total Price:", nullptr));
        label->setText(QCoreApplication::translate("CustCart", "  Orders", nullptr));
        pushButton->setText(QCoreApplication::translate("CustCart", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CustCart", "                           Items                          ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CustCart", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CustCart", "Confirmation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustCart: public Ui_CustCart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTCART_H
