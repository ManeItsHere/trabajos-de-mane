
#include<stdio.h>

#define MAX_STRLEN 256

int main() {
	char alumno[MAX_STRLEN];
	int calificacion1;
	int calificacion2;
	int calificacion3;
	int calificacion4;
	int calificacion5;
	float prom;
	float x;
	do {
		x = x+1;
		printf("ingrese el nombre del alumno\n");
		scanf("%s",alumno);
		printf("ingrese calificacion 1\n");
		scanf("%i",&calificacion1);
		printf("ingrese calificacion 2\n");
		scanf("%i",&calificacion2);
		printf("ingrese calificacion 3\n");
		scanf("%i",&calificacion3);
		printf("ingrese calificacion 4\n");
		scanf("%i",&calificacion4);
		printf("ingrese calificacion 5\n");
		scanf("%i",&calificacion5);
		prom = (calificacion1+calificacion2+calificacion3+calificacion4+calificacion5)/5;
		printf("el promedio del alumno%s es:%f\n",alumno,prom);
	} while (x!=x+4);
	return 0;
}

