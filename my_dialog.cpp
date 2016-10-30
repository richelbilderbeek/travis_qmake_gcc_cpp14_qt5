#include "my_dialog.h"
#include "ui_my_dialog.h"
#include <QTimer>

my_dialog::my_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::my_dialog)
{
  ui->setupUi(this);
  QTimer * const timer(new QTimer(this));
  connect(
    timer,
    &QTimer::timeout,
    this,
    &my_dialog::close
  );
  timer->setInterval(1000);
  timer->start();
}

my_dialog::~my_dialog() noexcept
{
  delete ui;
}
