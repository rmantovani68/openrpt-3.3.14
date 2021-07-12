/********************************************************************************
** Form generated from reading UI file 'qrconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCONFIG_H
#define UI_QRCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QRadioButton *_autosize;
    QRadioButton *_qrsizeRad;
    QComboBox *_qrSize;
    QComboBox *_errorCorrection;
    QCheckBox *_errorCorrectionChk;

    void setupUi(QWidget *QRConfig)
    {
        if (QRConfig->objectName().isEmpty())
            QRConfig->setObjectName(QString::fromUtf8("QRConfig"));
        QRConfig->resize(347, 108);
        verticalLayout = new QVBoxLayout(QRConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _autosize = new QRadioButton(QRConfig);
        _autosize->setObjectName(QString::fromUtf8("_autosize"));
        _autosize->setChecked(true);

        gridLayout->addWidget(_autosize, 0, 0, 1, 1);

        _qrsizeRad = new QRadioButton(QRConfig);
        _qrsizeRad->setObjectName(QString::fromUtf8("_qrsizeRad"));

        gridLayout->addWidget(_qrsizeRad, 1, 0, 1, 1);

        _qrSize = new QComboBox(QRConfig);
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->addItem(QString());
        _qrSize->setObjectName(QString::fromUtf8("_qrSize"));
        _qrSize->setEnabled(false);

        gridLayout->addWidget(_qrSize, 1, 1, 1, 1);

        _errorCorrection = new QComboBox(QRConfig);
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->setObjectName(QString::fromUtf8("_errorCorrection"));
        _errorCorrection->setEnabled(false);

        gridLayout->addWidget(_errorCorrection, 2, 1, 1, 1);

        _errorCorrectionChk = new QCheckBox(QRConfig);
        _errorCorrectionChk->setObjectName(QString::fromUtf8("_errorCorrectionChk"));

        gridLayout->addWidget(_errorCorrectionChk, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(QRConfig);
        QObject::connect(_qrsizeRad, SIGNAL(toggled(bool)), _qrSize, SLOT(setEnabled(bool)));
        QObject::connect(_errorCorrectionChk, SIGNAL(toggled(bool)), _errorCorrection, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QRConfig);
    } // setupUi

    void retranslateUi(QWidget *QRConfig)
    {
        QRConfig->setWindowTitle(QApplication::translate("QRConfig", "Form", nullptr));
        _autosize->setText(QApplication::translate("QRConfig", "A&utomatic Resizing", nullptr));
        _qrsizeRad->setText(QApplication::translate("QRConfig", "Set Si&ze To:", nullptr));
        _qrSize->setItemText(0, QApplication::translate("QRConfig", "21 x 21 (Version 1)", nullptr));
        _qrSize->setItemText(1, QApplication::translate("QRConfig", "25 x 25 (Version 2)", nullptr));
        _qrSize->setItemText(2, QApplication::translate("QRConfig", "29 x 29 (Version 3)", nullptr));
        _qrSize->setItemText(3, QApplication::translate("QRConfig", "33 x 33 (Version 4)", nullptr));
        _qrSize->setItemText(4, QApplication::translate("QRConfig", "37 x 37 (Version 5)", nullptr));
        _qrSize->setItemText(5, QApplication::translate("QRConfig", "41 x 41 (Version 6)", nullptr));
        _qrSize->setItemText(6, QApplication::translate("QRConfig", "45 x 45 (Version 7)", nullptr));
        _qrSize->setItemText(7, QApplication::translate("QRConfig", "49 x 49 (Version 8)", nullptr));
        _qrSize->setItemText(8, QApplication::translate("QRConfig", "53 x 53 (Version 9)", nullptr));
        _qrSize->setItemText(9, QApplication::translate("QRConfig", "57 x 57 (Version 10)", nullptr));
        _qrSize->setItemText(10, QApplication::translate("QRConfig", "61 x 61 (Version 11)", nullptr));
        _qrSize->setItemText(11, QApplication::translate("QRConfig", "65 x 65 (Version 12)", nullptr));
        _qrSize->setItemText(12, QApplication::translate("QRConfig", "69 x 69 (Version 13)", nullptr));
        _qrSize->setItemText(13, QApplication::translate("QRConfig", "73 x 73 (Version 14)", nullptr));
        _qrSize->setItemText(14, QApplication::translate("QRConfig", "77 x 77 (Version 15)", nullptr));
        _qrSize->setItemText(15, QApplication::translate("QRConfig", "81 x 81 (Version 16)", nullptr));
        _qrSize->setItemText(16, QApplication::translate("QRConfig", "85 x 85 (Version 17)", nullptr));
        _qrSize->setItemText(17, QApplication::translate("QRConfig", "89 x 89 (Version 18)", nullptr));
        _qrSize->setItemText(18, QApplication::translate("QRConfig", "93 x 93 (Version 19)", nullptr));
        _qrSize->setItemText(19, QApplication::translate("QRConfig", "97 x 97 (Version 20)", nullptr));
        _qrSize->setItemText(20, QApplication::translate("QRConfig", "101 x 101 (Version 21)", nullptr));
        _qrSize->setItemText(21, QApplication::translate("QRConfig", "105 x 105 (Version 22)", nullptr));
        _qrSize->setItemText(22, QApplication::translate("QRConfig", "109 x 109 (Version 23)", nullptr));
        _qrSize->setItemText(23, QApplication::translate("QRConfig", "113 x 113 (Version 24)", nullptr));
        _qrSize->setItemText(24, QApplication::translate("QRConfig", "117 x 117 (Version 25)", nullptr));
        _qrSize->setItemText(25, QApplication::translate("QRConfig", "121 x 121 (Version 26)", nullptr));
        _qrSize->setItemText(26, QApplication::translate("QRConfig", "125 x 125 (Version 27)", nullptr));
        _qrSize->setItemText(27, QApplication::translate("QRConfig", "129 x 129 (Version 28)", nullptr));
        _qrSize->setItemText(28, QApplication::translate("QRConfig", "133 x 133 (Version 29)", nullptr));
        _qrSize->setItemText(29, QApplication::translate("QRConfig", "137 x 137 (Version 30)", nullptr));
        _qrSize->setItemText(30, QApplication::translate("QRConfig", "141 x 141 (Version 31)", nullptr));
        _qrSize->setItemText(31, QApplication::translate("QRConfig", "145 x 145 (Version 32)", nullptr));
        _qrSize->setItemText(32, QApplication::translate("QRConfig", "149 x 149 (Version 33)", nullptr));
        _qrSize->setItemText(33, QApplication::translate("QRConfig", "153 x 153 (Version 34)", nullptr));
        _qrSize->setItemText(34, QApplication::translate("QRConfig", "157 x 157 (Version 35)", nullptr));
        _qrSize->setItemText(35, QApplication::translate("QRConfig", "161 x 161 (Version 36)", nullptr));
        _qrSize->setItemText(36, QApplication::translate("QRConfig", "165 x 165 (Version 37)", nullptr));
        _qrSize->setItemText(37, QApplication::translate("QRConfig", "169 x 169 (Version 38)", nullptr));
        _qrSize->setItemText(38, QApplication::translate("QRConfig", "173 x 173 (Version 39)", nullptr));
        _qrSize->setItemText(39, QApplication::translate("QRConfig", "177 x 177 (Version 40)", nullptr));

        _errorCorrection->setItemText(0, QApplication::translate("QRConfig", "~20% (Level L)", nullptr));
        _errorCorrection->setItemText(1, QApplication::translate("QRConfig", "~37% (Level M)", nullptr));
        _errorCorrection->setItemText(2, QApplication::translate("QRConfig", "~55% (Level Q)", nullptr));
        _errorCorrection->setItemText(3, QApplication::translate("QRConfig", "~65% (Level H)", nullptr));

        _errorCorrectionChk->setText(QApplication::translate("QRConfig", "&Error Correction:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRConfig: public Ui_QRConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCONFIG_H
