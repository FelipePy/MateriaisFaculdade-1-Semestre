#include <stdio.h>

int main()
{
    //Ponteiros
    /*printf("Estou guardando as informações no arquivo txt...");
    FILE *pont_arq;
    pont_arq=fopen("Dados.txt", "a+"); //a+ permissão de gravação

    fprintf(pont_arq, "Teste 1\n");
    fprintf(pont_arq, "Teste 2\n");
    fprintf(pont_arq, "Teste 3\n");
    fprintf(pont_arq, "Teste 4\n");
    fprintf(pont_arq, "Teste 5\n");
    fprintf(pont_arq, "Teste 6\n");
    fprintf(pont_arq, "Teste 7\n");
    fprintf(pont_arq, "Teste 8\n");*/

    FILE *pont_arq;

    pont_arq=fopen("Dados.txt", "r"); //r permissão de leitura

    char linha[50];

    while((fgets(linha, sizeof(linha), pont_arq))!=NULL)
        printf("%s\n", linha);

    fclose(pont_arq);
}
