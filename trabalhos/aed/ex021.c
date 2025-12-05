#include <stdio.h>

int somaAlgarismos(int num);

int main() {
    int num = 251;
    if (num <= 0) {
        printf("Numero invalido\n");
    } else {
        printf("A soma dos algarismos e: %d\n", somaAlgarismos(num));
    }
    return 0;
}

int somaAlgarismos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}
