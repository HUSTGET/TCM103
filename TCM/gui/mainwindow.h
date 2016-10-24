#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QAction>
#include <QToolBar>
#include <QMenuBar>
#include <QtCore>

class QPlainTextEdit;
class QAction;
class QMenu;


class MainWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow();
    ~MainWindow();
private slots:
    void test();

private:
    void createActions();
    void createMenus();
    //cancel the toolbar function
    //void createToolBars();

private:
    QMainWindow* mainwindow_;
    QMenu  *file_menu_;
    QMenu  *set_menu_;
    QMenu  *algorithm_menu_;
    //QMenu  *data_menu;
    //QMenu  *calibration_menu;
    QMenu  *help_menu_;

     //TODO QToolBar *file_tool_bar_;
     //TODO:: QToolBar *set_tool_bar_;
     //TODO:: QToolBar *algorithm_tool_bar_;
     //TODO:: QToolBar *help_tool_bar_;

    //define the pull up submenu of file_menu which mainly
    //defines the action of process configure parameter
    QAction *file_new_;
    QAction *file_open_;
    QAction *file_save_;
    QAction *file_exit_;

    //defines the different setting action like communication,command,process and pattern
    QAction *set_communicaion_;
    QAction *set_command_;
    QAction *set_process_;
    QAction *set_pattern_;

    //defines the subaction of algorithm
    QAction *algorithm_idnt_;
    QAction *algorithm_pid_control_;
    QAction *algorithm_driver_test_;
    QAction *algorithm_parameter_tuning;

    //defines the help menu and its related operation
    QAction *help_file_;
    QAction *help_setting_;
    QAction *help_algorithm_;
    QAction *help_calibration_;
    QAction *help_author_;
};

#endif // MAINWINDOW_H

