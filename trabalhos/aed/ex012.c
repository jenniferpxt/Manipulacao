#include <stdio.h>

int verificarNumero(int num);

int main() {
    int numero = -3;
    int resultado = verificarNumero(numero);
    
    if (resultado == 1) {
        printf("%d e positivo\n", numero);
    } else if (resultado == -1) {
        printf("%d e negativo\n", numero);
    } else {
        printf("%d e zero\n", numero);
    }
    
    return 0;
}

int verificarNumero(int num) {
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
}
