#include "crypto.h"
#include "ui_crypto.h"

crypto::crypto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::crypto)
{
    ui->setupUi(this);
}

crypto::~crypto()
{
    delete ui;
}
