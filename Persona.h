#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{

    int lejago;
    char * nombre[10];
    char * apellido[10];
    int edad;
    float fondosCapital;


} stPersona;

stPersona crearPersonaAleatoria();
int generarNumeroAleatorio(int min, int max);
char* generarNombreAleatorio();
char* generarApellidoAleatorio();
void mostrarPersona(stPersona persona);


#endif // PERSONA_H_INCLUDED