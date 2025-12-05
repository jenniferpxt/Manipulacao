#include <stdio.h>

void dobrar(int *num);

int main() {
    int numero = 5;
    dobrar(&numero);
    printf("O dobro e %d\n", numero);
    return 0;
}

void dobrar(int *num) {
    *num = *num * 2;
}
