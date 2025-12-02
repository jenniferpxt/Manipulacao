#include <stdio.h>
 
int tamstring(char s[]);
 
int main(){
    char str[] = "Teste";
    if (tamstring(str) > 0)
    {
        printf("Tamanho da string: %d\n", tamstring(str));
    } else {
        return 01;
    }
}
 
int tamstring(char s[]) {
    if (s[0] == '\0') {
        return 0;
    }
    else {
        return 1 + tamstring(s + 1);
    }
}