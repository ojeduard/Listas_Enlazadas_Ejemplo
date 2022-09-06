//
// Created by Eduardo Ojeda on 5/9/22.
//

#include "nodo.h"

nodo::nodo(int valor, nodo *siguiente = nullptr) : valor(valor), siguiente(siguiente) {}

void nodo::setValor(int valor) {
    nodo::valor = valor;
}

void nodo::setSiguiente(nodo *siguiente) {
    nodo::siguiente = siguiente;
}

int nodo::getValor() const {
    return valor;
}

nodo *nodo::getSiguiente() const {
    return siguiente;
}

nodo::~nodo() {

}
