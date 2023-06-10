#include "addrowdialog.h"
#include "examplemodel.h"
#include "ui_addrowdialog.h"
#include <QMessageBox>
#include <QSpinBox>

addRowDialog::addRowDialog(QWidget *parent) : QDialog(parent), ui(new Ui::addRowDialog)
{
    ui->setupUi(this);
    QObject::connect(ui->okButton, SIGNAL(clicked()), this, SLOT(saveRow()));
    QObject::connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void addRowDialog::saveRow()
{
    newRow.push_back(ui->nameLine->text());
    newRow.push_back(ui->placeLine->text());
    newRow.push_back(ui->typeLine->text());
    newRow.push_back(ui->priceBox->text());
    newRow.push_back(ui->starsBox->text());
    newRow.push_back(ui->ratingBox->text());
    newRow.push_back(ui->cityLine->text());
    accept();
}

const QList<QVariant> &addRowDialog::getNewRow() { return newRow; }
addRowDialog::~addRowDialog() { delete ui; }