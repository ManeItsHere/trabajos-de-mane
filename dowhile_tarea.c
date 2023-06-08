//marlene rm   jun8
//tarea do while ejemplo

#include <stdio.h>

int main() {
    int numero;
    
    do {
        printf("num mayor que cero: ");
        scanf("%d", &numero);
    } while (numero <= 0);
    
    printf("El num ingresado es: %d\n", numero);
    
    return 0;
}
