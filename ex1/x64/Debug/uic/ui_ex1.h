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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ex1Class
{
public:
    QWidget *centralWidget;
    QTextEdit *title;
    QTextEdit *output;
    QLabel *label_used_time;
    QLabel *label_filename;
    QPushButton *btn_file;
    QPushButton *btn_search_single;
    QTextEdit *text_name_or_num;
    QPushButton *btn_search_all;
    QPushButton *btn_file_2;

    void setupUi(QMainWindow *ex1Class)
    {
        if (ex1Class->objectName().isEmpty())
            ex1Class->setObjectName(QString::fromUtf8("ex1Class"));
        ex1Class->resize(775, 733);
        centralWidget = new QWidget(ex1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        title = new QTextEdit(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 821, 41));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang SC"));
        title->setFont(font);
        output = new QTextEdit(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(10, 150, 761, 481));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        output->setFont(font1);
        output->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        output->setPlaceholderText(QString::fromUtf8(""));
        label_used_time = new QLabel(centralWidget);
        label_used_time->setObjectName(QString::fromUtf8("label_used_time"));
        label_used_time->setGeometry(QRect(590, 630, 181, 16));
        label_filename = new QLabel(centralWidget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(99, 60, 281, 28));
        btn_file = new QPushButton(centralWidget);
        btn_file->setObjectName(QString::fromUtf8("btn_file"));
        btn_file->setGeometry(QRect(20, 49, 75, 31));
        btn_search_single = new QPushButton(centralWidget);
        btn_search_single->setObjectName(QString::fromUtf8("btn_search_single"));
        btn_search_single->setGeometry(QRect(391, 80, 104, 41));
        text_name_or_num = new QTextEdit(centralWidget);
        text_name_or_num->setObjectName(QString::fromUtf8("text_name_or_num"));
        text_name_or_num->setGeometry(QRect(102, 91, 256, 29));
        btn_search_all = new QPushButton(centralWidget);
        btn_search_all->setObjectName(QString::fromUtf8("btn_search_all"));
        btn_search_all->setGeometry(QRect(530, 80, 104, 41));
        btn_file_2 = new QPushButton(centralWidget);
        btn_file_2->setObjectName(QString::fromUtf8("btn_file_2"));
        btn_file_2->setGeometry(QRect(21, 91, 75, 31));
        ex1Class->setCentralWidget(centralWidget);

        retranslateUi(ex1Class);
        QObject::connect(btn_file, SIGNAL(clicked()), ex1Class, SLOT(fileOpenAction()));
        QObject::connect(btn_search_single, SIGNAL(clicked()), ex1Class, SLOT(averageScoreSingle()));
        QObject::connect(btn_search_all, SIGNAL(clicked()), ex1Class, SLOT(averageScoreAll()));
        QObject::connect(btn_file_2, SIGNAL(clicked()), ex1Class, SLOT(readFile()));

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
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Consolas';\">\350\276\223\345\207\272</span></p></body></html>", nullptr));
        label_used_time->setText(QCoreApplication::translate("ex1Class", "\350\200\227\346\227\266114514MS", nullptr));
        label_filename->setText(QCoreApplication::translate("ex1Class", "<html><head/><body><p><br/></p></body></html>", nullptr));
        btn_file->setText(QCoreApplication::translate("ex1Class", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btn_search_single->setText(QCoreApplication::translate("ex1Class", "\346\237\245\350\257\242\350\257\245\347\224\237\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        text_name_or_num->setHtml(QCoreApplication::translate("ex1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:8pt;\"><br /></p></body></html>", nullptr));
        text_name_or_num->setPlaceholderText(QCoreApplication::translate("ex1Class", "\345\247\223\345\220\215/\345\255\246\345\217\267", nullptr));
        btn_search_all->setText(QCoreApplication::translate("ex1Class", "\346\237\245\350\257\242\345\205\250\344\275\223\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        btn_file_2->setText(QCoreApplication::translate("ex1Class", "\350\257\273\345\217\226\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ex1Class: public Ui_ex1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EX1_H
