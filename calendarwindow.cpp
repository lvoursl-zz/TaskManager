#include "calendarwindow.h"
#include "ui_calendarwindow.h"

CalendarWindow::CalendarWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalendarWindow)
{
    ui->setupUi(this);
}

CalendarWindow::~CalendarWindow()
{
    delete ui;
}

void CalendarWindow::on_calendarWidget_clicked(const QDate &date)
{
    emit newDate(date);
    emit calendarWidgetClicked();
}

void CalendarWindow::upd(const QDate date, QString description, QString time)
{
    qDebug() << date << description << time;
    QRect r1(100, 200, 11, 16);
    QPainter p;
    p.begin(this);
    p.drawText(100, 100, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    //p.end(this);
    //ui->calendarWidget->paintCell();
}
