#include <stdio.h>
#include <time.h>

void Tabuleiro()
{
    int pecas, atual;

    for(int c = 0; c < 8; c++){
        pecas = rand() % 7;
        printf("%d ", pecas);

        for(int l = 0; l < 8; l++){
            pecas = rand() % 7;
            printf("%d ", pecas);
        }
        printf("\n");
    }
}
