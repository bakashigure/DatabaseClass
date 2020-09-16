/********************************************************************************
** Form generated from reading UI file 'ex1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EX1_H
#define UI_EX1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ex1Class
{
public:
    QWidget *centralWidget;
    QTextEdit *title;
    QTextEdit *output;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_search_file;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *text_name_or_num;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_search_single;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_search_all;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *btn_file;
    QLabel *label_filename;
    QSpacerItem *horizontalSpacer;
    QLabel *label_used_time;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_class;
    QTextEdit *text_class;

    void setupUi(QMainWindow *ex1Class)
    {
        if (ex1Class->objectName().isEmpty())
            ex1Class->setObjectName(QString::fromUtf8("ex1Class"));
        ex1Class->resize(707, 672);
        centralWidget = new QWidget(ex1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        title = new QTextEdit(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 701, 41));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang SC"));
        title->setFont(font);
        output = new QTextEdit(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(0, 160, 701, 381));
        output->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 501, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_search_file = new QPushButton(layoutWidget);
        btn_search_file->setObjectName(QString::fromUtf8("btn_search_file"));

        horizontalLayout->addWidget(btn_search_file);

        horizontalSpacer_2 = new QSpacerItem(13, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        text_name_or_num = new QTextEdit(layoutWidget);
        text_name_or_num->setObjectName(QString::fromUtf8("text_name_or_num"));

        horizontalLayout->addWidget(text_name_or_num);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_search_single = new QPushButton(layoutWidget);
        btn_search_single->setObjectName(QString::fromUtf8("btn_search_single"));

        horizontalLayout->addWidget(btn_search_single);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_search_all = new QPushButton(layoutWidget);
        btn_search_all->setObjectName(QString::fromUtf8("btn_search_all"));

        horizontalLayout->addWidget(btn_search_all);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 390, 25));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_file = new QPushButton(layoutWidget1);
        btn_file->setObjectName(QString::fromUtf8("btn_file"));

        gridLayout->addWidget(btn_file, 0, 0, 1, 1);

        label_filename = new QLabel(layoutWidget1);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));

        gridLayout->addWidget(label_filename, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_used_time = new QLabel(centralWidget);
        label_used_time->setObjectName(QString::fromUtf8("label_used_time"));
        label_used_time->setGeometry(QRect(590, 540, 111, 16));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 50, 231, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_class = new QPushButton(layoutWidget2);
        btn_class->setObjectName(QString::fromUtf8("btn_class"));

        horizontalLayout_2->addWidget(btn_class);

        text_class = new QTextEdit(layoutWidget2);
        text_class->setObjectName(QString::fromUtf8("text_class"));

        horizontalLayout_2->addWidget(text_class);

        ex1Class->setCentralWidget(centralWidget);

        retranslateUi(ex1Class);

        QMetaObject::connectSlotsByName(ex1Class);
    } // setupUi

    void retranslateUi(QMainWindow *ex1Class)
    {
        ex1Class->setWindowTitle(QCoreApplication::translate("ex1Class", "ex1", nullptr));
        title->setHtml(QCoreApplication::translate("ex1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.PingFang SC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.PingFang SC'; font-size:14pt;\">\347\256\200\346\230\223\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        output->setHtml(QCoreApplication::translate("ex1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.PingFang SC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.PingFang SC';\">\350\276\223\345\207\272</span></p></body></html>", nullptr));
        btn_search_file->setText(QCoreApplication::translate("ex1Class", "\346\220\234\347\264\242\345\255\246\347\224\237", nullptr));
        text_name_or_num->setHtml(QCoreApplication::translate("ex1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:8pt;\"><br /></p></body></html>", nullptr));
        text_name_or_num->setPlaceholderText(QCoreApplication::translate("ex1Class", "\345\247\223\345\220\215/\345\255\246\345\217\267", nullptr));
        btn_search_single->setText(QCoreApplication::translate("ex1Class", "\346\237\245\350\257\242\350\257\245\347\224\237\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        btn_search_all->setText(QCoreApplication::translate("ex1Class", "\346\237\245\350\257\242\345\205\250\344\275\223\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        btn_file->setText(QCoreApplication::translate("ex1Class", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_filename->setText(QCoreApplication::translate("ex1Class", "FileNameNameFileNameNameFileNameNameFileNameName", nullptr));
        label_used_time->setText(QCoreApplication::translate("ex1Class", "\350\200\227\346\227\266114514MS", nullptr));
        btn_class->setText(QCoreApplication::translate("ex1Class", "\351\200\211\346\213\251\347\217\255\347\272\247", nullptr));
        text_class->setHtml(QCoreApplication::translate("ex1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:8pt;\"><br /></p></body></html>", nullptr));
        text_class->setPlaceholderText(QCoreApplication::translate("ex1Class", "\347\217\255\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ex1Class: public Ui_ex1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EX1_H
