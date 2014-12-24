#include "dialogwindow.h"
#include "ui_dialogwindow.h"

DialogWindow::DialogWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogWindow)
{
    ui->setupUi(this);
}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::on_okButton_clicked()
{

    if (ui->descrition_edit->toPlainText() != "") {
        //diresctory :/data.txt it isnt work.
        QFile dataFile("../data.txt");
        QTextStream out(&dataFile);
        if (dataFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QString description = ui->descrition_edit->toPlainText();
            QString time = ui->time_edit->toPlainText();
            QString date = this->date.toString("dd.MM.yyyy");

            out << "description: " << description << "; time:" << time << ";" << " date: " << date << ";" << endl;

            dataFile.close();
            ui->descrition_edit->clear();
            ui->time_edit->clear();
            // receive event about update! + description, time, this->date
            emit dataWrited(this->date, description, time);
        }
    }
    this->close();
}

void DialogWindow::on_cancelButton_clicked()
{
    this->close();
}

void DialogWindow::setDate(const QDate &date) {
    this->date = date;
}
