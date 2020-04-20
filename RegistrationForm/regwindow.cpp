#include "regwindow.h"
#include "ui_regwindow.h"

RegWindow::RegWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegWindow)
{
    ui->setupUi(this);
}

RegWindow::~RegWindow()
{
    delete ui;
}

QString RegWindow::getName() const
{
    return m_userName;
}

QString RegWindow::getPass() const
{
    return m_userPass;
}

bool RegWindow::checkPass() const
{
    return m_confirm == m_userPass;
}

void RegWindow::on_lineEditName_textEdited(const QString& name)
{
    m_userName = name;
}

void RegWindow::on_lineEditPass_textEdited(const QString& pass)
{
    m_userPass = pass;
}

void RegWindow::on_lineEditConfirm_textEdited(const QString& confirm)
{
    m_confirm = confirm;
}

void RegWindow::on_pushButton_clicked()
{
    emit register_button_clicked();
}
