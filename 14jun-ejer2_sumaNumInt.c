//Mané RM  14-06-2023 ejer2
//Este programa calcula a suma de los 50 primeros num enteros


#include <stdio.h>

int main() {
	
    int n = 51;
    int suma = 0;
    
    for (int i=1; i <= n; i++)
	{
    	suma+=i;
	}

    printf("Suma de los primeros %d números enteros es: %d\n", n, suma);

    return 0;
}
