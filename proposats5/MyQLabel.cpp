#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){

}

MyQLabel::~MyQLabel(){

}

void MyQLabel::setCreu() {
    this->setText("X");
}

void MyQLabel::setCercle() {
    this->setText("O");
}