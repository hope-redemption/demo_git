#include "demo_git.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demo_git w;

    QPushButton b;//添加按钮对象
    b.setText("^_^");//给按钮添加内容
    b.setParent(&w);//方法一
    b.move(100,100);

    w.show();
    return a.exec();
}
