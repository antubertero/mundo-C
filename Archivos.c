#include <stdio.h>
#include <stdlib.h>
#include "Archivos.h"
#include "Persona.h"


int cantidDeElemetnosDeArchivoStPersonas(char nombreArchi[])
{

    int rta = -1;
    FILE* archivo = fopen(nombreArchi, "rb");

    if(archivo!=NULL)
    {

        fseek(archivo, sizeof(stPersona), SEEK_END);
        long dim = ftell(archivo);
        rta = dim/sizeof(stPersona);

    }
    else
    {

        printf("el archivo no se pudo ejecutar");

    }

    return rta;


}
