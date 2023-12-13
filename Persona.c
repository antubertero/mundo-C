#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "Persona.h"
#include "string.h"

///

//crear persona
stPersona crearPersonaAleatoria()
{

    stPersona nuevaPersona;

    nuevaPersona.edad = generarNumeroAleatorio(18, 90);
    nuevaPersona.lejago = generarNumeroAleatorio(1000, 9999);
    nuevaPersona.fondosCapital = 0;
    strcpy(nuevaPersona.nombre, generarNombreAleatorio());
    strcpy(nuevaPersona.apellido, generarApellidoAleatorio());

    return nuevaPersona;

}

//mostrar persona
void mostrarPersona(stPersona persona)
{

    printf("\nLegajo: %i\nNombre:  %s\nApellido : %s\nEdad : %i\nFonodos : %f\n", persona.lejago, persona.nombre, persona.apellido, persona.edad, persona.fondosCapital);


}

// Funciones complementarias

int generarNumeroAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

char* generarNombreAleatorio()
{
    // Lista de nombres predefinidos
    char* nombres[] = {"Juan", "Maria", "Pedro", "Ana", "Carlos", "Laura", "David", "Sofia", "Rafael", "Antu"};

    // Calcula la cantidad de nombres en el array
    int cantidadNombres = sizeof(nombres) / sizeof(nombres[0]);

    // Genera un índice aleatorio
    int indiceAleatorio = rand() % cantidadNombres;

    // Retorna el nombre correspondiente al índice aleatorio
    return nombres[indiceAleatorio];
}

char* generarApellidoAleatorio()
{
    // Lista de apellidos predefinidos
    char* apellidos[] = {"Gomez", "Rodriguez", "Fernandez", "Lopez", "Garcia", "Martinez", "Perez", "Diaz", "Bertero"};

    // Calcula la cantidad de apellidos en el array
    int cantidadNombres = sizeof(apellidos) / sizeof(apellidos[0]);

    // Genera un índice aleatorio
    int indiceAleatorio = rand() % cantidadNombres;

    // Retorna el nombre correspondiente al índice aleatorio
    return apellidos[indiceAleatorio];
}
