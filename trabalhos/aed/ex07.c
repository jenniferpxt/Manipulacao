#include <stdio.h>

void somaNoA(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    somaNoA(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
