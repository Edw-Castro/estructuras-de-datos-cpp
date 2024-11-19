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

// main.cpp
#include <iostream>
#include "pila.h"


using namespace std;

int main() {
	try
	{
		struct pila p;
		crearPila(&p);
		adicionarAPila(&p, 10.5);
		adicionarAPila(&p, 5.2);

		cout << sumarElementos(&p) << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
}
