#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PruebaQt.h"

class PruebaQt : public QMainWindow
{
    Q_OBJECT

public:
    PruebaQt(QWidget *parent = nullptr);
    ~PruebaQt();

private:
    Ui::PruebaQtClass ui;
};

