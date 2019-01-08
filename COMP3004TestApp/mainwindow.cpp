#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_list1_clicked()
{
    std::string str = "Tree";
    QString qstr = QString::fromStdString(str);
    Dialog *dialog = new Dialog(qstr);
    dialog->show();
}

void MainWindow::on_list2_clicked()
{
    std::string str = "Cat";
    QString qstr = QString::fromStdString(str);
    Dialog *dialog = new Dialog(qstr);
    dialog->show();
}

void MainWindow::on_list3_clicked()
{
    std::string str = "Dog";
    QString qstr = QString::fromStdString(str);
    Dialog *dialog = new Dialog(qstr);
    dialog->show();
}
