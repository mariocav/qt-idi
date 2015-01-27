#include "MyQLCDNumber.h"

MyQLCDNumber::MyQLCDNumber(QWidget *parent){
    valorActual = valorAntic = 0;
    valorSlider = 1;
}

MyQLCDNumber::~MyQLCDNumber(){

}

void MyQLCDNumber::setToZero() {
    valorAntic = valorActual;
    valorActual = 0;
    this->display(valorActual);
}

void MyQLCDNumber::setValor(int n) {
    valorSlider = n;
}

void MyQLCDNumber::suma() {
    valorAntic = valorActual;
    valorActual+=valorSlider;
    this->display(valorActual);
}

void MyQLCDNumber::resta() {
    valorAntic = valorActual;
    valorActual-=valorSlider;
    this->display(valorActual);
}

void MyQLCDNumber::undo() {
    valorActual = valorAntic;
    this->display(valorActual);
}