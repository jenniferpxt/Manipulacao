#include <stdio.h>

double calcularMedia(int n1, int n2, int n3, char tipo);

int main() {
    int n1 = 7, n2 = 8, n3 = 6;
    char tipo = 'P'; // Pode ser 'A' para aritmetica ou 'P' para ponderada
    printf("A media e: %.2f\n", calcularMedia(n1, n2, n3, tipo));
    return 0;
}

double calcularMedia(int n1, int n2, int n3, char tipo) {
    if (tipo == 'A') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    }
    return 0;
}
