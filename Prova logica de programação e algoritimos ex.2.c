#include <stdio.h>

int main()//Senha para o proprietario encerrar o programa é -1
{
    float valor=0;
    int resp=0, total;

    while(total != -1){
        printf("=====================");
        printf("\nDigite quantos produtos estao em sua compra: ");
        scanf("%d", &total);
        if(total == -1){
            printf("\nChave de encerramento do proprietario ativada. Encerrando programa. Tenha uma boa noite Sr. Manoel Joaquim\n");
            break;
        }

        valor = (total * 1.99);
        if(total > 50){
            printf("\n---------------------------------------------\n");
            printf("O total da compra e de 50 itens. O sistema nao processa compras acima disso. Proximo cliente.");
            printf("\n---------------------------------------------\n");
        }
        else{
            printf("%d - R$%.2f", total, valor);
            printf("\n=====================");
        }
    }
}
