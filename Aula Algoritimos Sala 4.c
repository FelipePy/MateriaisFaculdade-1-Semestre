#include <stdio.h>
#include <locale.h>

int main()
{
    //COMO LER UM NOME INTEIRO MESMO CONTENDO ESPA�O
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
        printf("voc� digitou a letra a");
        break; //saia da estrutura e encerra o programa

    case 'b':
        printf("Voc� digitou a letra b");
        break;

    case '1':
        printf("Voce digitou o numero 1");
        break;

    default: //Como se fosse o se nao
        printf("Voc� n�o digitou nenhum valor programado.");
    }
}
