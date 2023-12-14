#ifndef ARBOLPERSONAS_H_INCLUDED
#define ARBOLPERSONAS_H_INCLUDED
#include "Persona.h"

typedef struct{

stPersona persona;

struct nodoArbol * derecha;
struct nodoArbol * izquierda;

}nodoArbol;

nodoArbol * initArbol();
nodoArbol * crearNodoArbolPersona(stPersona persona);
nodoArbol * agregarEnArbol(nodoArbol * arbol, nodoArbol * nuevoNodo);
nodoArbol * busquedaDePersonaEnArbol(nodoArbol * arbool, int legajoBuscado);
void mostrarArbolPreOrden(nodoArbol * arbol);
void mostrarArbolInOrden(nodoArbol * arbol);
void mostrarArbolPosOrden(nodoArbol * arbol);


#endif // ARBOLPERSONAS_H_INCLUDED
