/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyQPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    MyQPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    MyQPushButton *pushButton_2;
    MyQPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    MyQPushButton *pushButton_4;
    MyQPushButton *pushButton_5;
    MyQPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QDial *dial;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(286, 305);
        verticalLayout = new QVBoxLayout(MyForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_7 = new QPushButton(MyForm);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setDefault(false);

        horizontalLayout_4->addWidget(pushButton_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new MyQPushButton(MyForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        pushButton->setFont(font);
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(false);

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new MyQPushButton(MyForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setDefault(false);
        pushButton_2->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new MyQPushButton(MyForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setDefault(false);
        pushButton_3->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButton_4 = new MyQPushButton(MyForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setDefault(false);
        pushButton_4->setFlat(false);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new MyQPushButton(MyForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);
        pushButton_5->setAutoDefault(false);
        pushButton_5->setDefault(false);
        pushButton_5->setFlat(false);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new MyQPushButton(MyForm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);
        pushButton_6->setAutoDefault(false);
        pushButton_6->setDefault(false);
        pushButton_6->setFlat(false);

        horizontalLayout->addWidget(pushButton_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        dial = new QDial(MyForm);
        dial->setObjectName(QString::fromUtf8("dial"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dial->sizePolicy().hasHeightForWidth());
        dial->setSizePolicy(sizePolicy1);
        dial->setMaximum(255);
        dial->setSingleStep(10);

        horizontalLayout_6->addWidget(dial);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_8 = new QPushButton(MyForm);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(MyForm);
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton, SLOT(dial(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton_2, SLOT(dial(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton_3, SLOT(dial(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton_4, SLOT(dial(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton_6, SLOT(dial(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), pushButton_5, SLOT(dial(int)));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton, SLOT(setRand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton_2, SLOT(setRand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton_3, SLOT(setRand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton_4, SLOT(setRand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton_5, SLOT(setRand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), pushButton_6, SLOT(setRand()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MyForm", "setRand", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QApplication::translate("MyForm", "&Sortir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
