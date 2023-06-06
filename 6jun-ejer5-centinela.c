// marlene rm 
//enntrada de datos num centinela -1
// lo que hace el codigo es pedirte que ingreses calificaciones que se van a ir sumando y puedes dejar de agregar las calificaciones cuando ingreses el valor de centinela
#include <stdio.h>

int const centinela = -1;
int suma = 0, cuenta = 0, nota;

int main() {
    printf("Introduzca la primera nota: ");
    scanf("%d", &nota);

    while (nota != centinela) {
        cuenta++;
        suma += nota;

        printf("Introduzca la siguiente nota (o -1 para terminar): ");
        scanf("%d", &nota);
    }

    printf("Cantidad de notas ingresadas: %d\n", cuenta);
    printf("Suma de las notas: %d\n", suma);

    return 0;
}
