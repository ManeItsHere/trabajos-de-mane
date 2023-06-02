#include<stdio.h>

int main() {
	int num;
	printf("ingresa un num\n");
	scanf("%i",&num);
	if (num<0) {
		printf("num es menor a 0\n");
	} else {
		if (num==0) {
			printf("num es igual a 0\n");
		} else {
			if (num>0) {
				printf("num es mayor a cero\n");
			}
		}
	}
	return 0;
}

