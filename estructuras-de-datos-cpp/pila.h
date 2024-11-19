#pragma once
#ifndef PILA_H
#define PILA_H

#include <stdexcept>

#define MAXELEMENTS 5

struct pila {
    int tope;
    float elementos[MAXELEMENTS];
};

void crearPila(struct pila* p);
int pilaLlena(struct pila* p);
void adicionarAPila(struct pila* p, float valor);
int pilaVacia(struct pila* p);
float eliminarDePila(struct pila* p);
float sumarElementos(struct pila* p);

#endif // PILA_H
