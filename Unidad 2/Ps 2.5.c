#include <stdio.h>
#include <stdlib.h>

/*
Albert Alfredo Matos Abreu 2021-2289

Problema Sumplementario 2.5

En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de
acuerdo con el monto de su compra. El criterio para establecer el descuento se
muestra abajo. Construye un diagrama de flujo y el correspondiente programa en
C que, al recibir como dato el monto de la compra del cliente, obtenga el precio
real que debe pagar luego de aplicar el descuento correspondiente. 
Compra < $800 ⇒ Descuento 0%.
$800 <= Compra <= $1500 ⇒ Descuento 10%.
$1500 < Compra <= $5000 ⇒ Descuento 15%.
$5000 < Compra ⇒ Descuento 20%.
Dato: COM (variable de tipo real que representa el monto de la compra).
 */

void main(void)
{
    //Variables
    float COM, result;
    
    //Introduccion de datos
    printf("Introduzca el monto de su compra: $");
    scanf("%f", &COM);

    //Operacion 
    if(COM < 800)
    {
        printf("El monto a pagar es: %.2f", COM);
    }
    
    else if(800 <= COM && COM <= 1500)
    {
        result = COM - (COM * 0.10);
        printf("El monto a pagar es: %.2f", result);
    }
     else if(1500 < COM && COM <= 5000)
    {
        result = COM - (COM * 0.15);
        printf("El monto a pagar es: %.2f", result);
    }
     else if(5000 < COM)
    {
        result = COM - (COM * 0.20);
        printf("El monto a pagar es: %.2f", result);
    }

    return 0; //Fin
}