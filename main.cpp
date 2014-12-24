#include "calendarwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalendarWindow w;
    DialogWindow dw;
    w.showMaximized();
    QObject::connect(&dw, SIGNAL(dataWrited(QDate, QString, QString)),
                     &w, SLOT(upd(QDate, QString, QString)));
    QObject::connect(&w, SIGNAL(calendarWidgetClicked()), &dw, SLOT(show()));
    QObject::connect(&w, SIGNAL(newDate(QDate)), &dw, SLOT(setDate(QDate)));
    return a.exec();
}
