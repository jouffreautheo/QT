#include "dialoglogin.h"
#include "ui_dialoglogin.h"

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    connect(ui->pushButtonCancel,SIGNAL(clicked()),this,SLOT(clicSurAnnuler()));
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_pushButtonOk_clicked()
{
    if(ui->lineEditLogin->text()=="DUPOND" && ui->lineEditPassword->text()=="dudu")
    {
        //mémoriser le login
       leLogin=ui->lineEditLogin->text();

        accept();
    }
    else
    {
        ui->labelLogin->setStyleSheet("color:red");
    }

}

void DialogLogin::clicSurAnnuler()
{
    this->close();
}
