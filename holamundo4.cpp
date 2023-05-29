#include <stdio.h>

int main(void) {
    char *palabra[] = {"holamundo", "holamundo2", "holamundo3", "holamundo4"};
    int tam = sizeof(palabra) / sizeof(char *);

    for (int i = 0; i < tam; ++i)
        printf("%s\n", palabra[i]);

    return 0;
}
