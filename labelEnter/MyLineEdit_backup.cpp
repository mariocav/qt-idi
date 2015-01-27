#include "MyQLineEdit.h"
#include <iostream>
using namespace std;

MyQLineEdit::MyQLineEdit(QWidget *parent){

}

MyQLineEdit::~MyQLineEdit(){

}

void MyQLineEdit::keyPressEvent(QKeyEvent * e) {
    if(e->key()==Qt::Key_Return) {
        QString str = this->text();
        emit MyReturnPressed(str);
    }else{
        QLineEdit::keyPressEvent(e);
    }
}