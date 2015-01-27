#include "MyQLabel.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQLabel::MyQLabel(QWidget *parent){
	this->n=0;
}

MyQLabel::~MyQLabel(){

}

void MyQLabel::getText(QString str) {
    this->text2 = str;
    this->doTruncate(this->n);
}

void MyQLabel::doTruncate(int n) {
    this->n = n;
    QString mostra = this->text2;
    mostra.truncate(n);
    this->setText(mostra);
}