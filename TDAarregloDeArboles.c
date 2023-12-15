#include <stdio.h>
#include <stdlib.h>
#include "TDAarregloDeArboles.h"


/// ingrear persona en TDA

int ingresarPersonaEnTDA(celda arregloArbolTDA[], int dim)
{

    int validos = 0;
    stPersona persona;
    int i = 0;
    while((i<100)&&(validos<dim))
    {

        persona = crearPersonaAleatoria();
        alta(arregloArbolTDA, persona, validos);
        i++;
    }

    return validos;


}

/// alta

int alta(celda arregloArbolTDA[], stPersona persona, int validos)
{

    nodoArbol * aux = crearNodoArbolPersona(persona);
    int pos = buescarPosCuentaBancariaCeldaTDA(arregloArbolTDA, persona.numeroDeBanco, validos);

    if(pos == -1)
    {

        validos = agregarNombreBanco(arregloArbolTDA, persona.numeroDeBanco, validos);
        pos = validos-1;

    }
    arregloArbolTDA[pos].arbol = agregarEnArbol(arregloArbolTDA[pos].arbol, aux);

    return validos;


}

int buescarPosCuentaBancariaCeldaTDA(celda arregloArbolTDA[], int numeroDeBanco,int validos)
{

    int rta = -1;
    int i = 0;
    while((i<validos)&&(rta == -1))
    {

        if(arregloArbolTDA[i].BancoAsociado == numeroDeBanco)
        {

            rta = i;

        }

        i++;

    }

    return rta;

}

int agregarNombreBanco(celda arregloArbolTDA[], int numeroDeBanco,int validos)
{

    arregloArbolTDA[validos].BancoAsociado = numeroDeBanco; // copiar cuenta bancaria
    arregloArbolTDA[validos].arbol = initArbol();
    validos++;

    return validos;

}


/// mostrar TDA

void mostrarCeldaDeArbolesTDA(celda arregloArbolTDA[], int dim)
{

    for(int i = 0 ; i<dim ; i++)
    {

        printf("\n CELDA %i\n\n", i+1);
        mostrarArbolInOrden(arregloArbolTDA[i].arbol);


    }


}

