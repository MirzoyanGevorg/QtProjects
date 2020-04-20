#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QWidget>

namespace Ui {
    class RegWindow;
}

class RegWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = nullptr);
    ~RegWindow();
    QString getName() const;
    QString getPass() const;
    bool checkPass() const;

signals:
    void register_button_clicked();

private slots:
    void on_lineEditName_textEdited(const QString& name);
    void on_lineEditPass_textEdited(const QString& pass);
    void on_lineEditConfirm_textEdited(const QString& confirm);
    void on_pushButton_clicked();

private:
    Ui::RegWindow *ui;
    QString m_userName;
    QString m_userPass;
    QString m_confirm;
};

#endif // REGWINDOW_H
