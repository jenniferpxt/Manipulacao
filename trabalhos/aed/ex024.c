#include <stdio.h>

int verificarTriangulo(double a, double b, double c);
void tipoTriangulo(double a, double b, double c);

int main() {
    double a, b, c;

    printf("Digite os tres lados do triangulo (maiores que zero): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Valores invalidos. Todos os lados devem ser maiores que zero.\n");
        return 1;
    }

    if (verificarTriangulo(a, b, c)) {
        tipoTriangulo(a, b, c);
    } else {
        printf("Nao forma um triangulo valido.\n");
    }

    return 0;
}

int verificarTriangulo(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

void tipoTriangulo(double a, double b, double c) {
    if (a == b && b == c) {
        printf("Triangulo equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo isosceles\n");
    } else {
        printf("Triangulo escaleno\n");
    }
}
