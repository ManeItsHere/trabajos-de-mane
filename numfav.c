#include <stdio.h>

int main(void) {
    int MiNumero;
    printf("¿Cuál es su número favorito? ");
    scanf("%d", &MiNumero); 

    int numerodeIteracciones = 5;
    int i;
    for (i = 0; i < numerodeIteracciones; ++i) { 
        printf("Iteración número: %d\n", i); 

    }
    printf("Cuánto vale aquí la variable i: %d\n", i);
    printf("Cuánto vale aquí la variable MiNumero: %d\n", MiNumero);
    printf("Cuánto vale aquí la variable numerodeIteracciones: %d\n", numerodeIteracciones);

    return 0;
}

