//
// Created by Eduardo Ojeda on 5/9/22.
//

#ifndef LISTAS_ENLAZADAS_LISTA_H
#define LISTAS_ENLAZADAS_LISTA_H
#include "nodo.h"
#include <iostream>
#include <sstream>

using namespace std;


class lista {
private:
    nodo* primero;

public:
    lista();

    lista(nodo *primero);

    void ingresarValor(int);

    string display();

};


#endif //LISTAS_ENLAZADAS_LISTA_H
