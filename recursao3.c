#include <stdio.h>

int caract(char c, char s[]);

int main() {
    char texto[] = "o rato roeu a roupa do rei de roma";
    char busca = 'o';

    int resultado = caract(busca, texto);

    printf("O caractere '%c' aparece %d vezes.\n", busca, resultado);

    return 0;
}

int caract(char c, char s[]) {
    if (s[0] == '\0')
        return 0;

    
    int conta = (s[0] == c) ? 1 : 0;

    
    return conta + caract(c, s + 1);
}