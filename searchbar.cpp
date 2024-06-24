#include "searchbar.h"

SearchBar::SearchBar(QWidget *parent) : QWidget(parent)
{
    searchLineEdit = new QLineEdit(this);
    searchLineEdit->setPlaceholderText("Search...");

    layout = new QHBoxLayout(this);
    layout->addWidget(searchLineEdit);
    layout->setAlignment(searchLineEdit, Qt::AlignCenter);

    setLayout(layout);
}



