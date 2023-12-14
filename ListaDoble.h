#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "Persona.h"

typedef struct{

stPersona persona;
struct nodoListaDoble * siguiente;
struct nodoListaDoble * anterior;


}nodoListaDoble;

nodoListaDoble * initListaDoble();
nodoListaDoble * crearNodoDoble(stPersona persona);
nodoListaDoble * agregarEnListaDobleEnOrdenPorLegajoo(nodoListaDoble * lista, nodoListaDoble * nuevoNodo);
nodoListaDoble* agregarAlPrincipioListaDoble(nodoListaDoble* lista, nodoListaDoble* nuevoNodo);
nodoListaDoble * eliminarNodoListasDobles(nodoListaDoble * lista, int legajoElimanr);
void mostrarListaDoblePersonas(nodoListaDoble * lista);
void subirListaDobleEnArchivo(nodoListaDoble * lista, char nombreArchivo[]);
void descargarDatosArchiYSubirEnListaDoble(nodoListaDoble * lista, char nombreArchivo[]);

#endif // LISTADOBLE_H_INCLUDED
