#include <stdio.h>
#include <stdlib.h>

/*El número de sonidos emitidos por un grillo en un minuto es una función de la
temperatura. Es posible entonces determinar el nivel de la temperatura utilizando un grillo como termómetro. Construye un diagrama de flujo y el
correspondiente programa en C que calcule la temperatura con base en el número
de sonidos emitidos por el grillo.

FA = S / 4 + 40


Donde: FA representa la temperatura en grados Fahrenheit y S el número de
sonidos emitidos por minuto.

Dato: S (variable de tipo entero que representa el número de sonidos emitidos
por el grillo). 
*/
int main (void)
{
    //Variables
    float SPM;
    float temperatura;

    //Introduccion de sonidos por minutos

    printf ("Ingresa el valor de sonidos por minuto: ");
    scanf ("%f", &SPM);

    // Operacion del programa
    temperatura = SPM /4+40;
    printf ("Valor de temperatura: %.2f\n", temperatura);

    return 0;
}