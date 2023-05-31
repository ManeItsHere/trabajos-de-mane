//imp el tamaño de valores de coma, flotante y double
//31-05-2023 d
//mane rm

#include <stdio.h>

int main(){
	int m=99, n;
	n= ++m;
	
	printf("m= %d, n=%d\n",m,n);
	n= ++m;
	printf(m= %d, n=%d\n",m,n);
	n= ++m;
	printf("m= %d, n=%d\n",m,n);
	printf("m=%d\n", m++);	
	printf("m=%d\n",++m);
return 0;
	
}
