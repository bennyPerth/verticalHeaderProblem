#include "verticalheaderproblem.h"
#include "ui_verticalheaderproblem.h"

#include <QStandardItemModel>
#include <QTableView>


QString version = "a02";

// 2 October 2022 (a02)
// added foreground colours to show that they are working correctly

// 1 October 2022 (a01)
// initial code



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
    int maxRows = 7;

    QPushButton *aButton;
    QPushButton *bButton;

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

    QString foodName;
    int bRed, bGreen, bBlue;
    int fRed, fGreen, fBlue;

    // main loop for showing each row
    for (int eatenRows = 0; eatenRows < maxRows; eatenRows++ ) {
      bRed = 255; bGreen = 255; bBlue = 255;
      fRed = 0; fGreen = 0; fBlue = 0;
      if (eatenRows == 0) {
        foodName = "black tea";
        bRed = 255; bGreen = 0; bBlue = 0;
        fRed = 0; fGreen = 0; fBlue = 32;
        }
      if (eatenRows == 1) {
        foodName = "bananas";
        bRed = 255; bGreen = 255; bBlue = 0;
        fRed = 0; fGreen = 128; fBlue = 255;
        }
      if (eatenRows == 2) {
        foodName = "soy drink";
        bRed = 0; bGreen = 255; bBlue = 0;
        fRed = 255; fGreen = 0; fBlue = 255;
        }
      if (eatenRows == 3) {
        foodName = "Vegemite";
        bRed = 0; bGreen = 0; bBlue = 255;
        fRed = 128; fGreen = 128; fBlue = 32;
        }
      if (eatenRows == 4) {
        foodName = "Pavlova";
        bRed = 255; bGreen = 0; bBlue = 255;
        fRed = 0; fGreen = 255; fBlue = 0;
        }
      if (eatenRows == 5) {
        foodName = "yoghurt";
        bRed = 128; bGreen = 0; bBlue = 255;
        fRed = 0; fGreen = 128; fBlue = 0;
        }
      if (eatenRows == 6) {
        foodName = "butternut pumpkin";
        bRed = 128; bGreen = 255; bBlue = 0;
        fRed = 128; fGreen = 0; fBlue = 255;
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
