#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>

namespace Ui {
class Sudoku;
}

class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = 0);
    ~Sudoku();

private slots:
    void on_push_Exit_clicked();

    void on_push_Check_clicked();

    void on_push_NewGame_clicked();



private:
    Ui::Sudoku *ui;
};

#endif // SUDOKU_H
