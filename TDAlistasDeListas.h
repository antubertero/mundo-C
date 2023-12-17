#ifndef TDALISTASDELISTAS_H_INCLUDED
#define TDALISTASDELISTAS_H_INCLUDED
#include "Persona.h"
#include "ListasSimples.h"

typedef struct{

int BancoAsociado;
listaPersona * listaP;
struct nodoListaSimpleTDA * siguiente;


}nodoListaSimpleTDA;

nodoListaSimpleTDA * altaListaTDA(nodoListaSimpleTDA* lista, stPersona persona);
nodoListaSimpleTDA * buscarPosListaTDA(nodoListaSimpleTDA * lista, int cuentaBancaria);
nodoListaSimpleTDA * crearNodoBanco(int numero);
nodoListaSimpleTDA * agregarAlPrincipioBanco(nodoListaSimpleTDA* lista, nodoListaSimpleTDA * nuevoNodo);

#endif // TDALISTASDELISTAS_H_INCLUDED
