#include<stdio.h>

int main() {
	int cociente;
	int dividendo;
	int divisor;
	int resto;
	printf("dividendo: \n");
	scanf("%i",&dividendo);
	printf("divisor: \n");
	scanf("%i",&divisor);
	cociente = dividendo/divisor;
	resto = dividendo%divisor;
	printf("Cociente: %i\n",cociente);
	printf("Resto: %i\n",resto);
	if (resto==0) {
		printf("El número es divisible.\n");
	} else {
		printf("El número no es divisible.\n");
	}
	return 0;
}

