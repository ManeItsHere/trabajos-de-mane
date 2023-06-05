//un valor de tipo int
//31-05-2023 f 
//mane rm

#include <stdio.h>

int main() {
    int opcion;
    scanf("%i", &opcion);

    switch (opcion) {
        case 0:
        case 1:
        case 2:
            printf("Menor a tres...\n");
            break;
        case 3:
            puts("Igual a tres");
            break;
        default:
            puts("Fuera de rango");
    }

    return 0;
}

