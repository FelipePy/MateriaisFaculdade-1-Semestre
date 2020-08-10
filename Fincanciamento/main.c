#include <stdio.h>
#include <stdlib.h>
#include "Fincanciamento.h"

int main()
{
    float preco = 0, juros = 0;
    int parcelas = 0, resposta=0;

    do{
        printf("Digite o preco do carro: ");
        scanf("%f", &preco);

        printf("Digite o juros: ");
        scanf("%f", &juros);

        printf("Parcelamento: ");
        scanf("%d", &parcelas);

        printf("Preco final de R$%.2f\nE mensal de R$%.2f", tot(preco, parcelas, juros), tot(preco, parcelas, juros)/parcelas);

        printf("\nExistem mais parcelamentos? 1 sim / 0 nao: ");
        scanf("%d", &resposta);
        system("Pause");
        system("cls");
    }while(resposta == 1);
}
