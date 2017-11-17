#include "mainwindow.h"
#include <QApplication>
#include "dialoglogin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    DialogLogin monDialogDeLogin;
    if(monDialogDeLogin.exec()==QDialog::Accepted)
    {
        MainWindow w(&monDialogDeLogin);
        w.show();
        return a.exec();
    }
    else
    {
        return -124;
    }
}
