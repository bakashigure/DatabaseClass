
#include "fileMenu.h"
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QIcon>
#include <QMessageBox>
fileMenu::fileMenu(QWidget* parent) :
    QMainWindow(parent)
{
    createAction();
    createMenu();
    createContentMenu();
    this->resize(300, 400);
}
/****************************************
* Qt中创建菜单和工具栏需要如下步骤：
* 1. 建立行为Aciton
* 2. 创建菜单并使它与一个行为关联
* 3. 创建工具条并使它与一个行为关联
*****************************************/
void fileMenu::createAction()
{
    //创建打开文件动作
    fileOpenAction = new QAction(QIcon(tr("images/open.ico")), tr("打开文件"), this);
    //设置打开文件动作的快捷键
    fileOpenAction->setShortcut(tr("Ctrl + O"));
    //设置打开文件动作的提示信息
    fileOpenAction->setStatusTip(tr("打开一个文件"));
    //关联打开文件动作的信号和槽
    connect(fileOpenAction, SIGNAL(triggered()), this, SLOT(fileOpenActionSlot()));
    fileCloseAction = new QAction(QIcon(tr("images/close.ico")), tr("关闭文件"), this);
    fileCloseAction->setShortcut(tr("Ctrl + Q"));
    fileCloseAction->setStatusTip(tr("关闭一个文件"));
    connect(fileCloseAction, SIGNAL(triggered()), this, SLOT(fileCloseActionSlot()));
}
void fileMenu::createMenu()
{
    /************************************************************************
     * menuBar第一次被调用时QMainWindow会产生一个QMenuBar在窗体上，且返回一个QMenu的指针
     * menuBar()->addMenu()会生成一个QMenu且返回他的指针
     * QMenu加入一个QAction, 就可以对事件进行反应了
     * 一个QAction可以被多个地方使用, 与Java的Action一样
     **************************************************************************/
    menu = this->menuBar()->addMenu(tr("文件"));
    menu->addAction(fileOpenAction);
    menu->addAction(fileCloseAction);
}
void fileMenu::createContentMenu()
{
    this->addAction(fileOpenAction);
    this->addAction(fileCloseAction);
    //设置如何显示上下文菜单
    this->setContextMenuPolicy(Qt::ActionsContextMenu);
}
void fileMenu::fileOpenActionSlot()
{
    QMessageBox::warning(this, tr("提示"), tr("你点击了~打开文件~菜单"), QMessageBox::Yes | QMessageBox::No);
}
void fileMenu::fileCloseActionSlot()
{
    QMessageBox::warning(this, tr("提示"), tr("你点击了~关闭文件~菜单"), QMessageBox::Yes | QMessageBox::No);
}

