#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE*fp = fopen("lista_alunos.txt","r"); //"r" modo leitura
    char linha[100]; //Buffer para armazenar cada linha 

    if(fp == NULL) {
        printf("Erro: Arquivo de leitura nao encontrado ou erro de leitura.\n");
        return 1;
    }

    printf("\n--- Conteudo do arquivo ---\n");

    //Loop que le linha por linha 
    //fgets(buffer,tamanho_max,ponteiro_arquivo)

    while(fgets(linha,sizeof(linha),fp) != NULL) {
        //Imprime a linha lida na tela 
        printf("%s",linha);
        printf("--------------------------\n");

        fclose(fp);
        return 0;
    }
}