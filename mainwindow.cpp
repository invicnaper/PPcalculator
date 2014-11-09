#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <string.h>
#include <QMessageBox>
#include <QSyntaxHighlighter>
#ifdef WIN32
    #include <Windows.h>
#endif
#include "types.h"
#include "tree.h"
#include "calc.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   // this->setFixedSize(this->size());

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn9_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 9", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn8_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 8", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn6_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 6", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}



void MainWindow::on_btn5_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 5", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn4_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 4", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn3_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 3", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn2_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 2", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn1_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 1", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btn0_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 0", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btnplus_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s +", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_btnequal_clicked()
{
    try{
        Types t;
        Pile pi;
        Cal cal;
        int t_result;
        int i = 0;
        double * d_result;
        char * ad_result;
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        char* text = bText.data();
        char * st;
        sprintf(sText, "%s =", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
        /* parse string */
        if(ui->actionPinversed->isChecked()){
            t_result = t.pInversed(text);
            sprintf(sText, "%s %d",sText, t_result);
        }

       // pi.drawPile(&pi.methode_inv);
        if(ui->actionAdvanced_2->isChecked()){
            /* parse the code */
            cal.createFile(text);
            cal.executeFile();
            ad_result = cal.readFile();
            cal.Clean();
            sprintf(sText, "%s %s",sText, ad_result);
        }
        if(ui->actionDefault->isChecked()){
            d_result = calc(text);
            sprintf(sText, "%s %lg",sText, *d_result);
        }
        //sprintf(st,"%lg",*d_result);
        ui->syntaxe_text->setText(sText);
        //ui->show_result->setText(st);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_syntaxe_text_textChanged(const QString &arg1)
{
    /* syntaxe highlight */
    QTextEdit * editor = new QTextEdit;
    QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
    const char* sText = bText.data();
    /* parse the string and re-write it using colors */
    QSyntaxHighlighter *  highlighter = NULL;
    //highlighter = new QSyntaxHighlighter(editor->document());

    /*
    while(sText != NULL){
        ui->syntaxe_text->setStyleSheet("QlineEdit#syntaxe_text{color:blue}");
    }
    */
}
void QSyntaxHighlighter::highlightBlock(const QString &text)
 {
     QTextCharFormat myClassFormat;
     myClassFormat.setFontWeight(QFont::Bold);
     myClassFormat.setForeground(Qt::darkMagenta);
     QString pattern = "\\bMy[A-Za-z]+\\b";

     QRegExp expression(pattern);
     int index = text.indexOf(expression);
     while (index >= 0) {
         int length = expression.matchedLength();
         setFormat(index, length, myClassFormat);
         index = text.indexOf(expression, index + length);
     }
 }

void MainWindow::on_btn7_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s 7", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
        /* add to list */
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        char* text = bText.data();
        if(text[strlen(text)-1] != '>')
            text[strlen(text)-1] = 0;
        QString result = text;
        ui->syntaxe_text->setText(text);
        /* delete from list */
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_18_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s *", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s -", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s /", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s )", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s (", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s sqrt", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    try{
        char sText[1024];
        QByteArray bText = ui->syntaxe_text->text().toLocal8Bit();
        const char* text = bText.data();
        sprintf(sText, "%s ^", text);
        QString result = sText;
        ui->syntaxe_text->setText(sText);
    }
    catch(const char* error){
        QMessageBox::critical(NULL,"Error",error);
        return ;
    }
}
