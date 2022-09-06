//
// Created by Eduardo Ojeda on 5/9/22.
//

#ifndef LISTAS_ENLAZADAS_NODO_H
#define LISTAS_ENLAZADAS_NODO_H


class nodo {
private:
    int valor;
    nodo* siguiente;

public:
    nodo(int valor, nodo *siguiente);

    void setValor(int valor);

    void setSiguiente(nodo *siguiente);

    int getValor() const;

    nodo *getSiguiente() const;

    virtual ~nodo();


};


#endif //LISTAS_ENLAZADAS_NODO_H
