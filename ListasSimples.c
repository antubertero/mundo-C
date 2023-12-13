#include <stdio.h>
#include <stdlib.h>
#include "ListasSimples.h"

/// LISTAS SIMPLES
/// TODA LA DATITA

// init lista

listaPersona* initListaSimplePersona()
{

    return NULL;

}

// crear nodo persona
listaPersona* crearNodoListaSimplePersona(stPersona nuevaPersona)
{

    listaPersona* nuevoNodo = (listaPersona*)malloc(sizeof(listaPersona));

    nuevoNodo->persona = nuevaPersona;
    nuevoNodo->siguiente = NULL;

    return nuevoNodo;


}
// agregar en lista

listaPersona* agregarEnListaEnOrdenPorLegajoo(listaPersona * lista, listaPersona * nuevoNodo)
{



    if(lista == NULL)
    {

        lista = nuevoNodo;

    }
    else
    {

        if(lista->persona.lejago>nuevoNodo->persona.lejago)
        {

            lista = agregarAlPrincipio(lista, nuevoNodo);

        }
        else
        {
            listaPersona * anterior = lista;
            listaPersona * seg = lista->siguiente;


            while(seg!=NULL && seg->persona.lejago<nuevoNodo->persona.lejago)
            {

                anterior = seg;
                seg = seg->siguiente;

            }

            nuevoNodo->siguiente = seg;
            anterior->siguiente = nuevoNodo;

        }
    }

    return lista;

}

listaPersona * agregarAlPrincipio(listaPersona* lista,listaPersona*  nuevoNodo)
{

    if(lista==NULL)
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

// mostrar lista

void mostrarListaSimplePerosnas(listaPersona * lista)
{

    listaPersona * listaAMostrar = lista;

    while(listaAMostrar!=NULL)
    {

        mostrarPersona(listaAMostrar->persona);
        listaAMostrar = listaAMostrar->siguiente;

    }


}

// eliminar nodo lista

listaPersona* eliminarPersonaDeLista(listaPersona* lista, int legajoElimanr)
{

    listaPersona* aux;
    listaPersona* ante;

    if((lista!=NULL) && (lista->persona.lejago == legajoElimanr))
    {

        listaPersona* aux = lista;
        lista = lista->siguiente;
        free(aux);

    }
    else
    {

        aux=lista;
        while((aux!=NULL)&&(legajoElimanr==lista->persona.lejago))
        {


            ante = aux;
            aux=aux->siguiente;

        }

        if(aux!=NULL)
        {

            ante->siguiente = aux->siguiente;
            free(aux);


        }

    }


    return lista;


}

/// archivo

// subir datos al archivo

void subirListaEnArchivo(listaPersona * lista, char nombreArchi[])
{

    FILE* archivo = fopen(nombreArchi, "ab");
    listaPersona * listtita = lista;

    if(archivo!=NULL)
    {

        while(listtita!=NULL)
        {

            fwrite(&listtita->persona, sizeof(stPersona), 1, archivo);
            listtita = listtita->siguiente;

        }
        fclose(archivo);
        printf("\ndatos cargados con exito\n");

    }
    else
    {

        printf("no se pudo abrir el archivo");

    }

}

// descargar argar datos de un archivo y subir a la lista simple

listaPersona* descarDatosArchiYSubirEnLista(char nombreArchi[])
{


    FILE* archivo = fopen(nombreArchi, "rb");
    stPersona persona;
    listaPersona* lista = initListaSimplePersona();


    if(archivo!=NULL)
    {

        listaPersona * nuevoNodo;

        while(fread(&persona, sizeof(stPersona), 1, archivo)>0)
        {

            nuevoNodo = crearNodoListaSimplePersona(persona);
            agregarEnListaEnOrdenPorLegajoo(lista, nuevoNodo);

        }

        fclose(archivo);

    }
    else
    {

        printf("/nNo se pudo abrir el archivo/n");

    }

    return lista;



}




