#include "QtGuiApplication4.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication4 w;
	w.show();
	int e = 44;
	return a.exec();
}
