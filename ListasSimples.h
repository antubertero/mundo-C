#ifndef LISTASSIMPLES_H_INCLUDED
#define LISTASSIMPLES_H_INCLUDED
#include "Persona.h"

typedef struct
{

    stPersona persona;
    struct listaPersonas * siguiente;

} listaPersona;

listaPersona* initListaSimplePersona();
listaPersona* crearNodoListaSimplePersona(stPersona nuevaPersona);
listaPersona* agregarEnListaEnOrdenPorLegajoo(listaPersona * lista, listaPersona * nuevoNodo);
listaPersona * agregarAlPrincipio(listaPersona* lista,listaPersona*  nuevoNodo);
void mostrarListaSimplePerosnas(listaPersona * lista);
listaPersona* eliminarPersonaDeLista(listaPersona* lista, int legajoElimanr);
void subirListaEnArchivo(listaPersona * lista, char nombreArchi[]);
listaPersona* descarDatosArchiYSubirEnLista(char nombreArchi[]);

#endif // LISTASSIMPLES_H_INCLUDED
