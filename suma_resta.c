#include <stdio.h>

int main() {
    int num1, num2;
    int opcion;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    printf("que quieres hacer? :\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            printf("la suma es: %d\n", num1 + num2);
            break;
            
        case 2:
            printf("la resta es: %d\n", num1 - num2);
            break;
            
        default:
            printf("Opción inválida\n");
            break;
    }
    
    return 0;
}

