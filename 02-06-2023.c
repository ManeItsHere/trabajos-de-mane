#include<stdio.h>
//calificaciones
//02-06-2023 1
//mane rm

int main() {
	float calif;
	printf("Ingresa tu calificacion: ");
	scanf("%f", &calif);

	if (calif <= 6.0) {
		printf("No aprobaste tontolin \n");
	} else {
		if (calif >= 7.0) {
			printf("¡Aprobaste felicidades!\n");
		}
	}

	return 0;
}
