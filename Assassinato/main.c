#include <stdio.h>
#include <stdlib.h>
#include "Assassinato.h"

int main()
{
    char resposta = 's', r[5];
    while(resposta == 's' || resposta == 'S'){
        printf("Responda com s ou n...\n");

        printf("Telefonou para a vitima? ");
        scanf(" %c", &r[0]);

        printf("Esteve no local do crime? ");
        scanf(" %c", &r[1]);

        printf("Mora perto da vitima? ");
        scanf(" %c", &r[2]);

        printf("Devia para a vitima? ");
        scanf(" %c", &r[3]);

        printf("Ja trabalhou com a vitima? ");
        scanf(" %c", &r[4]);

        printf("\n==================\n");
        printf("Voce e ");
        questionario(r[0], r[1], r[2], r[3], r[4]);
        printf("\n==================\n");

        printf("\nExistem mais suspeitos? [s/n]: ");
        scanf(" %s", &resposta);

        system("cls");
        system("Pause");
    }
    return 0;
}
