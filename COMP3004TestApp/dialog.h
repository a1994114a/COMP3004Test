#ifndef DIALOG_H
#define DIALOG_H

#include <QtGui>
#include <QWidget>
#include <QDialog>

namespace Ui{
  class Dialog;
}
class Dialog: public QDialog{

public:
    Dialog(QString);
private:
    Ui::Dialog *ui;
    ~Dialog();

};

#endif // DIALOG_H
