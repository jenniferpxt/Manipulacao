#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    int *pa = &a;
    int *pb = &b;

    printf("Endereco de a: %p\n",pa);
    printf("Endereco de b: %p\n",pb);

    if(pa > pb)
        printf("O maior endereco e o de A: %p",pa);

    else    
        printf("O maior endereco e o de B: %p",pb);
    

    return 0;
}