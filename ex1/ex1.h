#pragma once

#include <iomanip>
#include <QtWidgets/QMainWindow>
#include <qfiledialog.h>
#include "ui_ex1.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <QTextEdit>
#include <qmessagebox.h>
#include <ctime>


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

    bool isNum(std::string* str);
    void replaceOutput();

    std::vector<StuInfo> table;
    std::vector<std::string> lesson;
    std::string file_path;
    
    clock_t start_time, end_time;
public slots:
    void readFile();
    void fileOpenAction();
    void averageScoreSingle();
    void averageScoreAll();
private:
    Ui::ex1Class ui;
};


