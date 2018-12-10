#include "MyGUI.h"
#include <QFileDialog>
#include <iostream>
#include <cstring>
#include <cstdio>

using std::cout;
using std::endl;
using std::string;


/* �����־��ť��Ĵ��� */
int MyGUI::onShowClicked4(bool checked)
{
	return 0;
}
/* ���������ť��Ĵ��� */
int MyGUI::onShowClicked5(bool checked)
{	
	// �����ѡ��ѡ��
	if (ui.checkBox_1->isChecked()) {
		cout << "��һ����������" << endl;
		// QString����ֱ��cout
		printf("��һ��������%s\n", ui.domainField_1->text().toStdString().data());
		printf("��һ���˿ڣ�%s\n", ui.port_1->text().toStdString().data());
		printf("��һ��·����%s\n", ui.path_1->text().toStdString().data());
	}
	/*
	�ж���û�б�ѡ
	ui.checkBox_1->isChecked()
	ui.checkBox_2->isChecked()
	ui.checkBox_3->isChecked()
	����������
	ui.domainField_1->text()
	ui.domainField_2->text()
	ui.domainField_3->text()
	�����˿�
	ui.port_1->text()
	ui.port_2->text()
	ui.port_3->text()
	����·��
	ui.path_1->text()
	ui.path_2->text()
	ui.path_3->text()
	QString���ת��string�Ѿ������Ѿ���������
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
	// �ļ���ѡ����
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
