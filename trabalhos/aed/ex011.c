#include <stdio.h>

void exibirData(int dia, int mes, int ano);

int main() {
    int dia,mes,ano;

    scanf("%d/%d/%d",&dia,&mes,&ano);

    exibirData(dia, mes, ano);
    return 0;
}

void exibirData(int dia, int mes, int ano) {
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho", 
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    printf("%d de %s de %d\n", dia, meses[mes-1], ano);
}
