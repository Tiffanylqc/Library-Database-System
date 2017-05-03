/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_9;
    QTableView *tableView;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(971, 468);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(590, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 60, 16));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 60, 16));
        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 90, 171, 21));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 60, 16));
        lineEdit_4 = new QLineEdit(Dialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 130, 171, 21));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 50, 60, 16));
        lineEdit_5 = new QLineEdit(Dialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(560, 50, 71, 21));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(640, 50, 16, 21));
        lineEdit_6 = new QLineEdit(Dialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(660, 50, 71, 21));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 80, 60, 16));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(480, 110, 60, 16));
        lineEdit_7 = new QLineEdit(Dialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(560, 80, 171, 21));
        lineEdit_8 = new QLineEdit(Dialog);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(560, 110, 71, 21));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(640, 110, 41, 16));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(660, 110, 71, 21));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 140, 121, 51));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 170, 111, 21));
        tableView = new QTableView(Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 200, 901, 221));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 50, 171, 21));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 141, 121, 51));
        pushButton_2->setFont(font);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\347\261\273\345\210\253", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\344\271\246\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\345\271\264\344\273\275", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\207\263", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "\344\275\234\350\200\205", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\344\273\267\346\240\274\357\274\210\345\205\203\357\274\211", Q_NULLPTR));
        lineEdit_8->setText(QString());
        label->setText(QApplication::translate("Dialog", " \350\207\263 ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\237\245\350\257\242\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
