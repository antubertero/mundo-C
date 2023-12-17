#include <stdio.h>
#include <stdlib.h>
#include "TDAlistasDeListas.h"

nodoListaSimpleTDA * altaListaTDA(nodoListaSimpleTDA* lista, stPersona persona)
{

    listaPersona * nuevoNodo = crearNodoListaSimplePersona(persona);
    nodoListaSimpleTDA * listaBanco = buscarPosListaTDA(lista, persona.numeroDeBanco);

    if(listaBanco == NULL)
    {

        nodoListaSimpleTDA* NodoBancoNuevo =crearNodoBanco(persona.numeroDeBanco);
        lista = agregarAlPrincipio(lista, NodoBancoNuevo);
        listaBanco = lista;
    }
    listaBanco->listaP = agregarAlPrincipio(listaBanco->listaP, nuevoNodo);

    return listaBanco;



}

/// buscar pos

nodoListaSimpleTDA * buscarPosListaTDA(nodoListaSimpleTDA * lista, int cuentaBancaria)
{

    nodoListaSimpleTDA * rta = NULL;
    nodoListaSimpleTDA * seg = lista;
    int flag = 0;



    while(seg != NULL && flag == 0)
    {

        if(seg->BancoAsociado == cuentaBancaria)
        {

            rta = seg;
            flag = 1;

        }

        seg = seg->siguiente;


    }


    return rta;


}

/// funciones listas

// crearNodoCuentaBancaria

nodoListaSimpleTDA * crearNodoBanco(int numero)
{

    nodoListaSimpleTDA * nuevoNodo = (nodoListaSimpleTDA*)malloc(sizeof(nodoListaSimpleTDA));


    nuevoNodo->BancoAsociado = numero;
    nuevoNodo->listaP = initListaSimplePersona();
    nuevoNodo->siguiente = NULL;

    return nuevoNodo;

}

nodoListaSimpleTDA * agregarAlPrincipioBanco(nodoListaSimpleTDA* lista, nodoListaSimpleTDA * nuevoNodo)
{

    if(lista == NULL)
    {

        lista = nuevoNodo;

    }
    else
    {


        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;


    }

    return lista;

}



