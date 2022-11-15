#include <stdio.h>
#include <stdlib.h>

/*
Albert Alfredo Matos Abreu 2021-2289

Problema sumplementario 2.4

Construye un diagrama de flujo y el correspondiente programa en C que, al
recibir como datos de entrada tres valores enteros diferentes entre sí, determine
si los mismos están en orden creciente.
Datos : N1, N2 y N3 (variables de tipo entero que representan los datos que se
ingresan). */


int main()
{
//Variables 
int num1, num2, num3;

//Introduccion de datos
printf("Introduzca el primer valor: ");
scanf("%d", &num1);
printf("Introduzca el segundo valor: ");
scanf("%d", &num2);
printf("Introduzca el tercer valor: ");
scanf("%d", &num3);

// Operacion
if(num1 > num2 && num1 > num3)
{
    printf("El primer valor es mayor");
}
else if(num2 > num1 && num2 > num3)
{
    printf("El segundo valor es mayor");
}
else if(num3 > num1 && num3 > num2)
{
    printf("El tercer valor es mayor");
}
    return 0; //Fin
}
