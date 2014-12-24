#ifndef CALENDARWINDOW_H
#define CALENDARWINDOW_H

#include <QMainWindow>
#include <QDialogButtonBox>
#include <QDebug>
#include <QPainter>
#include "dialogwindow.h"

namespace Ui {
class CalendarWindow;
}

class CalendarWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalendarWindow(QWidget *parent = 0);
    ~CalendarWindow();
signals :
    void calendarWidgetClicked();
    void newDate(const QDate &date);
private slots:
    void on_calendarWidget_clicked(const QDate &date);
    void upd(const QDate date, QString description, QString time);
private:
    Ui::CalendarWindow *ui;
};

#endif // CALENDARWINDOW_H
