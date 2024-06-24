#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "searchbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    SearchBar *searchBar;
};

#endif // MAINWINDOW_H

