/********************************************************************************
** Form generated from reading UI file 'delivercheck.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERCHECK_H
#define UI_DELIVERCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delivercheck
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *delivercheck)
    {
        if (delivercheck->objectName().isEmpty())
            delivercheck->setObjectName("delivercheck");
        delivercheck->resize(816, 629);
        label = new QLabel(delivercheck);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 281, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight Condensed")});
        font.setPointSize(26);
        label->setFont(font);
        label_2 = new QLabel(delivercheck);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-130, -20, 1211, 641));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 255, 255);"));
        textEdit = new QTextEdit(delivercheck);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(190, 90, 491, 371));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font1.setPointSize(18);
        font1.setBold(true);
        textEdit->setFont(font1);
        pushButton = new QPushButton(delivercheck);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 10, 71, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andalus")});
        font2.setPointSize(14);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        label_2->raise();
        label->raise();
        textEdit->raise();
        pushButton->raise();

        retranslateUi(delivercheck);

        QMetaObject::connectSlotsByName(delivercheck);
    } // setupUi

    void retranslateUi(QWidget *delivercheck)
    {
        delivercheck->setWindowTitle(QCoreApplication::translate("delivercheck", "Form", nullptr));
        label->setText(QCoreApplication::translate("delivercheck", "Completed Orders", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("delivercheck", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delivercheck: public Ui_delivercheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERCHECK_H
