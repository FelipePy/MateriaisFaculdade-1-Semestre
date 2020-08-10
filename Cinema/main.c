#include <stdio.h>
#include <stdlib.h>
#include "Cinema.h"

int main()
{
    int idade, cont, total=0, otm=0, reg=0, rruim = 0;
    char o1;
    for(cont = 0; cont < 4; cont++){
        printf("Digie sua idade: ");
        scanf("%d", &idade);
        total += Tidade(idade);

        tabela();
        printf("Digite sua nota do filme: ");
        scanf(" %c", &o1);
        otm += otimo(o1);
        reg += regular(o1);
        rruim += ruim(o1);

    }
    system("cls");
    printf("\n%d pessoas acharam o filme otimo.", otm);
    printf("\n%d pessoas acharam o filme regular.", reg);
    printf("\n%d pessoas acharam o filme ruim.", rruim);
    printf("\nTivemos %d pessoa(s) com mais de 65 anos.\n\n", total);
    return 0;
}
