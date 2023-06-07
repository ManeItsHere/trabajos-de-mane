// marlene rm 07-06-23
// el programate pide 6 numeros, los suma y saca el promedio 
#include <stdio.h>

int main()
{
    int contador = 1;
    float num1, num2, num3, num4, num5, num6;
    float media;

    scanf("%f %f %f %f %f %f", &num1, &num2, &num3, &num4, &num5, &num6);

    media = (num1 + num2 + num3 + num4 + num5 + num6) / 6;

    printf("%.2f\n", media);

    return 0;
}

