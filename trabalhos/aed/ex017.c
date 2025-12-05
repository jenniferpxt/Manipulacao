#include <stdio.h>
#include <math.h>

double calcularHipotenusa(double a, double b);

int main() {
    double a = 3.0, b = 4.0;
    printf("A hipotenusa e: %.2f\n", calcularHipotenusa(a, b));
    return 0;
}

double calcularHipotenusa(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}
