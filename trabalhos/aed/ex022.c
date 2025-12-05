#include <stdio.h>

double realizarOperacao(double num1, double num2, char operacao);

int main() {
    double num1 = 10, num2 = 5;
    char operacao = '+';
    printf("Resultado da operacao: %.2f\n", realizarOperacao(num1, num2, operacao));
    return 0;
}

double realizarOperacao(double num1, double num2, char operacao) {
    if (operacao == '+') {
        return num1 + num2;
    } else if (operacao == '-') {
        return num1 - num2;
    } else if (operacao == '*') {
        return num1 * num2;
    } else if (operacao == '/') {
        return num2 != 0 ? num1 / num2 : 0;
    }
    return 0;
}
