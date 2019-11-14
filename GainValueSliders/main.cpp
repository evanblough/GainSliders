#include "mainwindow.h"
#include "sliderlayout.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SliderLayout* sl = new SliderLayout("Howdy", "1", "2", &w);
    QWidget* yaboi = new QWidget();
    yaboi->setLayout(sl->getLayout());
    w.setCentralWidget(yaboi);
    w.show();

    return a.exec();
}
