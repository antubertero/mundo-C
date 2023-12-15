#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{

    int legajo;
    char * nombre[10];
    char * apellido[10];
    int edad;
    float fondosCapital;
    int numeroDeBanco; // 1 - Banco Provincia 2 - Banco Frances 3 - Banco Santander


} stPersona;

stPersona crearPersonaAleatoria();
int generarNumeroAleatorio(int min, int max);
char* generarNombreAleatorio();
char* generarApellidoAleatorio();
void mostrarPersona(stPersona persona);


#endif // PERSONA_H_INCLUDED
