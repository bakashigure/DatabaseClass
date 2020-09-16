#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ex1.h"

class ex1 : public QMainWindow
{
    Q_OBJECT

public:
    ex1(QWidget *parent = Q_NULLPTR);

private:
    Ui::ex1Class ui;
};
