#include "MyQLCDNumber.h"

MyQLCDNumber::MyQLCDNumber(QWidget *parent){

}

MyQLCDNumber::~MyQLCDNumber(){

}

void MyQLCDNumber::display(int num) {

    QPalette Pal(palette());

    if(num==0) {
        Pal.setColor(QPalette::WindowText, Qt::green);
    }else if(num%2==0) {
        Pal.setColor(QPalette::WindowText, Qt::blue);
    }else{
        Pal.setColor(QPalette::WindowText, Qt::red);
    }

    this->setPalette(Pal);

    QLCDNumber::display(num);
}

void MyQLCDNumber::setToZero() {
    this->display(0);
}