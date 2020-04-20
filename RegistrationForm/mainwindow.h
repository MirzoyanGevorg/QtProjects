#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QtSql>
#include "authwindow.h"
#include "regwindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();
    void connectDB();

private:
    Ui::MainWindow* m_ui;

    AuthWindow m_authUi;
    RegWindow m_regUi;

    QString m_userName;
    QString m_userPass;
    QString m_dbInput;

    QSqlDatabase m_db;

    int m_userCounter;
    bool m_loginSucces;

private slots:
    void registerUser();
    void authorizeUser();
    void registerUserShow();
};

#endif // MAINWINDOW_H
