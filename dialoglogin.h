#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    QString leLogin;
    ~DialogLogin();

private slots:
    void on_pushButtonOk_clicked();

    void clicSurAnnuler();

private:
    Ui::DialogLogin *ui;
};

#endif // DIALOGLOGIN_H
