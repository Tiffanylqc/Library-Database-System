/********************************************************************************
** Form generated from reading UI file 'managecard.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECARD_H
#define UI_MANAGECARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageCard
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ManageCard)
    {
        if (ManageCard->objectName().isEmpty())
            ManageCard->setObjectName(QStringLiteral("ManageCard"));
        ManageCard->resize(493, 447);
        buttonBox = new QDialogButtonBox(ManageCard);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 400, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ManageCard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 80, 60, 16));
        label_2 = new QLabel(ManageCard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 20, 121, 41));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        lineEdit = new QLineEdit(ManageCard);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 80, 113, 21));
        label_3 = new QLabel(ManageCard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 110, 60, 16));
        lineEdit_2 = new QLineEdit(ManageCard);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 110, 113, 21));
        label_4 = new QLabel(ManageCard);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 140, 60, 16));
        lineEdit_3 = new QLineEdit(ManageCard);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(210, 140, 113, 21));
        lineEdit_4 = new QLineEdit(ManageCard);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(210, 170, 113, 21));
        label_5 = new QLabel(ManageCard);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 170, 71, 21));
        lineEdit_5 = new QLineEdit(ManageCard);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(210, 300, 113, 21));
        label_6 = new QLabel(ManageCard);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 310, 60, 16));
        label_7 = new QLabel(ManageCard);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 260, 121, 21));
        QFont font1;
        font1.setPointSize(15);
        label_7->setFont(font1);
        pushButton = new QPushButton(ManageCard);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 200, 211, 41));
        pushButton_2 = new QPushButton(ManageCard);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 350, 201, 41));

        retranslateUi(ManageCard);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManageCard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManageCard, SLOT(reject()));

        QMetaObject::connectSlotsByName(ManageCard);
    } // setupUi

    void retranslateUi(QDialog *ManageCard)
    {
        ManageCard->setWindowTitle(QApplication::translate("ManageCard", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ManageCard", "\345\215\241\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("ManageCard", "\346\267\273\345\212\240\345\200\237\344\271\246\345\215\241\344\277\241\346\201\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("ManageCard", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("ManageCard", "\351\231\242\347\263\273", Q_NULLPTR));
        label_5->setText(QApplication::translate("ManageCard", "\350\200\201\345\270\210\357\274\217\345\255\246\347\224\237", Q_NULLPTR));
        label_6->setText(QApplication::translate("ManageCard", "\345\215\241\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("ManageCard", "\345\210\240\351\231\244\345\200\237\344\271\246\345\215\241\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ManageCard", "\347\241\256\350\256\244\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ManageCard", "\347\241\256\350\256\244\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManageCard: public Ui_ManageCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECARD_H
