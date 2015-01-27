#include "MyQWidget.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQWidget::MyQWidget(QWidget *parent){
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->red=this->green=this->blue=0;
}

MyQWidget::~MyQWidget(){

}

void MyQWidget::getRed(int r) {
    this->red = r;
}

void MyQWidget::getGreen(int g) {
    this->green = g;
}

void MyQWidget::getBlue(int b) {
    this->blue = b;
}

void MyQWidget::updateColor() {
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(this->red,this->green,this->blue)); // Qt::black
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();
}