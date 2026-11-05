/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clavier
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButtonMarche;
    QPushButton *pushButton_0;
    QPushButton *pushButtonArret;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxLedVerte;
    QCheckBox *checkBoxLedRouge;

    void setupUi(QWidget *Clavier)
    {
        if (Clavier->objectName().isEmpty())
            Clavier->setObjectName("Clavier");
        Clavier->resize(289, 241);
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        Clavier->setFont(font);
        Clavier->setStyleSheet(QString::fromUtf8("background-color: LightGray;\n"
""));
        gridLayoutWidget = new QWidget(Clavier);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 80, 254, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButtonMarche = new QPushButton(gridLayoutWidget);
        pushButtonMarche->setObjectName("pushButtonMarche");

        gridLayout->addWidget(pushButtonMarche, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButtonArret = new QPushButton(gridLayoutWidget);
        pushButtonArret->setObjectName("pushButtonArret");

        gridLayout->addWidget(pushButtonArret, 3, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(Clavier);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 10, 181, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxLedVerte = new QCheckBox(horizontalLayoutWidget);
        checkBoxLedVerte->setObjectName("checkBoxLedVerte");
        checkBoxLedVerte->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        checkBoxLedVerte->setFont(font1);
        checkBoxLedVerte->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        checkBoxLedVerte->setAutoFillBackground(false);

        horizontalLayout->addWidget(checkBoxLedVerte);

        checkBoxLedRouge = new QCheckBox(horizontalLayoutWidget);
        checkBoxLedRouge->setObjectName("checkBoxLedRouge");
        checkBoxLedRouge->setEnabled(false);
        checkBoxLedRouge->setFont(font1);
        checkBoxLedRouge->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        checkBoxLedRouge->setAutoFillBackground(false);

        horizontalLayout->addWidget(checkBoxLedRouge);


        retranslateUi(Clavier);

        QMetaObject::connectSlotsByName(Clavier);
    } // setupUi

    void retranslateUi(QWidget *Clavier)
    {
        Clavier->setWindowTitle(QCoreApplication::translate("Clavier", "Clavier", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Clavier", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Clavier", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clavier", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Clavier", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Clavier", "8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clavier", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Clavier", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Clavier", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Clavier", "6", nullptr));
        pushButtonMarche->setText(QCoreApplication::translate("Clavier", "Marche", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Clavier", "0", nullptr));
        pushButtonArret->setText(QCoreApplication::translate("Clavier", "Arr\303\252t", nullptr));
        checkBoxLedVerte->setText(QCoreApplication::translate("Clavier", "Led Verte", nullptr));
        checkBoxLedRouge->setText(QCoreApplication::translate("Clavier", "Led Rouge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clavier: public Ui_Clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H
