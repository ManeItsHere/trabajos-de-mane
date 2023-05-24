#include <stdio.h>

int main() {
	int num1;
	int num2;
	int suma;

	printf("Ingresa el primer numero: ");
	scanf("%i", &num1);

	printf("Ingresa el segundo numero: ");
	scanf("%i", &num2);

	suma = num1 + num2;
	printf("La suma es: %i",suma);

	return 0;
}
