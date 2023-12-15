#include <stdio.h>
#include <stdlib.h>
#include "TDAarregloDeArboles.h"
#include "Persona.h"

int main()
{

    srand(time(NULL));

   celda adl[3];
   int validos = ingresarPersonaEnTDA(adl, 3);
   mostrarCeldaDeArbolesTDA(adl, 3);

    return 0;
}
