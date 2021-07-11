#include "demo_git.h"
#include "ui_demo_git.h"

demo_git::demo_git(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::demo_git)
{
    ui->setupUi(this);
}

demo_git::~demo_git()
{
    delete ui;
}

