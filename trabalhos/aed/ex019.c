#include <stdio.h>

int maiorNumero(int a, int b);

int main() {
    int a = 10, b = 20;
    printf("O maior numero e: %d\n", maiorNumero(a, b));
    return 0;
}

int maiorNumero(int a, int b) {
    return (a > b) ? a : b;
}
