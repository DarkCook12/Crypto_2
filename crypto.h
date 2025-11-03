#ifndef CRYPTO_H
#define CRYPTO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class crypto;
}
QT_END_NAMESPACE

class crypto : public QMainWindow
{
    Q_OBJECT

public:
    crypto(QWidget *parent = nullptr);
    ~crypto();

private:
    Ui::crypto *ui;
};
#endif // CRYPTO_H
