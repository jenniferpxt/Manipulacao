#include <stdio.h>

void trocarValores(int *a, int *b);

int main() {

    int a = 10;
    double b = 0.56;
    char c = 'a';

    printf("Valores antes da troca: A = %d, B = %.2lf, C = %c\n",a,b,c);

    int *pa = &a;
    double *pb = &b;
    char *pc = &c;

    *pa = 234;
    *pb = 0.333;
    *pc = 'B';
    

    printf("Valores depois da troca: A = %d, B = %.3lf, C = %c\n",a,b,c);

    return 0;
}

