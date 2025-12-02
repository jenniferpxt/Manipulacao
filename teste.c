#include<stdio.h>
#include <string.h>

int main(){
    
    char str1[20];
    char str2[20];
    
    scanf("%s",str1);
    
    str1[strcspn(str1,"\n")] = '\0';

    int quant = strlen(str1);

    for(int i = 0; i < quant; i++){
        str2[i] = str1[(quant - 1)-i];
    }

    str2[quant] = '\0';

    if(strcmp(str1,str2) == 0){
        printf("A palavra e palindroma");
    }else{
        printf("A palava nao e palindroma");
    }

    return 0;
}
