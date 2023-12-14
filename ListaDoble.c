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

        if(nuevoNodo->persona.legajo<lista->persona.legajo)
        {

            lista = agregarAlPrincipioListaDoble(lista, nuevoNodo);

        }
        else
        {

            nodoListaDoble* seg = lista->siguiente;
            nodoListaDoble* anter = lista;

            while(seg!=NULL && nuevoNodo->persona.legajo>seg->persona.legajo)
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

// eliminar nodo lista

nodoListaDoble * eliminarNodoListasDobles(nodoListaDoble * lista, int legajoElimanr)
{

    nodoListaDoble * seg;
    nodoListaDoble * ante;

    if(lista!=NULL)
    {

        if(lista->persona.legajo == legajoElimanr)
        {

            nodoListaDoble * aBorrar = lista;
            lista = lista->siguiente;
            if(lista!=NULL)
            {

                lista->anterior = NULL;

            }
            free(aBorrar);

        }
        else
        {

            seg = lista->siguiente;
            while((seg!=NULL) && lista->persona.legajo == legajoElimanr)
            {

                ante = seg;
                seg = seg->siguiente;

            }

            if(seg!=NULL)
            {

                ante->siguiente = seg->siguiente;
                free(seg);

            }

        }

    }

    return lista;

}

// mostrar lista

void mostrarListaDoblePersonas(nodoListaDoble * lista)
{

    nodoListaDoble * listaMostrar = lista;

    if(listaMostrar != NULL)
    {

        while(listaMostrar!=NULL)
        {

            mostrarPersona(listaMostrar->persona);
            listaMostrar = listaMostrar->siguiente;

        }

    }
    else
    {

        printf("\nLA LISTA NO TIENE ELEMENTOS");

    }

}

/// archivo

// subir datos al archivo

void subirListaDobleEnArchivo(nodoListaDoble * lista, char nombreArchivo[])
{

    if(lista!=NULL)
    {

        FILE * archivo = fopen(nombreArchivo, "ab");


        if(archivo!=NULL)
        {
            printf("\nLISTA");

            while(lista!=NULL)
            {

                fwrite(&lista->persona, sizeof(stPersona), 1, archivo);
                lista = lista->siguiente;

            }

            fclose(archivo);

        }
        else
        {

            printf("\nEl archivo no se pudo abrir el archivo");

        }

    }
    else
    {

        printf("La lista no tiene elementos ");

    }



}

// descargar argar datos de un archivo y subir a la lista simple

void descargarDatosArchiYSubirEnListaDoble(nodoListaDoble * lista, char nombreArchivo[])
{

    FILE* archivo = fopen(nombreArchivo, "rb");
    stPersona persona;
    nodoListaDoble * nuevoNodo;

    if(archivo!=NULL)
    {

        while(fread(&persona, sizeof(stPersona), 1, archivo)>0)
        {

            nuevoNodo = crearNodoDoble(persona);
            lista = agregarEnListaDobleEnOrdenPorLegajoo(lista, nuevoNodo);

        }

        fclose(archivo);

    }
    else
    {

        printf("\nEl archivo no se pudo abrir");

    }



}
