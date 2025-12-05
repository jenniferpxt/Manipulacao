#include <stdio.h>

double celsiusParaFahrenheit(double celsius);

int main() {
    double celsius = 25.0;
    printf("A temperatura em Fahrenheit e: %.2f\n", celsiusParaFahrenheit(celsius));
    return 0;
}

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
