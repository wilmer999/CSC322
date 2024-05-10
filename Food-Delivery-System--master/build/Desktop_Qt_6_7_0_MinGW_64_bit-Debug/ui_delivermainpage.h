/********************************************************************************
** Form generated from reading UI file 'delivermainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERMAINPAGE_H
#define UI_DELIVERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delivermainpage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *deliname;
    QPushButton *pushButton_3;
    QLabel *deliname_2;

    void setupUi(QWidget *delivermainpage)
    {
        if (delivermainpage->objectName().isEmpty())
            delivermainpage->setObjectName("delivermainpage");
        delivermainpage->resize(832, 517);
        pushButton = new QPushButton(delivermainpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 460, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(16);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(delivermainpage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 450, 181, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(16);
        pushButton_2->setFont(font1);
        label = new QLabel(delivermainpage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 841, 511));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/111);\n"
"background-color: rgb(255, 255, 255);\n"
"image: url(:/DeliveryMain.jpg);"));
        label_2 = new QLabel(delivermainpage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 81, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix2/ww);\n"
"image: url(:/deliver1.png);"));
        deliname = new QLabel(delivermainpage);
        deliname->setObjectName("deliname");
        deliname->setGeometry(QRect(30, 100, 61, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Aharoni")});
        font2.setBold(true);
        deliname->setFont(font2);
        pushButton_3 = new QPushButton(delivermainpage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(690, 0, 131, 41));
        pushButton_3->setFont(font1);
        deliname_2 = new QLabel(delivermainpage);
        deliname_2->setObjectName("deliname_2");
        deliname_2->setGeometry(QRect(20, 80, 61, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        deliname_2->setFont(font3);
        deliname_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label->raise();
        label_2->raise();
        deliname->raise();
        pushButton_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        deliname_2->raise();

        retranslateUi(delivermainpage);

        QMetaObject::connectSlotsByName(delivermainpage);
    } // setupUi

    void retranslateUi(QWidget *delivermainpage)
    {
        delivermainpage->setWindowTitle(QCoreApplication::translate("delivermainpage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("delivermainpage", "History", nullptr));
        pushButton_2->setText(QCoreApplication::translate("delivermainpage", "Tasks", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        deliname->setText(QCoreApplication::translate("delivermainpage", "Jack", nullptr));
        pushButton_3->setText(QCoreApplication::translate("delivermainpage", "Log Off", nullptr));
        deliname_2->setText(QCoreApplication::translate("delivermainpage", "Deliver\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delivermainpage: public Ui_delivermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERMAINPAGE_H
