/* Una PILA es una estructura ordenada y homogénea,
en la que podemos añadir o quitar elementos en un
extremo llamado TOPE siguiendo una política LIFO
(Last In, First Out) */

/*
 Se dice que es una estructura ordenada, porque sus
 elementos se sitúan siguiendo un cierto orden, NO QUE
 ESTÉN ORDENADOS EN FUNCIÓN DE SU VALOR.
*/

/*
Se dice que se trata de una estructura homogénea,
 porque todos sus elementos son del mismo tipo
*/

/*
	En este caso será estática (Tamaño predefinido)
	por lo cual no se necesita destructor
*/
#include <iostream>
#define MAXELEMENTS 5

using namespace std;
struct pila {
	int tope;
	float elementos[MAXELEMENTS];
};


void crearPila(struct pila* p) {
	p->tope = -1;
}

int pilaLlena(struct pila* p) {
	return p->tope == MAXELEMENTS - 1;
}


void adicionarAPila(struct pila* p, float valor) {
	if (pilaLlena(p)) {
		throw overflow_error("Pila overflow");
	}
	p->elementos[++(p->tope)] = valor;

}

int pilaVacia(struct pila* p) {
	return p->tope == -1;
}

float eliminarDePila(struct pila* p) {
	if (pilaVacia(p)) {
		throw overflow_error("Pila overflow");
	}
	return p->elementos[(p->tope)--];
}

int main() {
	try
	{
		struct pila p;
		crearPila(&p);

		adicionarAPila(&p, 10.4);
		adicionarAPila(&p, 1.4);
		adicionarAPila(&p, 5.8);

		float valor = eliminarDePila(&p);
		cout << "Valor eliminado: " << valor << endl;

		cout << pilaVacia(&p) << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}

	return 0;
}