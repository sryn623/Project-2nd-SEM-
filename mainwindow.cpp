#include "mainwindow.h"
#include "searchbar.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), searchBar(new SearchBar(this))
{
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    mainLayout->addWidget(searchBar);
    mainLayout->setAlignment(searchBar, Qt::AlignTop | Qt::AlignHCenter);

    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}


