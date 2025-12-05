#include <stdio.h>

void ordena(int *x, int *y) {
    if (*x < *y) {
        int t = *x;
        *x = *y;
        *y = t;
    }
}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    ordena(&a, &b);

    printf("%d %d\n", a, b);
    
    return 0;
}
