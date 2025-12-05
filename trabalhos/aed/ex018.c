#include <stdio.h>
#include <math.h>

double calcularVolumeCilindro(double raio, double altura);

int main() {
    double raio = 3.0, altura = 5.0;
    printf("O volume do cilindro e: %.2f\n", calcularVolumeCilindro(raio, altura));
    return 0;
}

double calcularVolumeCilindro(double raio, double altura) {
    return M_PI * pow(raio, 2) * altura;
}
