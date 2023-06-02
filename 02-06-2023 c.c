
#include<stdio.h>
//calificaciones
//02-06-2023 1
//mane rm

int main() {
	int n1;
	int n2;
	printf("ingresA el num1\n");
	scanf("%i",&n1);
	printf("ingresa el num2\n");
	scanf("%i",&n2);
	if (n1<n2) {
		printf("el num %ies mayor que el num%i\n",n2,n1);
	} else {
	}
	if (n1>n2) {
		if (n1<n2) {
			printf("el num %ies mayor que el num%i\n",n1,n2);
		}
	}
	return 0;
}

