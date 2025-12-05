#include <stdio.h>

int somaDobro(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int s = somaDobro(&a, &b);
    printf("%d %d\n", a, b);
    printf("%d\n", s);
    return 0;
}
