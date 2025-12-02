#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE*arquivo_ptr;
    arquivo_ptr = fopen("dados.txt","w");

    //tratamento de erro   
    if(arquivo_ptr == NULL) {
        printf("ERRO: Não foi possivel abrir ou criar o arquivo.\n");
        exit(1);
    }
    
    printf("Arquivo aberto com sucesso !\n");

    //Operaçoes de escrita e leitura viriam aqui 

    return 0;


}