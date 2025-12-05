#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos);

int main() {
    int horas = 2, minutos = 30, segundos = 45;
    printf("O total de segundos e: %d\n", converterParaSegundos(horas, minutos, segundos));
    return 0;
}

int converterParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}
