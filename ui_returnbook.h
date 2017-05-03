/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

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

class Ui_ReturnBook
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ReturnBook)
    {
        if (ReturnBook->objectName().isEmpty())
            ReturnBook->setObjectName(QStringLiteral("ReturnBook"));
        ReturnBook->resize(403, 340);
        buttonBox = new QDialogButtonBox(ReturnBook);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ReturnBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 101, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(ReturnBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 140, 60, 16));
        label_2->setFont(font);
        lineEdit = new QLineEdit(ReturnBook);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 90, 151, 21));
        lineEdit_2 = new QLineEdit(ReturnBook);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 140, 151, 21));
        pushButton = new QPushButton(ReturnBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 251, 41));
        pushButton->setFont(font);

        retranslateUi(ReturnBook);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReturnBook, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReturnBook, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *ReturnBook)
    {
        ReturnBook->setWindowTitle(QApplication::translate("ReturnBook", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ReturnBook", "\344\271\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("ReturnBook", "\345\215\241\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ReturnBook", "\347\241\256\350\256\244\350\277\230\344\271\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReturnBook: public Ui_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
