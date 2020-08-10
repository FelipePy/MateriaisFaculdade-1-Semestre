/*Construir um algoritmo que permita a entrada da idade de diversas pessoas. O algoritmo deve exibir
no final o número de pessoas com menos de 21 anos e o número de pessoas com mais de 50 anos. Uma idade
negativa encerra o algoritmo.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade=0, vinte=0, cinquenta=0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while(idade > 0)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if(idade < 21)
            vinte += 1;
        else if(idade > 50)
            cinquenta += 1;
    }
    printf("Foi digitado %d abaixo de 21 anos.\n", vinte);
    printf("Foi digitado %d acima de 50 anos.", cinquenta);
}
