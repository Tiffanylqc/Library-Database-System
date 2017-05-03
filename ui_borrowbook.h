/********************************************************************************
** Form generated from reading UI file 'borrowbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOK_H
#define UI_BORROWBOOK_H

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

class Ui_BorrowBook
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *BorrowBook)
    {
        if (BorrowBook->objectName().isEmpty())
            BorrowBook->setObjectName(QStringLiteral("BorrowBook"));
        BorrowBook->resize(334, 270);
        buttonBox = new QDialogButtonBox(BorrowBook);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-30, 220, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(BorrowBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 60, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(BorrowBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 110, 60, 16));
        label_2->setFont(font);
        lineEdit = new QLineEdit(BorrowBook);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 113, 21));
        lineEdit_2 = new QLineEdit(BorrowBook);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 110, 113, 21));
        pushButton = new QPushButton(BorrowBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 160, 191, 41));
        pushButton->setFont(font);

        retranslateUi(BorrowBook);
        QObject::connect(buttonBox, SIGNAL(accepted()), BorrowBook, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BorrowBook, SLOT(reject()));

        QMetaObject::connectSlotsByName(BorrowBook);
    } // setupUi

    void retranslateUi(QDialog *BorrowBook)
    {
        BorrowBook->setWindowTitle(QApplication::translate("BorrowBook", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowBook", "\344\271\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowBook", "\345\215\241\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BorrowBook", "\347\241\256\350\256\244\345\200\237\344\271\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowBook: public Ui_BorrowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOK_H
