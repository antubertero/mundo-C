#include <stdio.h>
#include <stdlib.h>
#include "TDAarregloDeArboles.h"
#include "Persona.h"

int main()
{

    srand(time(NULL));

   celda adl[4];
   int validos = ingresarPersonaEnTDA(adl, 4);
   mostrarCeldaDeArbolesTDA(adl, 4);

   /// modificcar dato en tda



    return 0;
}
