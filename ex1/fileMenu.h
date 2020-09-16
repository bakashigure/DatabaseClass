#pragma once
#ifndef fileMenu_H
#define fileMenu_H

#include <qmainwindow.h>
class QAction;
class QMenu;
class fileMenu :public QMainWindow
{
	Q_OBJECT
public:
	explicit fileMenu(QWidget* parent = 0);
signals:
public slots:
private slots:
	void fileOpenActionSlot();
	void fileCloseActionSlot();
private:
	void createAction();
	void createMenu();
	void createContentMenu();
private:
	QAction* fileOpenAction();
	QAction* fileCloseAction();
	QMenu* menu;
};

#endif // fileMenu_H

