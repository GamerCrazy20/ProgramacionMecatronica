#include <stdio.h>
#include <stdlib.h>

/*
Albert Alfredo Matos Abreu 2021-2289

Problema Sumplementario 2.2

Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como dato el salario de un profesor de una universidad, calcule el incremento del
salario de acuerdo con el siguiente criterio y escriba el nuevo salario del profesor. 
Salario < $18,000 ⇒ Incremento 12%.
$18,000 <= Salario <= $30,000 ⇒ Incremento 8%.
$30,000 < Salario <= $50,000 ⇒ Incremento 7%.
$50,000 < Salario ⇒ Incremento 6%.
Dato: SAL (variable de tipo real que representa el salario del profesor). */

void main(void)
{
    //Variables
    float SAL, result;
    
    //Introduccion de datos
    printf("Introduzca el salario del profesor: $");
    scanf("%f", &SAL);

    //Operacion 
    if(SAL < 18000)
    {
        result = (SAL * 0.12) + SAL;
        printf("El salario incrementado es: %.2f", result);
    }
    
    else if(18000 <= SAL && SAL <= 30000)
    {
        result = (SAL * 0.08) + SAL;
        printf("El salario incrementado es: %.2f", result);
    }
     else if(30000 <= SAL && SAL <= 50000)
    {
        result = (SAL * 0.07) + SAL;
        printf("El salario incrementado es: %.2f", result);
    }
     else if(SAL < 50000)
    {
        result = (SAL * 0.06) + SAL;
        printf("El salario incrementado es: %.2f", result);
    }

    return 0; //Fin
}