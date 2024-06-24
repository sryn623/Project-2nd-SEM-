#ifndef SEARCHBAR_H
#define SEARCHBAR_H

#include <QWidget>
#include <QLineEdit>
#include <QHBoxLayout>

class SearchBar : public QWidget
{
    Q_OBJECT

public:
    explicit SearchBar(QWidget *parent = nullptr);

private:
    QLineEdit *searchLineEdit;
    QHBoxLayout *layout;
};

#endif // SEARCHBAR_H

