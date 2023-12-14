#include <stdio.h>
#include <stdlib.h>
#include "ArbolPersonas.h"
#include "Persona.h"

// init arbol

nodoArbol * initArbol()
{

    return NULL;

}


nodoArbol * crearNodoArbolPersona(stPersona persona)
{

    nodoArbol * nuevoNodoArbol = (nodoArbol*)malloc(sizeof(nodoArbol));

    nuevoNodoArbol->persona = persona;
    nuevoNodoArbol->derecha = NULL;
    nuevoNodoArbol->izquierda = NULL;

    return nuevoNodoArbol;



}

nodoArbol * agregarEnArbol(nodoArbol * arbol, nodoArbol * nuevoNodo)
{

    if(arbol== NULL)
    {

        arbol = nuevoNodo;

    }
    else
    {

        if(arbol->persona.legajo > nuevoNodo->persona.legajo)
        {

            arbol->derecha = agregarEnArbol(arbol->derecha, nuevoNodo);

        }
        else
        {

            arbol->izquierda = agregarEnArbol(arbol->izquierda, nuevoNodo);

        }
    }

    return arbol;

}
