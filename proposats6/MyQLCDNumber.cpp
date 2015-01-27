#include "MyQLCDNumber.h"
#include <iostream>
using namespace std;

MyQLCDNumber::MyQLCDNumber(QWidget *parent){

}

MyQLCDNumber::~MyQLCDNumber(){

}

void MyQLCDNumber::display(int num) {
    QString str = QString::number(num,3);
    int n = str.toInt();
    QLCDNumber::display(n);
}

void MyQLCDNumber::setToZero() {
    QLCDNumber::display(0);
}