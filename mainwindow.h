#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLineEdit>
//#include "highlighter.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_btn9_clicked();

    void on_btn8_clicked();

    void on_btn6_clicked();

    void on_btn5_clicked();

    void on_btn4_clicked();

    void on_btn3_clicked();

    void on_btn2_clicked();

    void on_btn1_clicked();

    void on_btn0_clicked();

    void on_btnplus_clicked();

    void on_btnequal_clicked();

    void on_syntaxe_text_textChanged(const QString &arg1);

    void on_btn7_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_16_clicked();

private:
    Ui::MainWindow *ui;
};
//Highlighter * highlighter;

#endif // MAINWINDOW_H
