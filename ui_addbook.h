/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

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

class Ui_AddBook
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QStringLiteral("AddBook"));
        AddBook->resize(528, 412);
        buttonBox = new QDialogButtonBox(AddBook);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(180, 370, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 80, 60, 16));
        lineEdit = new QLineEdit(AddBook);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(260, 80, 113, 21));
        lineEdit_2 = new QLineEdit(AddBook);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 110, 113, 21));
        label_2 = new QLabel(AddBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 110, 60, 16));
        lineEdit_3 = new QLineEdit(AddBook);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 140, 113, 21));
        label_3 = new QLabel(AddBook);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 140, 60, 16));
        lineEdit_4 = new QLineEdit(AddBook);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 170, 113, 21));
        label_4 = new QLabel(AddBook);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 170, 60, 16));
        lineEdit_5 = new QLineEdit(AddBook);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 200, 113, 21));
        label_5 = new QLabel(AddBook);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 200, 60, 16));
        lineEdit_6 = new QLineEdit(AddBook);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(260, 230, 113, 21));
        label_6 = new QLabel(AddBook);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 230, 60, 16));
        lineEdit_7 = new QLineEdit(AddBook);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(260, 260, 113, 21));
        label_7 = new QLabel(AddBook);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 260, 60, 16));
        pushButton = new QPushButton(AddBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 320, 231, 41));
        label_8 = new QLabel(AddBook);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 290, 60, 16));
        lineEdit_8 = new QLineEdit(AddBook);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(260, 290, 113, 21));
        label_9 = new QLabel(AddBook);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(200, 10, 191, 61));
        QFont font;
        font.setPointSize(21);
        label_9->setFont(font);

        retranslateUi(AddBook);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBook, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBook, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QApplication::translate("AddBook", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddBook", "\344\271\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddBook", "\347\261\273\345\210\253", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddBook", "\344\271\246\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddBook", "\345\207\272\347\211\210\347\244\276\345\220\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddBook", "\345\207\272\347\211\210\345\271\264\344\273\275", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddBook", "\344\275\234\350\200\205", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddBook", "\344\273\267\346\240\274", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddBook", "\347\241\256\350\256\244\346\267\273\345\212\240\350\257\245\344\271\246\347\261\215", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddBook", "\346\225\260\351\207\217", Q_NULLPTR));
        lineEdit_8->setText(QString());
        label_9->setText(QApplication::translate("AddBook", "\346\267\273\345\212\240\344\271\246\347\261\215\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
