#include "demo_git.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demo_git w;
    w.show();
    return a.exec();
}
