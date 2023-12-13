#include <stdio.h>
#include <stdlib.h>
#include "ListaDoble.h"
#include "Persona.h"

/// init nodo doble

nodoListaDoble * initListaDoble()
{

    return NULL;

}

/// crear nodo lista doble

nodoListaDoble * crearNodoDoble(stPersona persona)
{

    nodoListaDoble * nuevoNodo = (nodoListaDoble*)malloc(sizeof(nodoListaDoble));

    nuevoNodo->persona = persona;
    nuevoNodo->siguiente = NULL;
    nuevoNodo->anterior = NULL;

    return nuevoNodo;


}
/// agregar en lista doble

nodoListaDoble * agregarEnListaDobleEnOrdenPorLegajoo(nodoListaDoble * lista, nodoListaDoble * nuevoNodo)
{


    if(lista==NULL)
    {

        lista = nuevoNodo;

    }
    else
    {

        if(nuevoNodo->persona.lejago<lista->persona.lejago)
        {

            lista = agregarAlPrincipioListaDoble(lista, nuevoNodo);

        }
        else
        {

            nodoListaDoble* seg = lista->siguiente;
            nodoListaDoble* anter = lista;

            while(seg!=NULL && nuevoNodo->persona.lejago>seg->persona.lejago)
            {
                anter = seg;
                seg = seg->siguiente;

            }

            anter->siguiente= nuevoNodo;
            nuevoNodo->anterior= anter;
            nuevoNodo->siguiente= seg;
            if(seg!=NULL)
            {

                seg->anterior = nuevoNodo;

            }



        }

    }

    return lista;

}


// agregarAlPricnicpio

nodoListaDoble* agregarAlPrincipioListaDoble(nodoListaDoble* lista, nodoListaDoble* nuevoNodo)
{

    nuevoNodo->siguiente = lista;
    if(lista!=NULL)
    {

        lista->anterior= nuevoNodo;

    }
    return nuevoNodo;


}





