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
        if(str=="Marca") {
            emit activa(true);
        }else if(str=="Desmarca"){
            emit activa(false);
        }
    }else{
        QLineEdit::keyPressEvent(e);
    }
}