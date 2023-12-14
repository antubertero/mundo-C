#include <stdio.h>
#include <stdlib.h>
#include "ArbolPersonas.h"
#include "Persona.h"

// init arbol

nodoArbol * initArbol()
{

    return NULL;

}

// crear nodo persona

nodoArbol * crearNodoArbolPersona(stPersona persona)
{

    nodoArbol * nuevoNodoArbol = (nodoArbol*)malloc(sizeof(nodoArbol));

    nuevoNodoArbol->persona = persona;
    nuevoNodoArbol->derecha = NULL;
    nuevoNodoArbol->izquierda = NULL;

    return nuevoNodoArbol;



}

// agregar en arbol de forma recursiva

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

// buscar nodo arbol

nodoArbol * busquedaDePersonaEnArbol(nodoArbol * arbool, int legajoBuscado)
{

    nodoArbol * rta = NULL;

    if(arbool->persona.legajo == legajoBuscado)
    {

        rta = arbool;

    }
    else
    {

        if(legajoBuscado>arbool->persona.legajo)
        {

            rta = busquedaDePersonaEnArbol(arbool->derecha, legajoBuscado);

        }
        else
        {

            rta = busquedaDePersonaEnArbol(arbool->izquierda, legajoBuscado);

        }

    }


    return rta;


}

// mostrar arbol

// pre orden
void mostrarArbolPreOrden(nodoArbol * arbol)
{

    if(arbol!=NULL)
    {

        mostrarPersona(arbol->persona);
        mostrarArbolPreOrden(arbol->izquierda);
        mostrarArbolPreOrden(arbol->derecha);

    }
}

// in orden

void mostrarArbolInOrden(nodoArbol * arbol)
{

    if(arbol !=NULL)
    {

        mostrarArbolInOrden(arbol->izquierda);
        mostrarPersona(arbol->persona);
        mostrarArbolInOrden(arbol->izquierda);


    }
}

// post orden

void mostrarArbolPosOrden(nodoArbol * arbol)
{

    if(arbol!=NULL)
    {

        mostrarArbolPosOrden(arbol->izquierda);
        mostrarArbolPosOrden(arbol->derecha);
        mostrarPersona(arbol->persona);

    }
}

