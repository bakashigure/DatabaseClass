#include "ex1.h"
#include <iomanip>



ex1::ex1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QString ex1::fileOpenAction()
{
	QFileDialog dlg(this, QString::fromLocal8Bit("请选择CSV文件"));
	dlg.resize(800, 400);
	dlg.setAcceptMode(QFileDialog::AcceptOpen);
	QString _name_filter = QString::fromLocal8Bit("学生数据文件 (*.csv);;ALL (*.*)");
	dlg.setNameFilter(_name_filter);
	dlg.exec();
	QStringList files = dlg.selectedFiles();
	ui.label_filename->setText(files[0]);

	readFile(&files[0]);

	return files[0];
}


void ex1::readFile(QString* path)
{
	// START  选择文件菜单栏
	std::string _path = path->toStdString();
	std::ifstream fp(_path);
	std::string line;
	std::getline(fp, line);
	std::istringstream readstr(line);
	// END


	std::string number;
	for (int i = 0; i < 12; i++)
	{
		std::getline(readstr, number, ',');
		lesson.push_back(number);
	}

	while (std::getline(fp, line))
	{
		StuInfo stu;
		std::istringstream readstr(line);
		for (int i = 0; i < 12; i++)
		{
			std::getline(readstr, number, ',');
			if (i == 0)
			{
				stu.name = number;
			}
			else if (i == 1)
			{
				stu.classname = number;
			}
			else if (i == 2)
			{
				stu.uid = atoi(number.c_str());
			}
			else
			{
				stu.score.push_back(atoi(number.c_str()));
				ui.output->setText(QString::fromStdString(number));



			}
		}		table.push_back(stu);
	}


	ui.output->clear();
	for (auto it = lesson.begin(); it != lesson.end(); it++)
	{
		std::string _text = *it + " ";
		ui.output->insertPlainText(QString::fromStdString(_text));
		ui.output->moveCursor(QTextCursor::End);
	}

	ui.output->insertPlainText("\n");

	for (auto it = table.begin(); it != table.end(); it++)
	{
		std::string _text = it->name + " " + it->classname + " " + std::to_string(it->uid);
		std::stringstream ss;
		ss << std::setw(8) << it->name << std::setw(5) << it->classname << it->uid;
		/* 
		for (auto it2 = it->score.begin(); it2 != it->score.end(); it2++)
		{
			ss << std::setw(5) << std::to_string(*it2);
			//	_text = _text +" "+std::to_string(*it2) ;
		}
		// _text += "\n";
		ss << std::endl;

		*/
		std::string _text2;
		ss >> _text2;
		QMessageBox box;
		box.setText(QString::fromStdString(_text2));
		box.exec();
		ui.output->insertPlainText(QString::fromStdString(_text2));
		ui.output->insertPlainText("\n");
	}






}