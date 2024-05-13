/********************************************************************************
** Form generated from reading UI file 'taskreply.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKREPLY_H
#define UI_TASKREPLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskreply
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *taskreply)
    {
        if (taskreply->objectName().isEmpty())
            taskreply->setObjectName("taskreply");
        taskreply->resize(616, 607);
        label = new QLabel(taskreply);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 81, 21));
        label_2 = new QLabel(taskreply);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 110, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Eras Medium ITC")});
        font.setPointSize(26);
        font.setBold(true);
        label_2->setFont(font);
        label_3 = new QLabel(taskreply);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, -10, 641, 651));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix2/sdf);"));
        tableWidget = new QTableWidget(taskreply);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(70, 210, 471, 311));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Symbol")});
        font1.setPointSize(12);
        font1.setBold(true);
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 99, 73);\n"
"color: rgb(205, 240, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 75, 31);\n"
"background-color: rgb(23, 83, 14);\n"
"background-color: rgb(0, 106, 78);"));
        pushButton = new QPushButton(taskreply);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 20, 81, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton->setFont(font2);
        label_3->raise();
        label->raise();
        label_2->raise();
        tableWidget->raise();
        pushButton->raise();

        retranslateUi(taskreply);

        QMetaObject::connectSlotsByName(taskreply);
    } // setupUi

    void retranslateUi(QWidget *taskreply)
    {
        taskreply->setWindowTitle(QCoreApplication::translate("taskreply", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("taskreply", "Assigned Orders", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("taskreply", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskreply: public Ui_taskreply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKREPLY_H
