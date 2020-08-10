#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Rodoviaria.h"

int main()
{
    int cliente, quantidade=0, partida=0, chegada, opcao, fim=0, compra;
    char pedido[30], rever[30], txt[] = ".txt";
    double total;
    while(fim == 0){
        printf("\nCodigo da passagem. 0 caso nao tenha cliente: "); //Não use valores repetidos, ou ele ira sobrepor em um arquivo ja criado
        scanf(" %[^\n]s", &pedido);

        if (strcasecmp(pedido, "0")==0)
            break;

        tabela();
        printf("\n\nDigite a cidade de partida: ");
        while(partida < 1 || partida > 7){
            scanf("%d", &partida);
            if(partida < 1 || partida > 7)
                printf("Opcao incorreta, tente novamente.\n");
        }

        printf("Digite a cidade de chegada: ");
        while(chegada < 1 || chegada > 7){
            scanf("%d", &chegada);
            if(chegada < 1 || chegada > 7)
                printf("Opcao incorreta, tente novamente.\n");
        }

        if(partida == chegada){
            printf("Digitacao incorreta. Voce ja esta nesta cidade\n");
            system("Pause");
            system("cls");
            strncat(pedido, txt, 4);
            FILE *rodoviaria;
            rodoviaria=fopen(pedido, "a+");
            fprintf(rodoviaria, "Erro no codigo\nCidade de origem == cidade de chegada.\n");
            fclose(rodoviaria);
            break;
        }

        total = TabelaPrecos(partida, chegada, quantidade);
        printf("\nPreco da passagem: R$%.2f\n", total);

        printf("Quantas passagens deseja: ");
        scanf("%d", &quantidade);

        TabelaH();
        printf("|Opcao:                              |");
        printf("\n|____________________________________|");
        while(opcao < 1 || opcao > 4){
            scanf("%d", &opcao);
            if(opcao < 1 || opcao > 4)
                printf("Opcao incorreta, tente novamente.");
        }

        Viagem(partida, chegada, total, quantidade, opcao, pedido);
        printf("DESEJA REALIZAR A COMPRA? 1P/S QUALQUER NUMERO PARA NAO: ");
        scanf("%d", &compra);
        compraR(compra, pedido);

        reverpedido();

        printf("Digite 0 para novas compras ou 1 para encerrar o programa: ");
        scanf("%d", &fim);
        system("Pause");
        system("cls");
        partida = "";
        chegada = "";
        opcao = "";
        compra = "";
    }
    reverpedido();

}
