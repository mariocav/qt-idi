#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){
    estat = -1;
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::canvia() {
    this->estat+=1;

    QPalette Pal(palette());

    if(estat==0) {
        Pal.setColor(QPalette::Background, Qt::red); // Qt::black
    }else if(estat==1) {
        Pal.setColor(QPalette::Background, Qt::yellow);
    }else if(estat==2){
        Pal.setColor(QPalette::Background, Qt::green);
        estat = -1;
    }

    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();
}