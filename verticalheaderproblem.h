#ifndef VERTICALHEADERPROBLEM_H
#define VERTICALHEADERPROBLEM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class verticalHeaderProblem; }
QT_END_NAMESPACE

class verticalHeaderProblem : public QMainWindow
{
    Q_OBJECT

public:
    verticalHeaderProblem(QWidget *parent = nullptr);
    ~verticalHeaderProblem();

public:
    void showTable();



private slots:
    void on_btnExit_clicked();

private:
    Ui::verticalHeaderProblem *ui;
};
#endif // VERTICALHEADERPROBLEM_H
