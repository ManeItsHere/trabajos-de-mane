#include <stdio.h>
//mane rm 9jun  2
// factorial

int main() {
    long int n, m, fact;

    do {
        printf("\nIngrese el factorial de n (entre 2 y 20): ");
        scanf("%ld", &n);
    } while (n < 2 || n > 20);

    m = n;
    fact = 1;

    while (n > 1) {
        fact *= n;
        n--;
    }

    printf("%ld! = %ld\n", m, fact);

    return 0;
}

