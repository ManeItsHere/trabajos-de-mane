// marlene rm 06-06-2023
//imp palabra contador 5 veces

#include <stdio.h>

int main() {
    int contador = 0; // inicializo la variable

    while (contador < 5) { // prueba lógica
        contador++; // si verdadero, incrementa el contador
        printf("contador: %d\n", contador); // imprime el valor del contador
    }

    printf("Terminado. contador: %d\n", contador);

    return 0;
}
