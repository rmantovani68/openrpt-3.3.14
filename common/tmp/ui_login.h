/*
 * OpenRPT report writer and rendering engine
 * Copyright (C) 2001-2014 by OpenMFG, LLC
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * Please contact info@openmfg.com with any questions on this license.
*/

/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLineEdit *_username;
    QLabel *_server;
    QLabel *_serverLit;
    QLabel *_databaseLit;
    QLineEdit *_password;
    QLabel *_usernameLit;
    QLabel *_database;
    QLabel *_passwordLit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout1;
    QPushButton *_options;
    QSpacerItem *spacerItem;
    QPushButton *_login;
    QPushButton *_close;
    QVBoxLayout *vboxLayout2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(331, 110);
        hboxLayout = new QHBoxLayout(login);
        hboxLayout->setSpacing(7);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _username = new QLineEdit(login);
        _username->setObjectName(QString::fromUtf8("_username"));
        _username->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(_username->sizePolicy().hasHeightForWidth());
        _username->setSizePolicy(sizePolicy);
        _username->setMaximumSize(QSize(100, 32767));
        _username->setFrame(false);

        gridLayout->addWidget(_username, 0, 1, 1, 1);

        _server = new QLabel(login);
        _server->setObjectName(QString::fromUtf8("_server"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_server->sizePolicy().hasHeightForWidth());
        _server->setSizePolicy(sizePolicy1);
        _server->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_server, 0, 3, 1, 1);

        _serverLit = new QLabel(login);
        _serverLit->setObjectName(QString::fromUtf8("_serverLit"));
        _serverLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_serverLit, 0, 2, 1, 1);

        _databaseLit = new QLabel(login);
        _databaseLit->setObjectName(QString::fromUtf8("_databaseLit"));
        _databaseLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_databaseLit, 1, 2, 1, 1);

        _password = new QLineEdit(login);
        _password->setObjectName(QString::fromUtf8("_password"));
        sizePolicy.setHeightForWidth(_password->sizePolicy().hasHeightForWidth());
        _password->setSizePolicy(sizePolicy);
        _password->setMaximumSize(QSize(100, 32767));
        _password->setFrame(false);

        gridLayout->addWidget(_password, 1, 1, 1, 1);

        _usernameLit = new QLabel(login);
        _usernameLit->setObjectName(QString::fromUtf8("_usernameLit"));
        _usernameLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_usernameLit, 0, 0, 1, 1);

        _database = new QLabel(login);
        _database->setObjectName(QString::fromUtf8("_database"));
        sizePolicy1.setHeightForWidth(_database->sizePolicy().hasHeightForWidth());
        _database->setSizePolicy(sizePolicy1);
        _database->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_database, 1, 3, 1, 1);

        _passwordLit = new QLabel(login);
        _passwordLit->setObjectName(QString::fromUtf8("_passwordLit"));
        _passwordLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_passwordLit, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        _options = new QPushButton(login);
        _options->setObjectName(QString::fromUtf8("_options"));

        hboxLayout1->addWidget(_options);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        _login = new QPushButton(login);
        _login->setObjectName(QString::fromUtf8("_login"));
        _login->setAutoDefault(true);

        hboxLayout1->addWidget(_login);

        _close = new QPushButton(login);
        _close->setObjectName(QString::fromUtf8("_close"));

        hboxLayout1->addWidget(_close);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);

        hboxLayout1->addLayout(vboxLayout2);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addLayout(vboxLayout1);


        hboxLayout->addLayout(vboxLayout);

#ifndef QT_NO_SHORTCUT
        _serverLit->setBuddy(_server);
        _databaseLit->setBuddy(_database);
        _usernameLit->setBuddy(_username);
        _passwordLit->setBuddy(_password);
#endif // QT_NO_SHORTCUT

        retranslateUi(login);
        QObject::connect(_close, SIGNAL(clicked()), login, SLOT(reject()));

        _login->setDefault(true);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Log In", nullptr));
        _server->setText(QString());
        _serverLit->setText(QApplication::translate("login", "S&erver:", nullptr));
        _databaseLit->setText(QApplication::translate("login", "&Database:", nullptr));
        _usernameLit->setText(QApplication::translate("login", "&Username:", nullptr));
        _database->setText(QString());
        _passwordLit->setText(QApplication::translate("login", "&Password:", nullptr));
        _options->setText(QApplication::translate("login", "&Options", nullptr));
        _login->setText(QApplication::translate("login", "&Login", nullptr));
        _close->setText(QApplication::translate("login", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
