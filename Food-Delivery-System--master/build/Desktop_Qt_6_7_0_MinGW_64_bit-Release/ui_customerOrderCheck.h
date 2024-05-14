/********************************************************************************
** Form generated from reading UI file 'customerOrderCheck.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERORDERCHECK_H
#define UI_CUSTOMERORDERCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumercheck
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *consumercheck)
    {
        if (consumercheck->objectName().isEmpty())
            consumercheck->setObjectName("consumercheck");
        consumercheck->resize(884, 501);
        label = new QLabel(consumercheck);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 281, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Berlin Sans FB Demi")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(consumercheck);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(670, 40, 101, 31));
        label_2->setFont(font);
        pushButton = new QPushButton(consumercheck);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(824, 12, 51, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Aharoni")});
        font1.setBold(true);
        pushButton->setFont(font1);
        label_3 = new QLabel(consumercheck);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-30, -10, 921, 521));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 219, 134);\n"
"background-color: rgb(134, 201, 201);"));
        textEdit = new QTextEdit(consumercheck);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 80, 391, 391));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(11);
        font2.setBold(true);
        textEdit->setFont(font2);
        textEdit_2 = new QTextEdit(consumercheck);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(550, 80, 291, 391));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font3.setPointSize(16);
        textEdit_2->setFont(font3);
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        textEdit->raise();
        textEdit_2->raise();

        retranslateUi(consumercheck);

        QMetaObject::connectSlotsByName(consumercheck);
    } // setupUi

    void retranslateUi(QWidget *consumercheck)
    {
        consumercheck->setWindowTitle(QCoreApplication::translate("consumercheck", "Form", nullptr));
        label->setText(QCoreApplication::translate("consumercheck", "Orders", nullptr));
        label_2->setText(QCoreApplication::translate("consumercheck", "History", nullptr));
        pushButton->setText(QCoreApplication::translate("consumercheck", "BACK", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class consumercheck: public Ui_consumercheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERORDERCHECK_H
