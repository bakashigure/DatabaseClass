
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
* Qt�д����˵��͹�������Ҫ���²��裺
* 1. ������ΪAciton
* 2. �����˵���ʹ����һ����Ϊ����
* 3. ������������ʹ����һ����Ϊ����
*****************************************/
void fileMenu::createAction()
{
    //�������ļ�����
    fileOpenAction = new QAction(QIcon(tr("images/open.ico")), tr("���ļ�"), this);
    //���ô��ļ������Ŀ�ݼ�
    fileOpenAction->setShortcut(tr("Ctrl + O"));
    //���ô��ļ���������ʾ��Ϣ
    fileOpenAction->setStatusTip(tr("��һ���ļ�"));
    //�������ļ��������źźͲ�
    connect(fileOpenAction, SIGNAL(triggered()), this, SLOT(fileOpenActionSlot()));
    fileCloseAction = new QAction(QIcon(tr("images/close.ico")), tr("�ر��ļ�"), this);
    fileCloseAction->setShortcut(tr("Ctrl + Q"));
    fileCloseAction->setStatusTip(tr("�ر�һ���ļ�"));
    connect(fileCloseAction, SIGNAL(triggered()), this, SLOT(fileCloseActionSlot()));
}
void fileMenu::createMenu()
{
    /************************************************************************
     * menuBar��һ�α�����ʱQMainWindow�����һ��QMenuBar�ڴ����ϣ��ҷ���һ��QMenu��ָ��
     * menuBar()->addMenu()������һ��QMenu�ҷ�������ָ��
     * QMenu����һ��QAction, �Ϳ��Զ��¼����з�Ӧ��
     * һ��QAction���Ա�����ط�ʹ��, ��Java��Actionһ��
     **************************************************************************/
    menu = this->menuBar()->addMenu(tr("�ļ�"));
    menu->addAction(fileOpenAction);
    menu->addAction(fileCloseAction);
}
void fileMenu::createContentMenu()
{
    this->addAction(fileOpenAction);
    this->addAction(fileCloseAction);
    //���������ʾ�����Ĳ˵�
    this->setContextMenuPolicy(Qt::ActionsContextMenu);
}
void fileMenu::fileOpenActionSlot()
{
    QMessageBox::warning(this, tr("��ʾ"), tr("������~���ļ�~�˵�"), QMessageBox::Yes | QMessageBox::No);
}
void fileMenu::fileCloseActionSlot()
{
    QMessageBox::warning(this, tr("��ʾ"), tr("������~�ر��ļ�~�˵�"), QMessageBox::Yes | QMessageBox::No);
}

