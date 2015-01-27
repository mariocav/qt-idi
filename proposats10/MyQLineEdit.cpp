#include "MyQLineEdit.h"

MyQLineEdit::MyQLineEdit(QWidget *parent){
    shift = false;
}

MyQLineEdit::~MyQLineEdit(){

}

void MyQLineEdit::A() {
    if(shift)
        this->insert("A");
    else
        this->insert("a");
}

void MyQLineEdit::E() {
    if(shift)
        this->insert("E");
    else
        this->insert("e");
}

void MyQLineEdit::I() {
    if(shift)
        this->insert("I");
    else
        this->insert("i");
}

void MyQLineEdit::O() {
    if(shift)
        this->insert("O");
    else
        this->insert("o");
}

void MyQLineEdit::U() {
    if(shift)
        this->insert("U");
    else
        this->insert("u");
}

void MyQLineEdit::toggleShift() {
    shift = !shift;
}