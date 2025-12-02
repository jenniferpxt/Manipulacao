#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE*fp = fopen("lista_alunos.txt","w"); //w cria/sobrescreve

    if(fp == NULL) {
        printf("Erro ao abrir o arquivo para a escrita.\n");
        return 1;
    }

    char nome[] = "Maria Silva";
    int matricula = 12345;
    float nota = 9.5;   

    //Escrega a String
    fputs("Relatorio de notas\n",fp);

    //Escreve dados formatados(como um printf, mas para o arquivo)
    fprintf(fp, "Nome: %s, Matricula: %d, Nota: %.1lf\n",nome,matricula,nota);

    fclose(fp);
    printf("Dados escritos em lista_alunos.txt.\n");
    
    return 0;
}