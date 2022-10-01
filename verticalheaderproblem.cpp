#include "verticalheaderproblem.h"
#include "ui_verticalheaderproblem.h"

//#include <QtGlobal>
#include <QStandardItemModel>
#include <QTableView>


QFont boldFont11("Comic Sans MS" , 11 , QFont::Bold );


verticalHeaderProblem::verticalHeaderProblem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::verticalHeaderProblem) {
    ui->setupUi(this);
    QString version = "";
    ui->lblVersion->setText(version + "Qt "+QT_VERSION_STR);

    showTable();

}

verticalHeaderProblem::~verticalHeaderProblem() {
    delete ui;
}


void verticalHeaderProblem::showTable() {
    int maxRows = 7; int eatenRows = 0;
    int bRed = 100; int bGreen = 125; int bBlue = 200;
    int fRed = 32; int fGreen = 32; int fBlue = 32;

    QPushButton *aButton;
    QPushButton *bButton;
    QString styleSheet;
    QString aString;

    QStringList verticalHeaderLabels;
    verticalHeaderLabels.clear();
    QStringList horizontalHeaderLabels;
    horizontalHeaderLabels << "Size" << "Cost" ;

    // Attach a model to the view
    QStandardItemModel *detailsModel;
    detailsModel = new QStandardItemModel(maxRows, 2, this);
    ui->nutrientsView->setModel(detailsModel);
    // set the horizontal column labels
    detailsModel->setHorizontalHeaderLabels(horizontalHeaderLabels);
    ui->nutrientsView->verticalHeader()->setVisible(true);

    QString foodName    = "black tea";

    // main loop for showing each row
    for (eatenRows = 0; eatenRows < maxRows; eatenRows++ ) {
      if (eatenRows == 1) {
        foodName = "bananas";
        bRed = 255; bGreen = 0; bBlue = 0;
        }
      if (eatenRows == 2) {
        foodName = "soy drink";
        bRed = 0; bGreen = 255; bBlue = 0;
        }
      if (eatenRows == 3) {
        foodName = "Vegemite";
        bRed = 0; bGreen = 0; bBlue = 255;
        }
      if (eatenRows == 4) {
        foodName = "Pavlova";
        bRed = 255; bGreen = 0; bBlue = 255;
        }
      if (eatenRows == 5) {
        foodName = "yoghurt";
        bRed = 128; bGreen = 0; bBlue = 255;
        }
      if (eatenRows == 6) {
        foodName = "butternut pumpkin";
        bRed = 128; bGreen = 255; bBlue = 0;
        }

      int foodSize    = 150 - eatenRows*2;
      double cost = 0.52f + eatenRows*2;

      QString strCost;
      strCost = "$" + QString::number(cost, 'f', 2);

      aButton =  new QPushButton();
      aButton->setFont(boldFont11);
      aButton->setText(QString::number(foodSize));

      bButton =  new QPushButton();
      bButton->setFont(boldFont11);
      bButton->setText(strCost);

      ui->nutrientsView->setIndexWidget(ui->nutrientsView->model()->index(eatenRows, 0), aButton);  // size column
      ui->nutrientsView->setIndexWidget(ui->nutrientsView->model()->index(eatenRows, 1), bButton);  // cost column

      verticalHeaderLabels << foodName ;

      QStandardItem *vHeaderItem = new QStandardItem("");
      vHeaderItem->setBackground(QColor(bRed, bGreen, bBlue));
      vHeaderItem->setForeground(QColor(fRed, fGreen, fBlue));

      detailsModel->setVerticalHeaderItem(eatenRows,vHeaderItem);

      }  // end of showing a row

    detailsModel->setVerticalHeaderLabels(verticalHeaderLabels);

}  // end of showTable

void verticalHeaderProblem::on_btnExit_clicked() {
  close();
}

