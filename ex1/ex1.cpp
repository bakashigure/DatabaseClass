#include "ex1.h"
#include <iomanip>




ex1::ex1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("¬��ΰţ��"));
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
	// END


	std::string number;
	for (int i = 0; i < 15; i++)
	{
		std::getline(readstr, number, ',');
		lesson.push_back(number);
	}

	while (std::getline(fp, line))
	{
		StuInfo stu;
		std::istringstream readstr(line);
		for (int i = 0; i < 15; i++)
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
	auto it = lesson.begin();
	std::stringstream ts; //title string stream �����༶�Լ��γ������ַ���
	ts << "x" <<std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(10) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	for (; it != lesson.end(); it++)
	{
		ts << std::left << std::setw(8) << std::setfill('x') << *it;

	}
	ts << std::endl;
	std::string _text;
	ts >> _text;
	ui.output->insertPlainText(QString::fromStdString(_text));
	ui.output->moveCursor(QTextCursor::End);
	//ui.label_title->setText(QString::fromStdString(_text));
	ui.output->insertPlainText("\n");

	for (auto it = table.begin(); it != table.end(); it++)
	{
		std::string _text = it->name + " " + it->classname + " " + std::to_string(it->uid);
		std::stringstream ss;
		ss << std::left << std::setw(12) << std::setfill('x') << it->name << std::setw(8) << std::setfill('x') <<
			it->classname << std::setw(8) << std::setfill('x') << it->uid;


		for (auto it2 = it->score.begin(); it2 != it->score.end(); it2++)
		{
			ss << std::setw(6) << std::right << std::setfill('x') << std::to_string(*it2);
			//	_text = _text +" "+std::to_string(*it2) ;
		}
		// _text += "\n";
		ss << std::endl;


		std::string _text2;
		ss >> _text2;
		/*
		QMessageBox box;
		box.setText(QString::fromStdString(_text2));
		box.exec();
		*/
		ui.output->insertPlainText(QString::fromStdString(_text2));
		ui.output->insertPlainText("\n");



	}

	QTextCursor search;
	QTextDocument* doc = ui.output->document();
	QString search_text = "x";
	QTextCursor searchCursor(doc);
	QTextCursor cursor1(doc);
	cursor1.beginEditBlock();

	searchCursor = doc->find(search_text, searchCursor);
	while (!searchCursor.isNull() && !searchCursor.atEnd())
	{
		searchCursor.deleteChar();
		searchCursor.insertText(" ");
		searchCursor = doc->find(search_text, searchCursor);
	}
}

void ex1::averageScoreSingle()
{
	
	QString name_or_id = ui.text_name_or_num->toPlainText();
	std::string _content = name_or_id.toStdString();
	ui.output->setText(name_or_id);
}