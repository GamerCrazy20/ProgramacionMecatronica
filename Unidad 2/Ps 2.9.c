#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(void)
{
    float MED, VAL;
    int num;

    printf("Selecciona la conversion \n 1. Pulgada a milimetros \n 2. Yarda a metros \n 3. Milla a Kilometros\n");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
        printf("\nIntroduzaca el valor de Pulgada que desea convertir: ");
        scanf("%f", &MED);
        VAL = MED * 25.40;
        printf("%.2f Pulgadas es igual a %.2f Milimetros", MED, VAL);
        break;

        case 2:
        printf("\nIntroduzaca el valor de Yalda que desea convertir: ");
        scanf("%f", &MED);
        VAL = MED * 0.9114;
        printf("%.2f Yarda es igual a %.f Metros", MED, VAL);
        break;

        case 3:
        printf("\nIntroduzaca el valor de Milla que desea convertir: ");
        scanf("%f", &MED);
        VAL = MED * 1.6093;
        printf("%.2f Milla es igual a %f Kilometros", MED, VAL);
        break;

        default:
		printf("No selecionaste una conversion \n");
        
        return 0; 
    }
    
    
    
    

}