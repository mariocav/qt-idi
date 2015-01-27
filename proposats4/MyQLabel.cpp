#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){
	this->suma = 0;
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::suma1() {
    this->sumaN(1);
}

void MyQLabel::suma2() {
    this->sumaN(2);
}

void MyQLabel::sumaN(int n) {
    this->suma+=n;
    char buff[32];
    sprintf(buff,"%d",this->suma);
    this->setText(buff);
}

void MyQLabel::setZero() {
    this->suma=0;
    this->sumaN(0);
}