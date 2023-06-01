#include<stdio.h>

int main() {
	float hrs;
	float kw;
	int respuesta;
	float tarifa;
	hrs = 730;
	printf("selecciona tu consumo de luz\n");
	printf("1: <1000, 2:1000-1800, 3: >1850\n");
	scanf("%i",&respuesta);
	if (respuesta==1) {
		printf("tu consumo es de 1.2\n");
		kw = 1000;
	} else {
		if (respuesta==2) {
			printf("tu consumo es de 1.8\n");
			kw = 1400;
		} else {
			if (respuesta==3) {
				printf("tu consumo es de 2.1\n");
				kw = 1851;
			}
		}
	}
	tarifa = kw*hrs;
	printf("el total de hrs en el mes es de:%f\n",hrs);
	printf("la tarifa total del mes anterior es:%f\n",tarifa);
	return 0;
}
