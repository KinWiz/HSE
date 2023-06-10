#include "mainwindow.h"
#include "dialog.h"
#include "form.h"
#include "ui_mainwindow.h"
#include <QStyle>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_aboutButton_clicked()
{
    Dialog dialogWindow;
    dialogWindow.setModal(true);
    dialogWindow.exec();
}
void MainWindow::on_startButton_clicked() { table.show(); }