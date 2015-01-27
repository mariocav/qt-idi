#include "MyQLabel.h"
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){

}

MyQLabel::~MyQLabel(){

}

void MyQLabel::pintaVerd(bool b) {
    if(b) {
        this->setStyleSheet("background: green;");
    }else{
        this->setStyleSheet("background: white;");
    }
}