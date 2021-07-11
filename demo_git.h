#ifndef DEMO_GIT_H
#define DEMO_GIT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class demo_git; }
QT_END_NAMESPACE

class demo_git : public QWidget
{
    Q_OBJECT

public:
    demo_git(QWidget *parent = nullptr);
    ~demo_git();

private:
    Ui::demo_git *ui;
};
#endif // DEMO_GIT_H
