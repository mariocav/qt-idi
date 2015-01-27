#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){
    graus = 0;
    groc = 0;
    vermell = 41;
    increment = 1;
    this->setStyleSheet("background:green;");
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::updateColor() {
    if(graus<groc)
        this->setStyleSheet("background:green;");
    else if(graus>=groc && graus<=vermell)
        this->setStyleSheet("background:yellow;");
    else if(graus>vermell)
        this->setStyleSheet("background:red;");

}

void MyQLabel::setGroc(int g) {
    groc = g;
    updateColor();
}

void MyQLabel::setVermell(int v) {
    vermell = v;
    updateColor();
}

void MyQLabel::setIncrement(int i) {
    increment = i;
}

void MyQLabel::suma() {
    if(graus+increment<=100)
        graus+=increment;
    updateColor();
    emit setGraus(graus);
}

void MyQLabel::resta() {
    if(graus-increment>=0)
        graus-=increment;
    updateColor();
    emit setGraus(graus);
}