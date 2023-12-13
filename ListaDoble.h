#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "Persona.h"

typedef struct{

stPersona persona;
struct nodoListaDoble * siguiente;
struct nodoListaDoble * anterior;


}nodoListaDoble;

nodoListaDoble* agregarAlPrincipioListaDoble(nodoListaDoble* lista, nodoListaDoble* nuevoNodo);

#endif // LISTADOBLE_H_INCLUDED
