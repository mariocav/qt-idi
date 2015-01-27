#include "MyQLineEdit.h"
#include <qvalidator.h>
#include <iostream>
using namespace std;

MyQLineEdit::MyQLineEdit(QWidget *parent){
    init();
}

MyQLineEdit::~MyQLineEdit(){

}

void MyQLineEdit::init() {
    paraula = "DICCIONARI";
    paraulaOculta = "**********";
    vidas = 5;
    fi = false;
    emit parOculta(paraulaOculta);
    emit numVidas(vidas);
}

void MyQLineEdit::reset() {
    this->setStyleSheet("background:white;");
    setReadOnly(false);
    setFocus();
    setText("");
    init();
}

// tmb podríamos usar el signal textChanged y asociarlo a un
// slot de esta misma clase que tuviera un código parecido
void MyQLineEdit::keyPressEvent(QKeyEvent * e) {
    if(fi)
        return;
    QChar ch = e->key();
    ch = ch.toUpper();
    QChar ascii = ch.toAscii();
    if(ascii<'A' || ascii>'Z')
        return;
    if(paraula.contains(ch)) {
        for (int i = 0; i < paraula.length(); ++i){
            if(paraula.at(i)==ch) {
                paraulaOculta.replace(i,1,ch);
                emit parOculta(paraulaOculta);
                if(paraulaOculta==paraula) {
                   this->setStyleSheet("background:green;");
                   fi = true;
                   setReadOnly(true);
                }
            }
        }
    }else{
        --vidas;
        emit numVidas(vidas);
        if(vidas==0) {
            this->setStyleSheet("background:red;");
            fi = true;
            setReadOnly(true);
        }
    }
    this->insert(ch);
}