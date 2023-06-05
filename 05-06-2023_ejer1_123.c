//depurary describir codigo 
//31-05-2023 f 
//mane rm

#include <stdio.h>

int main()
{
    int opcion;
    
    printf("Ingrese un número (0-3): ");
    scanf("%d", &opcion);
    
    switch (opcion)
    {
        case 0:
            puts("cero");
            break;
        case 1:
            puts("uno");
            break;
        case 2:
            puts("dos");
            break;
        case 3:
            puts("tres");
            break;
        default:
            puts("fuera de rango");
    }
    
    return 0;
}

