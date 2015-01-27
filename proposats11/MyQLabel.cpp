#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){
    barrera = false;
    numCotxes = 0;
    numCamions = 0;
    numMotos = 0;
    recaptacio = 0;
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::cotxe() {
    if(barrera) {
        numCotxes+=1;
        this->setText(QString::number(numCotxes));
    }
}

void MyQLabel::camio() {
    if(barrera) {
        numCamions+=1;
        this->setText(QString::number(numCamions));
    }
}

void MyQLabel::moto() {
    if(barrera) {
        numMotos+=1;
        this->setText(QString::number(numMotos));
    }
}

void MyQLabel::obert() {
    barrera = true;
    if(!this->styleSheet().isEmpty())
        this->setStyleSheet("background:green;");
}

void MyQLabel::tancat() {
    barrera = false;
    if(!this->styleSheet().isEmpty())
        this->setStyleSheet("background:red;");
}

void MyQLabel::unEuro() {
    if(barrera) {
        recaptacio+=1;
        this->setText(QString::number(recaptacio));
    }
}

void MyQLabel::quatreEuro() {
    if(barrera) {
        recaptacio+=4;
        this->setText(QString::number(recaptacio));
    }
}