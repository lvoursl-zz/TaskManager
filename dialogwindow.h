#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDate>

namespace Ui {
class DialogWindow;
}

class DialogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWindow(QWidget *parent = 0);
    ~DialogWindow();
signals:
    void dataWrited(const QDate date, QString description, QString time);
private slots:
    void on_cancelButton_clicked();
    void on_okButton_clicked();
    void setDate(const QDate &date);
private:
    Ui::DialogWindow *ui;
    QDate date;
};

#endif // DIALOGWINDOW_H
