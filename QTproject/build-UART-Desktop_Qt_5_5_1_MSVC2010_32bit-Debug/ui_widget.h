/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *HexReceiveBox;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_10;
    QTextEdit *ReceiveEdit;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *SearchButton;
    QComboBox *SerialBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *boudlabel;
    QComboBox *boudBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *stoplabel;
    QComboBox *stopBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *datalabel;
    QComboBox *dataBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *verifylabel;
    QComboBox *verifyBox;
    QPushButton *KeyButton;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *sendEdit;
    QVBoxLayout *verticalLayout;
    QCheckBox *timesendBox;
    QLabel *cyclelabel;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *cycleEdit;
    QLabel *mslabel;
    QCheckBox *HexSendBox;
    QCheckBox *autonext;
    QPushButton *SendButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *sendLabel;
    QLabel *label_2;
    QLabel *receiveLabel;
    QVBoxLayout *verticalLayout_6;
    QChartView *ChartView;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *reductionButton;
    QPushButton *continueButton;
    QPushButton *stpButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1383, 521);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1381, 521));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        HexReceiveBox = new QCheckBox(layoutWidget);
        HexReceiveBox->setObjectName(QStringLiteral("HexReceiveBox"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        HexReceiveBox->setFont(font);

        verticalLayout_2->addWidget(HexReceiveBox);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setFont(font);

        verticalLayout_2->addWidget(clearButton);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        ReceiveEdit = new QTextEdit(layoutWidget);
        ReceiveEdit->setObjectName(QStringLiteral("ReceiveEdit"));

        horizontalLayout_10->addWidget(ReceiveEdit);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SearchButton = new QPushButton(layoutWidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        SearchButton->setFont(font1);

        horizontalLayout_2->addWidget(SearchButton);

        SerialBox = new QComboBox(layoutWidget);
        SerialBox->setObjectName(QStringLiteral("SerialBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SerialBox->sizePolicy().hasHeightForWidth());
        SerialBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(SerialBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        boudlabel = new QLabel(layoutWidget);
        boudlabel->setObjectName(QStringLiteral("boudlabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        boudlabel->setFont(font2);

        horizontalLayout_3->addWidget(boudlabel);

        boudBox = new QComboBox(layoutWidget);
        boudBox->setObjectName(QStringLiteral("boudBox"));
        sizePolicy.setHeightForWidth(boudBox->sizePolicy().hasHeightForWidth());
        boudBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(boudBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        stoplabel = new QLabel(layoutWidget);
        stoplabel->setObjectName(QStringLiteral("stoplabel"));
        stoplabel->setFont(font2);

        horizontalLayout_4->addWidget(stoplabel);

        stopBox = new QComboBox(layoutWidget);
        stopBox->setObjectName(QStringLiteral("stopBox"));
        sizePolicy.setHeightForWidth(stopBox->sizePolicy().hasHeightForWidth());
        stopBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(stopBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        datalabel = new QLabel(layoutWidget);
        datalabel->setObjectName(QStringLiteral("datalabel"));
        datalabel->setFont(font2);

        horizontalLayout_5->addWidget(datalabel);

        dataBox = new QComboBox(layoutWidget);
        dataBox->setObjectName(QStringLiteral("dataBox"));
        sizePolicy.setHeightForWidth(dataBox->sizePolicy().hasHeightForWidth());
        dataBox->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(dataBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verifylabel = new QLabel(layoutWidget);
        verifylabel->setObjectName(QStringLiteral("verifylabel"));
        verifylabel->setFont(font2);

        horizontalLayout_6->addWidget(verifylabel);

        verifyBox = new QComboBox(layoutWidget);
        verifyBox->setObjectName(QStringLiteral("verifyBox"));
        sizePolicy.setHeightForWidth(verifyBox->sizePolicy().hasHeightForWidth());
        verifyBox->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(verifyBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        KeyButton = new QPushButton(layoutWidget);
        KeyButton->setObjectName(QStringLiteral("KeyButton"));
        KeyButton->setFont(font1);

        verticalLayout_3->addWidget(KeyButton);


        horizontalLayout_10->addLayout(verticalLayout_3);


        horizontalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        sendEdit = new QTextEdit(layoutWidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        horizontalLayout_8->addWidget(sendEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        timesendBox = new QCheckBox(layoutWidget);
        timesendBox->setObjectName(QStringLiteral("timesendBox"));
        timesendBox->setFont(font);

        verticalLayout->addWidget(timesendBox);

        cyclelabel = new QLabel(layoutWidget);
        cyclelabel->setObjectName(QStringLiteral("cyclelabel"));
        cyclelabel->setFont(font);

        verticalLayout->addWidget(cyclelabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        cycleEdit = new QLineEdit(layoutWidget);
        cycleEdit->setObjectName(QStringLiteral("cycleEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cycleEdit->sizePolicy().hasHeightForWidth());
        cycleEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(cycleEdit);

        mslabel = new QLabel(layoutWidget);
        mslabel->setObjectName(QStringLiteral("mslabel"));
        mslabel->setMaximumSize(QSize(90, 16777215));
        mslabel->setFont(font);

        horizontalLayout_7->addWidget(mslabel);


        verticalLayout->addLayout(horizontalLayout_7);

        HexSendBox = new QCheckBox(layoutWidget);
        HexSendBox->setObjectName(QStringLiteral("HexSendBox"));
        HexSendBox->setFont(font);

        verticalLayout->addWidget(HexSendBox);

        autonext = new QCheckBox(layoutWidget);
        autonext->setObjectName(QStringLiteral("autonext"));
        autonext->setFont(font);

        verticalLayout->addWidget(autonext);

        SendButton = new QPushButton(layoutWidget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setFont(font1);

        verticalLayout->addWidget(SendButton);


        horizontalLayout_8->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        sendLabel = new QLabel(layoutWidget);
        sendLabel->setObjectName(QStringLiteral("sendLabel"));

        horizontalLayout->addWidget(sendLabel);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        receiveLabel = new QLabel(layoutWidget);
        receiveLabel->setObjectName(QStringLiteral("receiveLabel"));

        horizontalLayout->addWidget(receiveLabel);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_12->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        ChartView = new QChartView(layoutWidget);
        ChartView->setObjectName(QStringLiteral("ChartView"));

        verticalLayout_6->addWidget(ChartView);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        reductionButton = new QPushButton(layoutWidget);
        reductionButton->setObjectName(QStringLiteral("reductionButton"));

        horizontalLayout_11->addWidget(reductionButton);

        continueButton = new QPushButton(layoutWidget);
        continueButton->setObjectName(QStringLiteral("continueButton"));

        horizontalLayout_11->addWidget(continueButton);

        stpButton = new QPushButton(layoutWidget);
        stpButton->setObjectName(QStringLiteral("stpButton"));

        horizontalLayout_11->addWidget(stpButton);


        verticalLayout_6->addLayout(horizontalLayout_11);


        horizontalLayout_12->addLayout(verticalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        HexReceiveBox->setText(QApplication::translate("Widget", "16\350\277\233\345\210\266\346\216\245\346\224\266", 0));
        clearButton->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", 0));
        SearchButton->setText(QApplication::translate("Widget", "\346\220\234\347\264\242\344\270\262\345\217\243", 0));
        boudlabel->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", 0));
        stoplabel->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", 0));
        datalabel->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", 0));
        verifylabel->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", 0));
        KeyButton->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        timesendBox->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", 0));
        cyclelabel->setText(QApplication::translate("Widget", "\345\221\250\346\234\237", 0));
        cycleEdit->setText(QApplication::translate("Widget", "1000", 0));
        mslabel->setText(QApplication::translate("Widget", "ms", 0));
        HexSendBox->setText(QApplication::translate("Widget", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        autonext->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\346\215\242\350\241\214", 0));
        SendButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", 0));
        label->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260", 0));
        sendLabel->setText(QApplication::translate("Widget", "0", 0));
        label_2->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", 0));
        receiveLabel->setText(QApplication::translate("Widget", "0", 0));
        reductionButton->setText(QApplication::translate("Widget", "\350\277\230\345\216\237", 0));
        continueButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", 0));
        stpButton->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
