#include "MyGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyGUI w;
	w.setWindowTitle("HttpServer");
	w.show();
	return a.exec();
}
