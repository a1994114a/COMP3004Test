#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QPixmap>

Dialog::Dialog(QString button) :
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    if(button=="Tree"){
    ui->objectName->setText("Tree");
    ui->objectDescr->setText("This is a tree....");

    QPixmap pm(":tree-img.jpg"); // <- path to image file
    ui->objectImg->setPixmap(pm);
    ui->objectImg->setScaledContents(true);

    }if(button=="Cat"){
        ui->objectName->setText("Cat");
        ui->objectDescr->setText("This is a cat...");

        QPixmap pm(":cat-img.jpeg"); // <- path to image file
        ui->objectImg->setPixmap(pm);
        ui->objectImg->setScaledContents(true);

      }if(button=="Dog"){
    ui->objectName->setText("Dog");
    ui->objectDescr->setText("This is a dog...");

    QPixmap pm(":dog-img.jpeg"); // <- path to image file
    ui->objectImg->setPixmap(pm);
    ui->objectImg->setScaledContents(true);

   }
}

Dialog::~Dialog()
{
    delete ui;
}


