#include "authwindow.h"
#include "ui_authwindow.h"

AuthWindow::AuthWindow(QWidget *parent)
    :   QWidget(parent)
    ,   ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
}

AuthWindow::~AuthWindow() {
    delete ui;
}

QString AuthWindow::getLogin() const
{
    return m_userName;
}

QString AuthWindow::getPass() const
{
    return m_userPass;
}

void AuthWindow::on_lineEditName_textEdited(const QString& name)
{
    m_userName = name;
}

void AuthWindow::on_lineEditPasword_textEdited(const QString& pass)
{
    m_userPass = pass;
}

void AuthWindow::on_pushButtonLogin_clicked()
{
    emit login_button_clicked();
}

void AuthWindow::on_pushButtonRegister_clicked()
{
    emit register_button_clicked();
}
