#include "MyGUI.h"
#include <QFileDialog>
#include <iostream>
#include <cstring>
#include <cstdio>

using std::cout;
using std::endl;
using std::string;


/* 点击日志按钮后的处理 */
int MyGUI::onShowClicked4(bool checked)
{
	return 0;
}
/* 点击启动按钮后的处理 */
int MyGUI::onShowClicked5(bool checked)
{	
	// 如果复选框被选中
	if (ui.checkBox_1->isChecked()) {
		cout << "第一个输入区域：" << endl;
		// QString不能直接cout
		printf("第一个域名：%s\n", ui.domainField_1->text().toStdString().data());
		printf("第一个端口：%s\n", ui.port_1->text().toStdString().data());
		printf("第一个路径：%s\n", ui.path_1->text().toStdString().data());
	}
	/*
	判断有没有被选
	ui.checkBox_1->isChecked()
	ui.checkBox_2->isChecked()
	ui.checkBox_3->isChecked()
	三个域名：
	ui.domainField_1->text()
	ui.domainField_2->text()
	ui.domainField_3->text()
	三个端口
	ui.port_1->text()
	ui.port_2->text()
	ui.port_3->text()
	三个路径
	ui.path_1->text()
	ui.path_2->text()
	ui.path_3->text()
	QString如何转化string已经上面已经给出来了
	*/
	return 0;
}

MyGUI::MyGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(
		ui.btChooseFile_1,
		SIGNAL(clicked(bool)),
		this,
		SLOT(onShowClicked1(bool))
	);
	connect(
		ui.btChooseFile_2,
		SIGNAL(clicked(bool)),
		this,
		SLOT(onShowClicked2(bool))
	);
	connect(
		ui.btChooseFile_3,
		SIGNAL(clicked(bool)),
		this,
		SLOT(onShowClicked3(bool))
	);
	connect(
		ui.btStartUp,
		SIGNAL(clicked(bool)),
		this,
		SLOT(onShowClicked4(bool))
	);
	connect(
		ui.btCatalog,
		SIGNAL(clicked(bool)),
		this,
		SLOT(onShowClicked5(bool))
	);
}
inline QString MyGUI::getPath()
{
	// 文件夹选择器
	QString filePath = QFileDialog::getExistingDirectory(this, tr("Open Directory"));
	return filePath;
}
int MyGUI::onShowClicked1(bool checked) 
{
	ui.path_1->setText(getPath());
	return 0;
}
int MyGUI::onShowClicked2(bool checked)
{
	ui.path_2->setText(getPath());
	return 0;
}
int MyGUI::onShowClicked3(bool checked)
{
	ui.path_3->setText(getPath());
	return 0;
}
