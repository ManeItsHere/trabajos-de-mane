//mane rm 9jun 4  saludo

#include <stdio.h>

int main() {
    char opcion;

    do {
        puts("Hola");
        puts("¿Desea otro tipo de saludo?");
        printf("A continuación, pulse Enter: ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    puts("Adiós");

    return 0;
}

