// pila.cpp
#include "pila.h"
#include <stdexcept> // Para las excepciones como overflow_error

void crearPila(struct pila* p) {
    p->tope = -1;
}

int pilaLlena(struct pila* p) {
    return p->tope == MAXELEMENTS - 1;
}

void adicionarAPila(struct pila* p, float valor) {
    if (pilaLlena(p)) {
        throw std::overflow_error("Pila overflow");
    }
    p->elementos[++(p->tope)] = valor;
}

int pilaVacia(struct pila* p) {
    return p->tope == -1;
}

float eliminarDePila(struct pila* p) {
    if (pilaVacia(p)) {
        throw std::overflow_error("Pila bajo flujo");
    }
    return p->elementos[(p->tope)--];
}

float sumarElementos(struct pila* p) {
    float elem = 0.0;
    float suma = 0.0;

    while (!pilaVacia(p)) {
        elem = eliminarDePila(p);
        suma = suma + elem;
    }

    return suma;
}
