/********************************************************************************
** Form generated from reading UI file 'searchcard.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCARD_H
#define UI_SEARCHCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchCard
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTableView *tableView;
    QTableView *tableView_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *SearchCard)
    {
        if (SearchCard->objectName().isEmpty())
            SearchCard->setObjectName(QStringLiteral("SearchCard"));
        SearchCard->resize(752, 306);
        buttonBox = new QDialogButtonBox(SearchCard);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(SearchCard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 110, 91, 21));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        tableView = new QTableView(SearchCard);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 170, 411, 71));
        tableView_2 = new QTableView(SearchCard);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(440, 80, 291, 161));
        layoutWidget = new QWidget(SearchCard);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 110, 301, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(SearchCard);
        QObject::connect(buttonBox, SIGNAL(accepted()), SearchCard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SearchCard, SLOT(reject()));

        QMetaObject::connectSlotsByName(SearchCard);
    } // setupUi

    void retranslateUi(QDialog *SearchCard)
    {
        SearchCard->setWindowTitle(QApplication::translate("SearchCard", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SearchCard", "\345\200\237\344\271\246\350\257\201\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SearchCard", "\346\237\245\350\257\242\345\200\237\344\271\246\350\257\201\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchCard: public Ui_SearchCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCARD_H
