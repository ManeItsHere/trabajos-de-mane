#include <stdio.h>

int main(void) {
    int MiNumero;
    printf("�Cu�l es su n�mero favorito? ");
    scanf("%d", &MiNumero); 

    int numerodeIteracciones = 5;
    int i;
    for (i = 0; i < numerodeIteracciones; ++i) { 
        printf("Iteraci�n n�mero: %d\n", i); 

    }
    printf("Cu�nto vale aqu� la variable i: %d\n", i);
    printf("Cu�nto vale aqu� la variable MiNumero: %d\n", MiNumero);
    printf("Cu�nto vale aqu� la variable numerodeIteracciones: %d\n", numerodeIteracciones);

    return 0;
}

