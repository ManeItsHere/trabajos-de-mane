#include <stdio.h>

int Primo(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int numero;
    int centinela = 0;
    
    while (centinela != 1) {
        printf("Ingrese un num: ");
        scanf("%d", &numero);
        
        printf("%d %s num primo.\n", numero, Primo(numero) ? "es" : "no es");
        
        printf("ingrese otro num: (centinela=1) ");
        scanf("%d", &centinela);
    }
    
    return 0;
}
