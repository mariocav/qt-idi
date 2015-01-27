#include "MyQTextEdit.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MyQTextEdit::MyQTextEdit(QWidget *parent){
    this->quantity = 0;
    this->name = "";
}

MyQTextEdit::~MyQTextEdit(){

}

void MyQTextEdit::setName(QString str) {
    this->name=str;
}

void MyQTextEdit::setQuantity(int qty) {
    this->quantity=qty;
}

void MyQTextEdit::addItem() {
    //QString mostra = QString(this->name,QString(this->quantity));
    if(this->quantity>0 && !this->name.isEmpty()) {
        QString add = QString::number(this->quantity)+" "+this->name;
        this->append(add);
    }
}