#include <stdio.h>
#include <stdlib.h>
#include "Formas Geometricas.h"

int main()
{
    int opcao;
    QuadA();
    printf("_______________________________________|\n");

    RetanA();
    printf("_______________________________________|\n");

    ParaleA();
    printf("_______________________________________|");

    TrapezA();
    printf("_______________________________________|\n");

    while(1){
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5)
            break;
        else
            printf("Invalido. Tente novamente!\n");
    }
    switch(opcao){
        float medida, altura, largura;
        case 1:
            printf("Digite a altura ou largura do quadrado: ");
            scanf("%f", &medida);
            if(medida <= 0){
                printf("\nValor nulo.");
                break;
            }
            PQ(medida);
            break;
        case 2:
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);

            printf("Agora digite a largura: ");
            scanf("%f", &largura);

            if(altura <= 0 || largura <= 0){
                printf("\nValor nulo.");
                break;
            }
            else if(largura == altura){
                printf("\nSuas medidas nao formam um retangulo. Que tal verificar se nao e um quadrado? ");
                break;
            }
            PR(altura, largura);
            break;
        case 3:
            printf("Digite a altura do paralelogramo: ");
            scanf("%f", &altura);

            printf("Agora digite a base: ");
            scanf("%f", &largura);

            PP(altura, largura);
            break;

        float BaseM, Basem, Incli;
        case 4:
            printf("Digite sua base maior: ");
            scanf("%f", &BaseM);

            printf("Digite sua base menor: ");
            scanf("%f", &Basem);

            printf("Agora o valor das inclinacoes: ");
            scanf("%f", &Incli);

            if(Basem >= BaseM){
                printf("\nSeus valores nao correspondem a um trapezio.");
                break;
            }

            PT(BaseM, Basem, Incli);
            break;

    }
}


