#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

    FILE*arquivo;
    int opcao;

    while(1){
        printf("---- Seja bem vindo ao sistema PUC ----\nEscolha uma das opcoes abaixo\n");
        printf("1- Incluir novo aluno\n2- Listar todos os aluno\n3- Sair\n");

        scanf("%d",&opcao);
        getchar();
        
        if(opcao == 1){
            char nome[100];
            int idade;

            arquivo = fopen("cadastro.txt","a");
            if(arquivo == NULL) {
                printf("Erro ao abrir o arquivo para listar alunos.\n");
                return 1;
            }

            printf("Digite o nome do aluno\n");
            fgets(nome,sizeof(nome),stdin);
            nome[strcspn(nome,"\n")] = 0;
        
            printf("digite a idade do aluno\n");
            scanf("%d",&idade);
            getchar();

            fprintf(arquivo, "%s, %d\n",nome,idade);

            fclose(arquivo);
            printf("Aluno cadastrado com sucesso !\n");

        }else if(opcao == 2){
            char linha[256];
            char nome[100]  = "";
            int idade = 0;
            int resultadoLeitura;

            arquivo = fopen("cadastro.txt","r");

            if(arquivo == NULL) {
                printf("Erro ao abrir o arquivo para listar alunos\n");
                continue;
            }

            printf("--- Lista de alunos cadastrados ---\n");
            
            while(fgets(linha,sizeof(linha),arquivo) != NULL) {

                resultadoLeitura = sscanf(linha,"%[^,], %d",nome,&idade);

                if(resultadoLeitura == 2) {
                    printf("Nome: %s, Idade: %d\n",nome,idade);
                }
            }

            fclose(arquivo);

        }else if(opcao == 3){
            printf("Saindo do sistema !\n");
            break;
        }else{
            printf("Opcao inválida. Escolha uma opcao válida e tente novamente !\n");
        }

    }

    return 0;
}