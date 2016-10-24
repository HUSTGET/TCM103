#include <QtCore>
#include <QDebug>
#include "mainwindow.h"

MainWindow::MainWindow()
{
    mainwindow_=new QMainWindow;
    mainwindow_->setWindowTitle(tr("immersion lithography temperature control system V2.0"));
    setCentralWidget(mainwindow_);
    mainwindow_->setMaximumSize(1200,800);
    mainwindow_->setMinimumSize(1200,800);
    createActions();
    createMenus();
}

MainWindow::~MainWindow()
{
    delete mainwindow_;
}

//create the actions first and then add the actions list to menu
void MainWindow::createActions()
{
    /******************menu  for files****************************************/
    file_new_=new QAction(QIcon("resources/new.png"),tr("&new"),this);
    file_new_->setShortcut(QKeySequence::New);
    file_new_->setStatusTip(tr("create a config file for parameter configration"));
    connect(file_new_,SIGNAL(triggered(bool)),this,SLOT(test()));
    /**********************************************************/
    file_open_=new QAction(QIcon("resources/open.png"),tr("open file"),this);
    file_open_->setShortcut(QKeySequence::Open);
    file_open_->setStatusTip(tr("open the config_****.xml"));
    connect(file_open_,SIGNAL(triggered(bool)),this,SLOT(test()));

    file_save_=new QAction(QIcon("resources/save.png"),tr("save file"),this);
    file_save_->setShortcut(QKeySequence::Save);
    file_save_->setStatusTip(tr("Save the config_****.xml"));
    connect(file_save_,SIGNAL(triggered(bool)),this,SLOT(test()));

     file_exit_=new QAction(QIcon("./resources/exit.png"),tr("exit file"),this);
     file_exit_->setShortcut(QKeySequence::Close);
     file_exit_->setStatusTip(tr("exit file"));
     connect(file_exit_,SIGNAL(triggered(bool)),this,SLOT(test()));

     /*********************menu for setting*************************************/
     set_communicaion_=new QAction("communication",this);
     set_communicaion_->setStatusTip(tr("communication setting"));
     connect(set_communicaion_,SIGNAL(triggered(bool)),this,SLOT(test()));

     set_command_=new QAction("command",this);
     set_command_->setStatusTip(tr("command setting"));
     connect(set_command_,SIGNAL(triggered(bool)),this,SLOT(test()));

     set_process_=new QAction("process",this);
     set_process_->setStatusTip(tr("process setting"));
     connect(set_process_,SIGNAL(triggered(bool)),this,SLOT(test()));

     set_pattern_=new QAction("pattern",this);
     set_pattern_->setStatusTip(tr("pattern setting"));
     connect(set_pattern_,SIGNAL(triggered(bool)),this,SLOT(test()));

     /*********************menu for algorithm*************************************/
    algorithm_idnt_=new QAction("Identification",this);
    algorithm_idnt_->setStatusTip(tr("algorithm identification"));
    connect(algorithm_idnt_,SIGNAL(triggered(bool)),this,SLOT(test()));

    algorithm_pid_control_=new QAction("PID Control",this);
    algorithm_pid_control_->setStatusTip(tr("algorithm pid control"));
    connect(algorithm_pid_control_,SIGNAL(triggered(bool)),this,SLOT(test()));

    algorithm_driver_test_=new QAction("Driver Test",this);
    algorithm_driver_test_->setStatusTip(tr("driver_test"));
    connect(algorithm_driver_test_,SIGNAL(triggered(bool)),this,SLOT(test()));

    algorithm_parameter_tuning=new QAction("parameter tuning",this);
    algorithm_parameter_tuning->setStatusTip(tr("parameter tuning"));
    connect(algorithm_parameter_tuning,SIGNAL(triggered(bool)),this,SLOT(test()));

    /*********************menu for help*************************************/
    help_file_= new QAction("file explanation ",this);
    help_file_->setStatusTip(tr("help for file"));
    connect(help_file_,SIGNAL(triggered(bool)),this,SLOT(test()));

    help_setting_= new QAction("setting explanation ",this);
    help_setting_->setStatusTip(tr("help for setting"));
    connect(help_setting_,SIGNAL(triggered(bool)),this,SLOT(test()));

    help_algorithm_= new QAction("TCM algorithm ",this);
    help_algorithm_->setStatusTip(tr("help for algorithm"));
    connect(help_algorithm_,SIGNAL(triggered(bool)),this,SLOT(test()));

    help_calibration_= new QAction("sensor calibration ",this);
    help_calibration_->setStatusTip(tr("help forsensor calibration"));
    connect(help_calibration_,SIGNAL(triggered(bool)),this,SLOT(test()));

    help_author_= new QAction("Author ",this);
    help_author_->setStatusTip(tr("info for author"));
    connect(help_author_,SIGNAL(triggered(bool)),this,SLOT(test()));

}

void MainWindow::createMenus()
{
     //add the push up menu in the menubar
    file_menu_=menuBar()->addMenu(tr("Files"));
    file_menu_->addAction(file_new_);
    file_menu_->addAction(file_open_);
    file_menu_->addAction(file_save_);
    file_menu_->addSeparator();
    file_menu_->addAction(file_exit_);

    set_menu_=menuBar()->addMenu(tr("&Setting"));
    set_menu_->addAction(set_communicaion_);
    set_menu_->addAction(set_command_);
    set_menu_->addAction(set_process_);
    set_menu_->addAction(set_pattern_);

    algorithm_menu_=menuBar()->addMenu(tr("Algorithm"));
    algorithm_menu_->addAction(algorithm_idnt_);
    algorithm_menu_->addAction(algorithm_pid_control_);
    algorithm_menu_->addAction(algorithm_driver_test_);
    algorithm_menu_->addAction(algorithm_parameter_tuning);

    help_menu_=menuBar()->addMenu(tr("Help"));
    help_menu_->addAction(help_file_);
    help_menu_->addAction(help_setting_);
    help_menu_->addAction(help_algorithm_);
    help_menu_->addAction(help_calibration_);
    help_menu_->addAction(help_author_);
}

//void MainWindow::createToolBars()
//{
//    file_tool_bar_=addToolBar(tr("File"));
//    file_tool_bar_->addAction(file_new_);
//    file_tool_bar_->addAction(file_open_);
//    file_tool_bar_->addAction(file_save_);
//    file_tool_bar_->addAction(file_exit_);
//}

void MainWindow::test()
{
    qDebug()<<"test for a while";

}
