#include <stdio.h>
#include <math.h>

double calcularVolumeEsfera(double raio);

int main() {
    double raio = 5.0;
    printf("O volume da esfera e: %.2f\n", calcularVolumeEsfera(raio));
    return 0;
}

double calcularVolumeEsfera(double raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}
