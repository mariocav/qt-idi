/*
    "de tal forma que cada enter canvii de color (rosa, verd, blau o negre)..."
    o sea, solo nos dejan esos colores? entonces xke hay un rojo en el dibujo?
    un poco más de concreción por favor
*/

#include "MyQPushButton.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQPushButton::MyQPushButton(QWidget *parent){
    qsrand (time(NULL));
    random = rand();
    variable = 0;
    toColor();
    char buff[64];
    sprintf(buff,"background: rgb(%d,%d,%d);", rgb[0]%255, rgb[1]%255, rgb[2]%255);
    this->setStyleSheet(buff);
}

MyQPushButton::~MyQPushButton(){

}

void MyQPushButton::toColor() {
    unsigned int temp = random+variable;
    rgb[0] = temp&255; temp=temp>>8;
    rgb[1] = temp&255; temp=temp>>8;
    rgb[2] = temp&255; temp=temp>>8;
}

void MyQPushButton::dial(int n) {
    variable = n;
    toColor();
    char buff[64];
    sprintf(buff,"background: rgb(%d,%d,%d);", rgb[0]%255, rgb[1]%255, rgb[2]%255);
    this->setStyleSheet(buff);
}

void MyQPushButton::setRand() {
    random = rand();
    toColor();
    char buff[64];
    sprintf(buff,"background: rgb(%d,%d,%d);", rgb[0]%255, rgb[1]%255, rgb[2]%255);
    this->setStyleSheet(buff);
}