#include <stdio.h>
#include <stdlib.h>
/*
Albert Alfredo Matos Abreu 2021-2289

Problema suplementario 2.3

Construye un diagrama de flujo y el correspondiente programa en C que determine,
al recibir como datos dos números enteros, si un número es divisor de otro.
Datos: N1 y N2 (variables de tipo entero que representan los datos que se ingresan) */

int main()
{
    //Variables
    int num1;
    int num2;

    //Introduccion de los valores
    printf("Introduzca el primer numero: ");
    scanf("%d", &num1);

    printf("Introduzca el primer numero: ");
    scanf("%d", &num2);

    //Operaciones
    if(num1 % num2 == 0)
    {
    printf("El numero 1 es divisible con numero 2\n");
    }
    else 
    if(num2 % num1 == 0)
    {
    printf("El numero 2 es divisible con numero 1");
    }
    
    return 0; //Fin
}

