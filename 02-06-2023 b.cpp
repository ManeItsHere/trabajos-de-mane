#include <stdio.h>
//determinar si un num es divisibvle
//02-06-2023 
//mane rm

int main() {
    int a, b, c;
    printf(" escribe 2 n�meros: \n");
    scanf("%d%d", &a, &b);
    c = a % b;
    if (b < a && c == 0) {
        printf("si es divisible \n");
    }

    return 0;
}

