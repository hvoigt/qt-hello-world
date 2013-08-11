#include "mainwindow.h"
#include "ui_mainwindow.h"

static const char *status_waiting = "Waiting for input...";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    status = new QLabel(status_waiting);
    ui->statusBar->addWidget(status);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_helloButton_clicked()
{
    ui->outputBox->setText("Hallo World!");
    status->setText("Done.");
}

void MainWindow::on_actionReset_triggered()
{
    ui->outputBox->setText("");
    status->setText(status_waiting);
}
