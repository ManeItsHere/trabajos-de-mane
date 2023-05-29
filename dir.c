#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    FILE *archivo;
    char direccion[MAX_LENGTH];

    archivo = fopen("direccion.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    
    fgets(direccion, MAX_LENGTH, archivo);
    fclose(archivo);
    printf("Direcci�n: %s\n", direccion);

    return 0;
}
