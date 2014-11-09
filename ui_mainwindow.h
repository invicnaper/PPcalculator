/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Nov 9 00:51:24 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionP_Inversed;
    QAction *actionAdvanced;
    QAction *actionPinversed;
    QAction *actionAdvanced_2;
    QAction *actionDefault;
    QWidget *centralWidget;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btn7;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn0;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *btnplus;
    QPushButton *pushButton_21;
    QPushButton *btnequal;
    QPushButton *pushButton_23;
    QLineEdit *syntaxe_text;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QPushButton *adavnced_mode;
    QLabel *show_result;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuAbout;
    QMenu *menuTypes;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(463, 334);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../Users/Naper/Desktop/naper/debian_metal_wallpaper_hd.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("/*\n"
" * The MIT License (MIT)\n"
" *\n"
" * Copyright (c) <2013-2014> <Colin Duquesnoy>\n"
" *\n"
" * Permission is hereby granted, free of charge, to any person obtaining a copy\n"
" * of this software and associated documentation files (the \"Software\"), to deal\n"
" * in the Software without restriction, including without limitation the rights\n"
" * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
" * copies of the Software, and to permit persons to whom the Software is\n"
" * furnished to do so, subject to the following conditions:\n"
"\n"
" * The above copyright notice and this permission notice shall be included in\n"
" * all copies or substantial portions of the Software.\n"
"\n"
" * THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
" * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
" * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
" * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY"
                        " CLAIM, DAMAGES OR OTHER\n"
" * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
" * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\n"
" * THE SOFTWARE.\n"
" */\n"
"\n"
"QProgressBar:horizontal {\n"
"    border: 1px solid #3A3939;\n"
"    text-align: center;\n"
"    padding: 1px;\n"
"    background: #201F1F;\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"    background-color: qlineargradient(spread:reflect, x1:1, y1:0.545, x2:1, y2:0, stop:0 rgba(28, 66, 111, 255), stop:1 rgba(37, 87, 146, 255));\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"    border: 1px solid #3A3939;\n"
"    background-color: rgb(90, 102, 117);;\n"
"    color: white;\n"
"    padding: 1px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: silver;\n"
"    background-color: #302F2F;\n"
"    selection-background-color:#78879b;\n"
"    selection-color: black;\n"
"    background-clip: border;\n"
"    border-image: none;\n"
"    outline: 0;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
""
                        "    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"    stop: 0 #78879b, stop: 1 #78879b);\n"
"    color: black;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"    stop: 0 #78879b, stop: 1 #78879b);\n"
"}\n"
"\n"
"QMenuBar\n"
"{\n"
"    background-color: #302F2F;\n"
"    color: silver;\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #3A3939;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    border: 1px solid #3A3939;\n"
"    background-color: #78879b;\n"
"    color: black;\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #3A3939;\n"
"    color: silver;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QMenu::icon\n"
"{\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 5px 30px 5px 30px;\n"
"    margin-left: 5px;\n"
"    border: 1px"
                        " solid transparent; /* reserve space for selection border */\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: black;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #302F2F;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    alternate-background-color: #3A3939;\n"
"    color: silver;\n"
"    border: 1px solid 3A3939;\n"
"    border-radius: 3px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QWidget:focus, QMenuBar:focus\n"
"{\n"
"    border: 1px solid rgba(48, 86, 111);\n"
"}\n"
"\n"
"QTabWidget:focus, QCheckBox:focus, QRadioButton:focus\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #201F1F;\n"
"    padding: 2px;\n"
"    border-style: solid;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 3px;\n"
"    color: silver;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border:1px solid #3A3939;\n"
"    border-radius: 7px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top "
                        "center;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"}\n"
"\n"
"QAbstractScrollArea\n"
"{\n"
"    border-radius: 3px;\n"
"    border: 1px solid #3A3939;\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"    height: 15px;\n"
"    margin: 0px 11px 0px 11px;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 6px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 1, x2: 0, y2: 0,\n"
"    stop: 0 #302F2F, stop: 1 #484846);\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 1, x2: 0, y2: 0,\n"
"    stop: 0 #605F5F, stop: 1 #787876);\n"
"    min-width: 5px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    border-image: url(:/qss_icons/rc/right_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    border-image: url(:/qss_icons/rc/left_arrow_disabled.png);\n"
"   "
                        " height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal:hover,QScrollBar::sub-line:horizontal:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/right_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal:hover, QScrollBar::add-line:horizontal:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/left_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: QLinearGradient( x1: 1, y1: 0, x2: 0, y2: 0,\n"
"    stop: 0 #302F2F, stop: 1 #4848"
                        "46);\n"
"    width: 15px;\n"
"    margin: 11px 0 11px 0;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: QLinearGradient( x1: 1, y1: 0, x2: 0, y2: 0,\n"
"    stop: 0 #605F5F, stop: 1 #787876);\n"
"    min-height: 5px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border-image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"\n"
"    border-image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover,QScrollBar::sub-line:vertical:on\n"
"{\n"
"\n"
"    border-image: url(:/qss_icons/rc/up_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: "
                        "top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical:hover, QScrollBar::add-line:vertical:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/down_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #201F1F;\n"
"    color: silver;\n"
"    border: 1px solid #3A3939;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #201F1F;;\n"
"    color: silver;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #3A3939;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #3A3939;\n"
"    color: silver;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"    c"
                        "olor: #404040;\n"
"}\n"
"\n"
"QSizeGrip {\n"
"    image: url(:/qss_icons/rc/sizegrip.png);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: #302F2F;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    spacing: 2px;\n"
"    border: 1px dashed #3A3939;\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #58677b,\n"
"      stop:0.5 #78879b stop:1 #58677b);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #3A3939;\n"
"    spacing: 2px;\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #3A3939;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #302F2F;\n"
"    border: 1px solid silver;\n"
"    border-radius: 5p"
                        "x;\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"    cx: 0.5, cy: 0.5,\n"
"    fx: 0.5, fy: 0.5,\n"
"    radius: 1.0,\n"
"    stop: 0.25 #78879b,\n"
"    stop: 0.3 #302F2F\n"
"    );\n"
"}\n"
"\n"
"QCheckBox, QRadioButton\n"
"{\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #302F2F;\n"
"    border: 1px solid silver;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 7px;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QCheckBox::indicator:pressed\n"
"{\n"
"    border: 1px solid #78879b;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #78879b;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/qss_icons/rc/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px s"
                        "olid #444;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QStackedWidget\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QToolBar {\n"
"    border: 1px solid #393838;\n"
"    background: 1px solid #302F2F;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QToolBar::handle:horizontal {\n"
"    image: url(:/qss_icons/rc/Hmovetoolbar.png);\n"
"}\n"
"QToolBar::handle:vertical {\n"
"    image: url(:/qss_icons/rc/Vmovetoolbar.png);\n"
"}\n"
"QToolBar::separator:horizontal {\n"
"    image: url(:/qss_icons/rc/Hsepartoolbar.png);\n"
"}\n"
"QToolBar::separator:vertical {\n"
"    image: url(:/qss_icons/rc/Vsepartoolbars.png);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: silver;\n"
"    background-color: QLinearGradient( x1: 0, y1: 1, x2: 0, y2: 0,\n"
"    stop: 0 #302F2F, stop: 1 #484846);\n"
"    border-width: 1px;\n"
"    border-color: #4A4949;\n"
"    border-style: solid;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    border-radius: 5"
                        "px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"    background-color: #302F2F;\n"
"    border-width: 1px;\n"
"    border-color: #3A3939;\n"
"    border-style: solid;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    /*border-radius: 3px;*/\n"
"    color: #454545;\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #78879b;\n"
"    background-color: #201F1F;\n"
"    border-style: solid;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 3px;\n"
"    padding: 2px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover,QAbstractSpinBox:hover,QLineEdit:hover,QTextEdit:hover,QPlainTextEdit:hover,QAbstractView:hover,QTreeView:hover\n"
"{\n"
"    border: 1px solid #78879b;\n"
"    color: silver;\n"
"}\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #626873;\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    selection-background-color: #4a4a4a;\n"
"}\n"
"\n"
"QComboBox"
                        " QAbstractItemView\n"
"{\n"
"    background-color: #201F1F;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #3A3939;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"      stop: 0 #78879b, stop: 1 #78879b);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 0px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on, QComboBox::down-arrow:hover,\n"
"QComboBox::down-arrow:focus\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"    stop: 0 #302F2F, stop: 1 #484846);\n"
"}\n"
"\n"
"QAbstractSpinBox {"
                        "\n"
"    padding-top: 2px;\n"
"    padding-bottom: 2px;\n"
"    border: 1px solid #3A3939;\n"
"    background-color: #201F1F;\n"
"    color: silver;\n"
"    border-radius: 3px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QAbstractSpinBox:up-button\n"
"{\n"
"    background-color: transparent;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: center right;\n"
"}\n"
"\n"
"QAbstractSpinBox:down-button\n"
"{\n"
"    background-color: transparent;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: center left;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow,QAbstractSpinBox::up-arrow:disabled,QAbstractSpinBox::up-arrow:off {\n"
"    image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"QAbstractSpinBox::up-arrow:hover\n"
"{\n"
"    image: url(:/qss_icons/rc/up_arrow.png);\n"
"}\n"
"\n"
"\n"
"QAbstractSpinBox::down-arrow,QAbstractSpinBox::down-arrow:disabled,QAbstractSpinBox::down-arrow:off\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.pn"
                        "g);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"QAbstractSpinBox::down-arrow:hover\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"    border: 0px solid black;\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #3A3939;\n"
"}\n"
"\n"
"QTabBar\n"
"{\n"
"    qproperty-drawBase: 0;\n"
"    padding-right: 15px;\n"
"}\n"
"\n"
"QTabBar:focus\n"
"{\n"
"    border: 0px transparent black;\n"
"}\n"
"\n"
"QTabBar::close-button  {\n"
"    image: url(:/qss_icons/rc/close.png);\n"
"    background: transparent;\n"
"    icon-size: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTabBar::close-button:hover\n"
"{\n"
"    background: rgba(255, 255, 255, 20);\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::close-button:pressed {\n"
"    padding: 5px 4px 4px 5px;\n"
"}\n"
"\n"
"/* TOP - BOTTOM TABS */\n"
"QTabBar::tab:top {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #3A3939;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1,\n"
"      stop:1 "
                        "#302F2F, stop:0 #5A5959);\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #3A3939;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1,\n"
"      stop:1 #302F2F, stop:0 #5A5959);\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"\n"
"    border-bottom-left-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last\n"
"{\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:top:first:!selected, QTabBar::tab:bottom:first:!selected\n"
"{\n"
"    margin-left: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    margin-top: 3px;\n"
"    background-color: #302F2F;\n"
"}\n"
""
                        "\n"
"QTabBar::tab:top:selected\n"
"{\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    margin-bottom: 3px;\n"
"    background-color: #302F2F;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected\n"
"{\n"
"    margin-top: 0px;\n"
"}\n"
"\n"
"/* LEFT - RIGHT TABS */\n"
"QTabBar::tab:left {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #3A3939;\n"
"    background-color: QLinearGradient(x1:1, y1:0, x2:0, y2:0,\n"
"      stop:1 #302F2F, stop:0 #5A5959);\n"
"    padding-left: 3px;\n"
"    padding-right: 2px;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    margin-bottom: -1px;\n"
"\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #3A3939;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:1, y2:0,\n"
"      stop:1 #302F2F, stop:0 #5A5959);\n"
"    padding-left: 3px;\n"
"    padding-right: 2px;\n"
"    padding-top: 5px;\n"
"    "
                        "padding-bottom: 5px;\n"
"    margin-bottom: -1px;\n"
"\n"
"    border-top-left-radius: 3px;\n"
"    border-bottom-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    margin-right: 3px;\n"
"    background-color: #302F2F;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected\n"
"{\n"
"    margin-left: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    margin-left: 3px;\n"
"        background-color: #302F2F;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected\n"
"{\n"
"    margin-right: 0px;\n"
"}\n"
"\n"
"QTabBar QToolButton::right-arrow:enabled {\n"
"     image: url(:/qss_icons/rc/right_arrow.png);\n"
" }\n"
"\n"
" QTabBar QToolButton::left-arrow:enabled {\n"
"     image: url(:/qss_icons/rc/left_arrow.png);\n"
" }\n"
"\n"
"QTabBar QToolButton::right-arrow:disabled {\n"
"     image: url(:/qss_icons/rc/right_arrow_disabled.png);\n"
" }\n"
"\n"
" QTabBar QToolButton::left-arrow:disabled {\n"
"     image: url(:/qss_icons/rc/left_arrow_disabled.png);\n"
""
                        " }\n"
"\n"
"\n"
"QDockWidget {\n"
"    border: 1px solid #403F3F;\n"
"    titlebar-close-icon: url(:/qss_icons/rc/close.png);\n"
"    titlebar-normal-icon: url(:/qss_icons/rc/undock.png);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button {\n"
"    border: 1px solid transparent;\n"
"    border-radius: 3px;\n"
"    background: transparent;\n"
"    icon-size: 10px;\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"    background: rgba(255, 255, 255, 10);\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"    padding: 1px -1px -1px 1px;\n"
"    background: rgba(255, 255, 255, 10);\n"
"}\n"
"\n"
"QTreeView, QListView\n"
"{\n"
"    border: 1px solid #78879b;\n"
"    background-color: #201F1F;\n"
"}\n"
"\n"
"QTreeView:branch:selected, QTreeView:branch:hover\n"
"{\n"
"    background: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/trans"
                        "parent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"    image: url(:/qss_icons/rc/branch_closed.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  {\n"
"    image: url(:/qss_icons/rc/branch_open.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed:hover,\n"
"QTreeView::branch:closed:has-children:has-siblings:hover {\n"
"    image: url(:/qss_icons/rc/branch_closed-on.png);\n"
"    }\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings:hover,\n"
"QTreeView::branch:open:has-children:has-siblings:hover  {\n"
"    image: url(:/qss_icons/rc/branch_open-on.png);\n"
"    }\n"
"\n"
""
                        "QListView::item:!selected:hover, QListView::item:!selected:hover, QTreeView::item:!selected:hover  {\n"
"    background: rgba(0, 0, 0, 0);\n"
"    outline: 0;\n"
"    color: #FFFFFF\n"
"}\n"
"\n"
"QListView::item:selected:hover, QListView::item:selected:hover, QTreeView::item:selected:hover  {\n"
"    background: #78879b;;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #3A3939;\n"
"    height: 8px;\n"
"    background: #201F1F;\n"
"    margin: 2px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"      stop: 0.0 silver, stop: 0.2 #a8a8a8, stop: 1 #727272);\n"
"    border: 1px solid #3A3939;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: -4px 0;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid #3A3939;\n"
"    width: 8px;\n"
"    background: #201F1F;\n"
"    margin: 0 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
""
                        "QSlider::handle:vertical {\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 silver,\n"
"      stop: 0.2 #a8a8a8, stop: 1 #727272);\n"
"    border: 1px solid #3A3939;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: 0 -4px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: transparent;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 3px;\n"
"    margin: 3px;\n"
"}\n"
"\n"
"QToolButton:pressed, QToolButton::menu-button:pressed {\n"
"    background-color: #4A4949;\n"
"    border: 1px solid silver;\n"
"}\n"
"\n"
"QToolButton:hover, QToolButton::menu-button:hover {\n"
"    background-color: #4A4949;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
" padding-right: 20px; /* make way for the popup button */\n"
"}\n"
"\n"
"QToolButton[popupMode=\"2\"] { /* only for MenuButtonPopup */\n"
" padding-right: 10px; /* make way for the popup button */\n"
"}\n"
"\n"
"/* the subcontrols "
                        "below are used only in the MenuButtonPopup mode */\n"
"QToolButton::menu-button {\n"
" border: 1px solid #3A3939;\n"
" border-top-right-radius: 6px;\n"
" border-bottom-right-radius: 6px;\n"
" /* 16px width + 4px for border = 20px allocated above */\n"
" width: 16px;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
" image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
" top: 1px; left: 1px; /* shift it a bit */\n"
"}\n"
"\n"
"QPushButton::menu-indicator  {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    left: 8px;\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"    border: transparent;\n"
"    gridline-color: #6c6c6c;\n"
"    background-color: #201F1F;\n"
"}\n"
"\n"
"\n"
"QTableView, QHeaderView\n"
"{\n"
"    border-radius: 0px;\n"
"}\n"
"\n"
"QTableView::item:pressed, QListView::item:pressed, QTreeView::item:pressed  {\n"
"    background: #78879b;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QTableView::item:selected:active, QTreeView::item:selected:activ"
                        "e, QListView::item:selected:active  {\n"
"    background: #78879b;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"\n"
"QHeaderView\n"
"{\n"
"    border: 1px transparent;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"}\n"
"\n"
"QHeaderView::section  {\n"
"    background-color: #3A3939;\n"
"    color: silver;\n"
"    padding: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    border-radius: 0px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QHeaderView::section::vertical::first, QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: transparent;\n"
"}\n"
"\n"
"QHeaderView::section::horizontal::first, QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: transparent;\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
" {\n"
"    color: white;\n"
"    background-color: #5A5959;\n"
" }\n"
"\n"
" /* style the sort indi"
                        "cator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(:/qss_icons/rc/up_arrow.png);\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section {\n"
"    background-color: #3A3939;\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 0px;\n"
"}\n"
"\n"
"QToolBox::tab {\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:1 #302F2F, stop:0 #5A5959);\n"
"    padding-left: 3px;\n"
"    padding-right: 2px;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    margin-bottom: -1px;\n"
"\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    color: darkgray;\n"
" }\n"
"\n"
" QToolBox::tab:selected { /* italicize selected tabs */\n"
"     font: italic bold;\n"
"     color: white;\n"
" }\n"
"\n"
"QStatusBar::item {\n"
"    border: 1px solid #3A3939;\n"
"    border-radius: 3px;\n"
" }"));
        actionP_Inversed = new QAction(MainWindow);
        actionP_Inversed->setObjectName(QString::fromUtf8("actionP_Inversed"));
        actionAdvanced = new QAction(MainWindow);
        actionAdvanced->setObjectName(QString::fromUtf8("actionAdvanced"));
        actionPinversed = new QAction(MainWindow);
        actionPinversed->setObjectName(QString::fromUtf8("actionPinversed"));
        actionPinversed->setCheckable(true);
        actionAdvanced_2 = new QAction(MainWindow);
        actionAdvanced_2->setObjectName(QString::fromUtf8("actionAdvanced_2"));
        actionAdvanced_2->setCheckable(true);
        actionDefault = new QAction(MainWindow);
        actionDefault->setObjectName(QString::fromUtf8("actionDefault"));
        actionDefault->setCheckable(true);
        actionDefault->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(110, 80, 31, 31));
        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(60, 80, 31, 31));
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(10, 80, 31, 31));
        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(110, 130, 31, 31));
        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(60, 130, 31, 31));
        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(10, 130, 31, 31));
        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(110, 180, 31, 31));
        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(60, 180, 31, 31));
        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(10, 180, 31, 31));
        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(10, 230, 81, 31));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 40, 51, 31));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(70, 40, 31, 31));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(110, 40, 31, 31));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(150, 40, 31, 31));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(190, 40, 31, 31));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(150, 80, 31, 31));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(190, 80, 31, 31));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(150, 130, 31, 31));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(150, 180, 31, 31));
        btnplus = new QPushButton(centralWidget);
        btnplus->setObjectName(QString::fromUtf8("btnplus"));
        btnplus->setGeometry(QRect(150, 230, 31, 31));
        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(110, 230, 31, 31));
        btnequal = new QPushButton(centralWidget);
        btnequal->setObjectName(QString::fromUtf8("btnequal"));
        btnequal->setGeometry(QRect(190, 180, 31, 81));
        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(190, 130, 31, 31));
        syntaxe_text = new QLineEdit(centralWidget);
        syntaxe_text->setObjectName(QString::fromUtf8("syntaxe_text"));
        syntaxe_text->setGeometry(QRect(10, 270, 211, 20));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(266, 0, 191, 281));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 191, 261));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        adavnced_mode = new QPushButton(centralWidget);
        adavnced_mode->setObjectName(QString::fromUtf8("adavnced_mode"));
        adavnced_mode->setGeometry(QRect(230, 140, 31, 21));
        show_result = new QLabel(centralWidget);
        show_result->setObjectName(QString::fromUtf8("show_result"));
        show_result->setGeometry(QRect(20, 10, 201, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(11);
        show_result->setFont(font);
        show_result->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 463, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setTearOffEnabled(false);
        menuFile->setSeparatorsCollapsible(false);
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../usr/share/icons/NodeZero-IT/scalable/actions/document-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuEdit->setIcon(icon1);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../usr/share/icons/NodeZero-IT/scalable/actions/add-folder-to-archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTools->setIcon(icon2);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../usr/share/icons/NodeZero-IT/scalable/actions/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuAbout->setIcon(icon3);
        menuTypes = new QMenu(menuBar);
        menuTypes->setObjectName(QString::fromUtf8("menuTypes"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../usr/share/icons/NodeZero-IT/scalable/actions/access.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTypes->setIcon(icon4);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTypes->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuTypes->addAction(actionPinversed);
        menuTypes->addAction(actionAdvanced_2);
        menuTypes->addAction(actionDefault);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PPcalculator", 0, QApplication::UnicodeUTF8));
        actionP_Inversed->setText(QApplication::translate("MainWindow", "P Inversed", 0, QApplication::UnicodeUTF8));
        actionAdvanced->setText(QApplication::translate("MainWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        actionPinversed->setText(QApplication::translate("MainWindow", "Pinversed", 0, QApplication::UnicodeUTF8));
        actionAdvanced_2->setText(QApplication::translate("MainWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        actionDefault->setText(QApplication::translate("MainWindow", "Default", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "del", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "(", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", ")", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "sqrt", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "pow", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "%", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        btnplus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        btnequal->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
        syntaxe_text->setText(QApplication::translate("MainWindow", "syntax ->", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Your code", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Syntaxe", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        adavnced_mode->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        show_result->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuTypes->setTitle(QApplication::translate("MainWindow", "Types", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
