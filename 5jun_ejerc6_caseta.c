#include<stdio.h>

int main() {
	int bp;
	float bpa;
	float bpm;
	float bpp;
	float total;
	int tv;
	bpp = 500;
	bpa = 600;
	bpm = 100;
	printf("que tipo de vehículo tiene?\n");
	printf("1:particular 2:autobus 3:moto\n");
	scanf("%i",&tv);
	switch (tv) {
	case 1:
		printf("particular:500$\n");
		printf("elija el billete con el que pagará 1:500  2:1000\n");
		scanf("%i",&bp);
		switch (bp) {
		case 1:
			total = 500-bpp;
			break;
		case 2:
			total = 1000-bpp;
			printf("cambio=%f\n",total);
			break;
		default:
			printf("error 1.1\n");
		}
		break;
	case 2:
		printf("autobus:600$\n");
		printf("elija el billete con el que pagará 1:500  2:1000\n");
		scanf("%i",&bp);
		switch (bp) {
		case 1:
			printf("error falta dinero\n");
			break;
		case 2:
			total = 1000-bpa;
			printf("el cambio es:%f\n",total);
			break;
		default:
			printf("error 1.2\n");
		}
		break;
	case 3:
		printf("moto:100$\n");
		printf("elija el billete con el que pagará 1:500  2:1000\n");
		scanf("%i",&bp);
		switch (bp) {
		case 1:
			total = 500-bpm;
			break;
		case 2:
			total = 100-bpm;
			printf("el cambio es:%f\n",total);
			break;
		default:
			printf("error 1.3\n");
		}
		break;
	default:
		printf("error\n");
	}
	return 0;
}

