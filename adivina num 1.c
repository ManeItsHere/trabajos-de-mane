
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int num;
	float x;
	num = (rand()%10);
	printf("num de intentos=3\n");
	printf("el num secreto está listo\n");
	do {
		x = x+1;
		printf("ingresa tu intento\n");
		scanf("%i",&n);
		if (n>num) {
			printf("ya te pasaste\n");
		}
		if (n<num) {
			printf("te falta para llegar\n");
		}
		if (n==num) {
			printf("yesssssiiiiiirrr\n");
		}
	} while (x!=3);
	return 0;
}

