// marlene rm  06-06-2023 calorias

#include <stdio.h>

int main() {
    int num_de_elementos, cuenta, calorias_por_alimentos, calorias_total;
    
    printf("�Cu�ntos alimentos ha comido hoy? ");
    scanf("%d", &num_de_elementos);
    
    calorias_total = 0;
    cuenta = 1;
    
    printf("Introducir el n�mero de calor�as de cada uno de los %d alimentos tomados:\n", num_de_elementos);
    
    while (cuenta <= num_de_elementos) {
        scanf("%d", &calorias_por_alimentos);
        calorias_total += calorias_por_alimentos;
        cuenta++;
    }
    
    printf("Las calor�as totales consumidas hoy son: %d\n", calorias_total);
    
    return 0;
}
