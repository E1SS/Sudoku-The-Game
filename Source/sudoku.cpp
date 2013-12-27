#include "sudoku.h"
#include "ui_sudoku.h"

Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{

    ui->setupUi(this);

}

Sudoku::~Sudoku()
{
    delete ui;
}

void Sudoku::on_push_Exit_clicked()
{
   Sudoku::close();
}

void Sudoku::on_push_Check_clicked()
{

        ui->textEdit_0->setText(QString::number(1));


}

void Sudoku::on_push_NewGame_clicked()
{

}
