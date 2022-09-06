//
// Created by Eduardo Ojeda on 5/9/22.
//

#include "lista.h"

lista::lista() {primero = nullptr;}


void lista::ingresarValor(int valor) { primero = new nodo(valor, primero);}

string lista::display() {
    stringstream s;
    nodo* posActual = primero;

    while(posActual != nullptr){
        s << posActual->getValor() << endl;
        posActual =  posActual->getSiguiente();
    }
    return s.str();

}



