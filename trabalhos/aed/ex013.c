#include <stdio.h>
#include <math.h>

int quadradoPerfeito(int *num);

int main() {
    int numero = 16;
    if (quadradoPerfeito(&numero)) {
        printf("%d e um quadrado perfeito\n", numero);
    } else {
        printf("%d não e um quadrado perfeito\n", numero);
    }
    return 0;
}

int quadradoPerfeito(int *num) {
    if (*num < 0) {
        return 0;
    }
    int raiz = sqrt(*num);
    return (raiz * raiz == *num);
}
