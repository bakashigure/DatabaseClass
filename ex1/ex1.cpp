#include "ex1.h"


#pragma execution_character_set("UTF-8")

ex1::ex1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromStdString("简易学生成绩管理系统"));
	QMessageBox box;
	box.setText("程序使用说明");
	box.exec();
}

void ex1::fileOpenAction()
{
	QFileDialog dlg(this, QString::fromStdString("请选择CSV文件"));
	dlg.resize(800, 400);
	dlg.setAcceptMode(QFileDialog::AcceptOpen);
	QString _name_filter = QString::fromStdString("学生数据文件 (*.csv);;ALL (*.*)");
	dlg.setNameFilter(_name_filter);
	dlg.exec();
	QStringList files = dlg.selectedFiles();
	if (!files.isEmpty())
	{
		ui.label_filename->setText(files[0]);
		file_path = files[0].toStdString();
	}


	readFile();


}


void ex1::readFile()
{
	start_time = clock();


	ui.output->clear();
	// START  选择文件菜单栏
	std::ifstream fp(file_path);
	std::string line;
	std::getline(fp, line);
	std::istringstream readstr(line);
	// END


	std::string number;
	if (lesson.size() == 0)
		for (int i = 0; i < 15; i++)
		{
			std::getline(readstr, number, ',');
			lesson.push_back(number);
		}

	if (table.size() == 0)
	{
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
				}
			}		table.push_back(stu);
		}
	}

	ui.output->clear();
	auto it = lesson.begin();
	std::stringstream ts; //title string stream 姓名班级以及课程名的字符流
	ts << "x" << std::left << std::setw(14) << std::setfill('x') << *it;
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
		}
		ss << std::endl;
		std::string _text2;
		ss >> _text2;
		ui.output->insertPlainText(QString::fromStdString(_text2));
		ui.output->insertPlainText("\n");
	}
	replaceOutput();


	end_time = clock();

	long used_time = end_time - start_time;
	std::string _used_time = "读取完成 耗时 " + std::to_string(used_time) + " ms";
	ui.label_used_time->setText(QString::fromStdString(_used_time));
}

void ex1::averageScoreSingle()
{
	start_time = clock();

	QString name_or_id = ui.text_name_or_num->toPlainText();
	std::string _content = name_or_id.toStdString();
	bool flag_num = isNum(&_content);
	bool flag_isFind = false;
	std::string test;

	int cnt = 0;
	int score_all = 0;
	std::stringstream ss;

	auto it = lesson.begin();
	std::stringstream ts; //title string stream 姓名班级以及课程名的字符流
	ts << "x" << std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(10) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	std::string ave_score_zh = "均分";
	ts << std::left << std::setw(14) << std::setfill('x') << ave_score_zh;
	ts << std::endl;

	for (auto it = table.begin(); it != table.end(); it++)
	{
		if (flag_num)
		{
			if (std::to_string(it->uid) == _content)
			{
				ss << std::left << std::setw(12) << std::setfill('x') << it->name << std::setw(8) << std::setfill('x') <<
					it->classname << std::setw(8) << std::setfill('x') << it->uid;
				flag_isFind = !flag_isFind;
				for (auto it_score = it->score.begin(); it_score != it->score.end(); it_score++)
					if (*it_score != 0)
					{
						score_all += *it_score;
						cnt++;
					}
				break;
			}
		}
		else
		{
			if (it->name == _content)
			{
				ss << std::left << std::setw(12) << std::setfill('x') << it->name << std::setw(8) << std::setfill('x') <<
					it->classname << std::setw(8) << std::setfill('x') << it->uid;
				flag_isFind = !flag_isFind;
				for (auto it_score = it->score.begin(); it_score != it->score.end(); it_score++)
					if (*it_score != 0)
					{
						score_all += *it_score;
						cnt++;
					}
				break;
			}

		}
	}

	ui.output->clear();
	if (flag_isFind)
	{

		double ave_score = double(score_all) / double(cnt);
		ss << std::right << std::setw(10) << std::setfill('x') << ave_score;
		std::string _text;
		ss >> _text;

		std::string _text2;
		ts >> _text2;
		ui.output->setText(QString::fromStdString(_text2));
		ui.output->append(QString::fromStdString(_text));

		replaceOutput();

	}
	else
		ui.output->setText("未找到该生，请重试");

	end_time = clock();

	long used_time = end_time - start_time;
	std::string _used_time = "耗时 " + std::to_string(used_time) + " ms";
	ui.label_used_time->setText(QString::fromStdString(_used_time));

	//ui.output->clear();

}

void ex1::averageScoreAll()
{

	start_time = clock();

	ui.output->clear();
	std::stringstream ss;
	std::string _text;
	std::string _text2;

	int score_all = 0;
	double score_average;
	int cnt = 0;
	auto it = lesson.begin();
	std::stringstream ts; //title string stream 姓名班级以及课程名的字符流
	ts << "x" << std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(10) << std::setfill('x') << *it;
	it++;
	ts << std::left << std::setw(14) << std::setfill('x') << *it;
	it++;
	std::string ave_score_zh = "均分";
	ts << std::left << std::setw(14) << std::setfill('x') << ave_score_zh;
	ts << std::endl;



	ts >> _text2;

	ui.output->append(QString::fromStdString(_text2));


	for (auto it = table.begin(); it != table.end(); it++)
	{
		score_all = 0;
		cnt = 0;
		ss << std::left << std::setw(12) << std::setfill('x') << it->name << std::setw(8) << std::setfill('x') <<
			it->classname << std::setw(8) << std::setfill('x') << it->uid;
		for (auto it2 = it->score.begin(); it2 != it->score.end(); it2++)
		{
			if (*it2 != 0)
			{
				cnt++;
				score_all += *it2;
			}
		}
		if (cnt != 0)
		{
			score_average = double(score_all) / double(cnt);
			ss << std::right << std::setw(10) << std::setfill('x') << score_average;
			ss << std::endl;
			ss >> _text;
			ui.output->append(QString::fromStdString(_text));
		}
	}
	replaceOutput();

	end_time = clock();

	long used_time = end_time - start_time;
	std::string _used_time = "读取完成 耗时 " + std::to_string(used_time) + " ms";
	ui.label_used_time->setText(QString::fromStdString(_used_time));

}

void ex1::replaceOutput()
{
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
	cursor1.endEditBlock();
	cursor1.movePosition(QTextCursor::Start);
	ui.output->setTextCursor(cursor1);
}

bool ex1::isNum(std::string* str)
{
	std::stringstream sin(*str);
	double t;
	if (!(sin >> t))
		return false;
	else
		return true;

}
