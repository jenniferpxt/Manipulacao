#include <stdio.h>

void reverse(char s[]);

int main() {
    char texto[] = "recursao em C";

    printf("Original: %s\n", texto);
    printf("Reverso: ");
    reverse(texto);
    printf("\n");

    return 0;
}

void reverse(char s[]) {
    if (s[0] == '\0')
        return 0;

    reverse(s + 1);
    printf("%c", s[0]);
}
 