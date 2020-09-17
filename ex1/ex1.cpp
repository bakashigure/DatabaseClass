#include "ex1.h"



ex1::ex1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QString ex1::fileOpenAction()
{
	QFileDialog dlg(this, QString::fromLocal8Bit("��ѡ��CSV�ļ�"));
	dlg.resize(800, 400);
	dlg.setAcceptMode(QFileDialog::AcceptOpen);
	QString _name_filter = QString::fromLocal8Bit("ѧ�������ļ� (*.csv);;ALL (*.*)");
	dlg.setNameFilter(_name_filter);
	dlg.exec();
	QStringList files = dlg.selectedFiles();
	ui.label_filename->setText(files[0]);

	readFile(&files[0]);

	return files[0];
}


void ex1::readFile(QString* path)
{	
	// START  ѡ���ļ��˵���
	std::string _path = path->toStdString();
	std::ifstream fp(_path);
	std::string line;
	std::getline(fp, line);
	std::istringstream readstr(line);
	QString _text = QString::fromStdString(line);
	// END

	StuInfo stu;
	table.push_back(stu);
	std::string number;
	for (int i = 0; i < 12; i++)
	{
		std::getline(readstr, number, ',');
		lesson.push_back(number);
	}


	ui.output->setText(_text);



}