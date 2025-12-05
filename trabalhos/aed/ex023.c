#include <stdio.h>

void calcularConsumo(double distancia, double litros);

int main() {
    double distancia = 100.0, litros = 7.0; // Exemplo
    calcularConsumo(distancia, litros);
    return 0;
}

void calcularConsumo(double distancia, double litros) {
    double consumo = distancia / litros;
    
    if (consumo < 8) {
        printf("Venda o carro\n");
    } else if (consumo >= 8 && consumo <= 14) {
        printf("Economico\n");
    } else if (consumo > 12) {
        printf("Super economico\n");
    }
}
