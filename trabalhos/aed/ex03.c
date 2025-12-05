#include <stdio.h>

int main() {

    int a, b;
    int *p1 = &a, *p2 = &b;

    scanf("%d %d", &a, &b);

    if (p1 > p2)
        printf("%d\n", *p1);
    else
        printf("%d\n", *p2);
    
    return 0;
}
