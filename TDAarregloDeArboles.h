#ifndef TDAARREGLODEARBOLES_H_INCLUDED
#define TDAARREGLODEARBOLES_H_INCLUDED
#include "ArbolPersonas.h"
#include "Persona.h"

typedef struct
{
/// la forma en que se ordenan los clientes es:
    /*
        tipo de banco asociado
        dento de cada banco se encuentra cada cliente
    */
    int BancoAsociado;
    nodoArbol * arbol;

} celda;

#endif // TDAARREGLODEARBOLES_H_INCLUDED
