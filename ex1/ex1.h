#pragma once


#include <QtWidgets/QMainWindow>
#include <qfiledialog.h>
#include "ui_ex1.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <qmessagebox.h>


typedef struct
{
    std::string name;
    std::string classname;
    int uid;
    std::vector<int> score;
}StuInfo;


class ex1 : public QMainWindow
{
    Q_OBJECT

public:
    ex1(QWidget *parent = Q_NULLPTR);
    void readFile(QString* path);
    std::vector<StuInfo> table;
    std::vector<std::string> lesson;
public slots:
    QString fileOpenAction();
private:
    Ui::ex1Class ui;
};


