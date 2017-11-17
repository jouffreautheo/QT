#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(DialogLogin * monDialogDeLogin,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DialogLogin *leTitle=monDialogDeLogin;
    setWindowTitle(leTitle->leLogin);

}

MainWindow::~MainWindow()
{
    delete ui;
}
