#include <stdio.h>
#include <math.h>

int main() {
    double radio_tierra = 6371.0; 
    double radio_luna = 1737.1; 

    double distancia_luna = 384400.0; 

    double distancia_centros = distancia_luna - radio_tierra - radio_luna;

    printf("La distancia entre la Tierra y la Luna es de aproximadamente %.2f kilómetros.\n", distancia_centros);

    return 0;
}
