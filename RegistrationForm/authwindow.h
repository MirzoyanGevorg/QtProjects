#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QWidget>

namespace Ui {
    class AuthWindow;
}

class AuthWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();
    QString getLogin() const;
    QString getPass() const;

signals:
    void login_button_clicked();
    void register_button_clicked();

private slots:
    void on_lineEditName_textEdited(const QString& name);
    void on_lineEditPasword_textEdited(const QString& pass);
    void on_pushButtonLogin_clicked();
    void on_pushButtonRegister_clicked();

private:
    Ui::AuthWindow *ui;
    QString m_userName;
    QString m_userPass;
};

#endif // AUTHWINDOW_H
