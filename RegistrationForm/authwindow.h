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
    explicit AuthWindow(QWidget *parent = 0);
    ~AuthWindow();

private:
    Ui::AuthWindow *ui;
};

#endif // AUTHWINDOW_H
