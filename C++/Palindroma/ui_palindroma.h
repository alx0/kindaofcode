/********************************************************************************
** Form generated from reading UI file 'palindroma.ui'
**
** Created: Sat Mar 17 12:42:26 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PALINDROMA_H
#define UI_PALINDROMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Palindroma
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Palindroma)
    {
        if (Palindroma->objectName().isEmpty())
            Palindroma->setObjectName(QString::fromUtf8("Palindroma"));
        Palindroma->resize(331, 168);
        textEdit = new QTextEdit(Palindroma);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 201, 41));
        pushButton = new QPushButton(Palindroma);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 70, 91, 27));
        label = new QLabel(Palindroma);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 130, 281, 21));

        retranslateUi(Palindroma);

        QMetaObject::connectSlotsByName(Palindroma);
    } // setupUi

    void retranslateUi(QWidget *Palindroma)
    {
        Palindroma->setWindowTitle(QApplication::translate("Palindroma", "Palindroma", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Palindroma", "Check", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Palindroma", "......", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Palindroma: public Ui_Palindroma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALINDROMA_H
