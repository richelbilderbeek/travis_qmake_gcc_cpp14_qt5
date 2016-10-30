#ifndef MY_DIALOG_H
#define MY_DIALOG_H

#include <QDialog>

namespace Ui {
  class my_dialog;
}

class my_dialog : public QDialog
{
  Q_OBJECT

public:
  explicit my_dialog(QWidget *parent = 0);
  ~my_dialog() noexcept;

private:
  Ui::my_dialog *ui;
};

#endif // MY_DIALOG_H
