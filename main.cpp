#include <iostream>
#include "lista.h"

int main() {
    lista* list = new lista();
    list->ingresarValor(1);
    list->ingresarValor(4);
    list->ingresarValor(3);
    list->ingresarValor(3);

    cout << list->display();

    return 0;
}
