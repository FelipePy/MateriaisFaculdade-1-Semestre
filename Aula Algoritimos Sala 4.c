#include <stdio.h>
#include <locale.h>

int main()
{
    //COMO LER UM NOME INTEIRO MESMO CONTENDO ESPAÇO
    setlocale(LC_ALL, "Portuguese");
    /*char nome[50];

    printf("Digite seu nome: ");
    gets(nome);

    printf("Tenha um bom dia %s.", nome);
    return 0;*/

    //OUTRA MODULO QUE SE PARECE COM O IF
    char nome=' ';
    printf("Digite uma letra: ");
    scanf("%c", &nome);
    switch(nome){
    case 'a': //Caso for verdadeiro ele executa *use valores inteiros e exatos*
        printf("você digitou a letra a");
        break; //saia da estrutura e encerra o programa

    case 'b':
        printf("Você digitou a letra b");
        break;

    case '1':
        printf("Voce digitou o numero 1");
        break;

    default: //Como se fosse o se nao
        printf("Você não digitou nenhum valor programado.");
    }
}
