/********************************************************************************
** Form generated from reading UI file 'verticalheaderproblem.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTICALHEADERPROBLEM_H
#define UI_VERTICALHEADERPROBLEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_verticalHeaderProblem
{
public:
    QWidget *centralwidget;
    QTableView *nutrientsView;
    QPushButton *btnExit;
    QLabel *lblVersion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *verticalHeaderProblem)
    {
        if (verticalHeaderProblem->objectName().isEmpty())
            verticalHeaderProblem->setObjectName("verticalHeaderProblem");
        verticalHeaderProblem->resize(520, 418);
        centralwidget = new QWidget(verticalHeaderProblem);
        centralwidget->setObjectName("centralwidget");
        nutrientsView = new QTableView(centralwidget);
        nutrientsView->setObjectName("nutrientsView");
        nutrientsView->setGeometry(QRect(60, 40, 400, 215));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nutrientsView->sizePolicy().hasHeightForWidth());
        nutrientsView->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        nutrientsView->setFont(font);
        nutrientsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        nutrientsView->setAutoFillBackground(true);
        nutrientsView->setLineWidth(5);
        nutrientsView->setMidLineWidth(3);
        nutrientsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nutrientsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nutrientsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        nutrientsView->setSelectionMode(QAbstractItemView::MultiSelection);
        nutrientsView->setSelectionBehavior(QAbstractItemView::SelectRows);
        nutrientsView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        nutrientsView->setShowGrid(false);
        nutrientsView->setGridStyle(Qt::SolidLine);
        nutrientsView->setSortingEnabled(false);
        nutrientsView->setCornerButtonEnabled(false);
        nutrientsView->horizontalHeader()->setMinimumSectionSize(15);
        nutrientsView->horizontalHeader()->setDefaultSectionSize(66);
        nutrientsView->horizontalHeader()->setStretchLastSection(true);
        nutrientsView->verticalHeader()->setVisible(false);
        nutrientsView->verticalHeader()->setDefaultSectionSize(27);
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(70, 310, 92, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 212, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(218, 218, 218, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        QBrush brush8(QColor(38, 38, 38, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        QBrush brush9(QColor(24, 27, 29, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        QBrush brush10(QColor(37, 41, 44, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        QBrush brush11(QColor(31, 31, 31, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        QBrush brush12(QColor(175, 175, 175, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        QBrush brush13(QColor(255, 51, 51, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        QBrush brush14(QColor(38, 39, 40, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush15(QColor(118, 118, 118, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        QBrush brush16(QColor(17, 17, 17, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush17(QColor(177, 177, 177, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnExit->setPalette(palette);
        lblVersion = new QLabel(centralwidget);
        lblVersion->setObjectName("lblVersion");
        lblVersion->setGeometry(QRect(220, 10, 90, 23));
        lblVersion->setAlignment(Qt::AlignCenter);
        verticalHeaderProblem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(verticalHeaderProblem);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 520, 27));
        verticalHeaderProblem->setMenuBar(menubar);
        statusbar = new QStatusBar(verticalHeaderProblem);
        statusbar->setObjectName("statusbar");
        verticalHeaderProblem->setStatusBar(statusbar);

        retranslateUi(verticalHeaderProblem);

        QMetaObject::connectSlotsByName(verticalHeaderProblem);
    } // setupUi

    void retranslateUi(QMainWindow *verticalHeaderProblem)
    {
        verticalHeaderProblem->setWindowTitle(QCoreApplication::translate("verticalHeaderProblem", "verticalHeaderProblem", nullptr));
        btnExit->setText(QCoreApplication::translate("verticalHeaderProblem", "Exit", nullptr));
        lblVersion->setText(QCoreApplication::translate("verticalHeaderProblem", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class verticalHeaderProblem: public Ui_verticalHeaderProblem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTICALHEADERPROBLEM_H
