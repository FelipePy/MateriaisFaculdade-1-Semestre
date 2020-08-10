#include <stdio.h>
#include <string.h>

void Viagem(int a, int b, double preco, int quanti, int H, char *Narquivotxt)
{

    system("cls");
    int horaI, horarioF;
    switch(H){
    case 1:
        horaI = 10;
        break;
    case 2:
        horaI = 14;
        break;
    case 3:
        horaI = 17;
        break;
    case 4:
        horaI = 20;
        break;
    }

    if(a == 1 && b == 2 && H == 1)
        horarioF = 15;

    switch(a){
    case 1:
        a = "Cruzeiro";
        break;

    case 2:
        a = "Areias";
        break;
    case 3:
        a = "Bananal";
        break;

    case 4:
        a = "Lorena";
        break;

    case 5:
        a = "Sao Jose dos Campos";
        break;


    case 6:
        a = "Queluz";
        break;


    case 7:
        a = "Guaratingueta";
        break;
    }

    switch(b){
    case 1:
        b = "Cruzeiro";
        break;

    case 2:
        b = "Areias";
        break;

    case 3:
        b = "Bananal";
        break;

    case 4:
        b = "Lorena";
        break;

    case 5:
        b = "Sao Jose dos Campos";
        break;

    case 6:
        b = "Queluz";
        break;

    case 7:
        b = "Guaratingueta";
        break;
    }

    char txt[] = ".txt";
    strncat(Narquivotxt, txt, 4);

    FILE *rodoviaria;
    rodoviaria=fopen(Narquivotxt, "a+"); //"a+" envia algo para um arquivo txt
    int compra;

    fprintf(rodoviaria, "_________________________________\n");
    fprintf(rodoviaria, "|Origem: %s                        \n", a);
    fprintf(rodoviaria, "|Destino: %s                       \n", b);
    fprintf(rodoviaria, "|Preco da passagem: R$%.2f         \n", preco);
    fprintf(rodoviaria, "|Total de passagens: %d            \n", quanti);
    fprintf(rodoviaria, "|Preco total: R$%.2f               \n", preco*quanti);
    fprintf(rodoviaria, "|Hora de partida: %d:00            \n", horaI);
    fprintf(rodoviaria, "|Hora de chegada: %d:00            \n", horaI+1);
    fprintf(rodoviaria, "|_______________________________\n");

    fclose(rodoviaria);

    rodoviaria=fopen(Narquivotxt, "r"); //"r" para leitura do arquivo txt
    if(rodoviaria == NULL){
        printf("Impossivel abrir arquivo. Tente novamente.\n");
    }

    char linha[50];

    while((fgets(linha, sizeof(linha), rodoviaria))!=NULL ){
        printf("%s", linha);
    }
    fclose(rodoviaria);
}

void tabela()
{
    char barra = "|";
    printf("_______________________________\n");
    printf("|-----Cidades disponiveis-----|\n");
    printf("|1-Cruzeiro                   |\n|2-Areias                     |\n|3-Bananal                    |"
           "\n|4-Lorena                     |\n|5-Sao Jose dos Campos        |\n|6-Queluz                     |\n|7-Guaratingueta              |\n|");
    printf("_____________________________|\n");
}

float TabelaPrecos(int a, int b, int quantidade)
{
    float preco, c, d;

    if(a == 1)
        c = 7.80;
    else if(a == 2)
        c = 4.00;
    else if(a == 3)
        c = 10.30;
    else if(a == 4)
        c = 10.20;
    else if(a == 5)
        c = 50.00;
    else if(a == 6)
        c = 7.30;
    else if(a == 7)
        c = 15.70;

    if(b == 1)
        d = 7.80;
    else if(b == 2)
        d = 4.00;
    else if(b == 3)
        d = 10.30;
    else if(b == 4)
        d = 10.20;
    else if(b == 5)
        d = 50.00;
    else if(b == 6)
        d = 7.30;
    else if(b == 7)
        d = 15.70;

    preco = (c+d) / 2;


    return preco;
}

void TabelaH()
{
    printf("______________________________________");
    printf("\n|Horarios dos onibus digite sua opcao|\n|1 - 10:00H                          |\n|2 - 14:00H                          |"
           "\n|3 - 17:00H                          |\n|4 - 20:00H                          |\n");

}

void compraR(int compra, char *pedido)
{
    if(compra == 1){
        printf("COMPRA REALIZADA COM SUCESSO! TENHA UM BOM DIA.\n\n");
        FILE *compra;
        compra=fopen(pedido, "a+");
        fprintf(compra, "COMPRA REALIZADA COM SUCESSO! TENHA UM BOM DIA.\n\n");
        fclose(compra);
    }
    else{
        printf("COMPRA CANCELADA COM SUCESSO! TENHA UM BOM DIA.\n\n");
        FILE *compra;
        compra=fopen(pedido, "a+");
        fprintf(compra, "COMPRA CANCELADA COM SUCESSO! TENHA UM BOM DIA.\n\n");
        fclose(compra);
    }
}

void reverpedido()
{
    char rever[30], txt[] = ".txt";
    while(1){
        printf("Deseja ver algum pedido novamente?\nDigite seu codigo de passagem ou 0 para finalzar: ");
        scanf("%s", rever);
        printf("\n");

        if(strcasecmp(rever, "0")==0)
            break;
        else{
            strncat(rever, txt, 4);
            FILE *verificacao;

            verificacao=fopen(rever, "r");

            if(verificacao == NULL){
                printf("Impossivel abrir arquivo. Tente novamente.\n");
            }

            char linha[50];

            while((fgets(linha, sizeof(linha), verificacao))!=NULL ){
                printf("%s", linha);
            }
            fclose(verificacao);
            system("Pause");
            system("cls");
        }
    }
}


