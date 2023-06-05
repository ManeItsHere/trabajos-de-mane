
//char o vocal
//31-05-2023 f 
//mane rm#include <stdio.h>

int main() {
    char car;
    printf("Ingrese un carácter: ");
    scanf("%c", &car);

    if ((car == 'a') || (car == 'A'))
        printf("%c es una vocal\n", car);
    else if ((car == 'b') || (car == 'B'))
        printf("%c es una vocal\n", car);
    else if ((car == 'c') || (car == 'C'))
        printf("%c es una vocal\n", car);

    return 0;
}

