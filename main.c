#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{

    srand(time(NULL));
    stPersona persona[100];

    for(int i = 0 ; i<100; i++){

        persona[i]=crearPersonaAleatoria();

    }

    for(int i = 0 ; i<100 ; i++){

        mostrarPersona(persona[i]);

    }


    return 0;
}
