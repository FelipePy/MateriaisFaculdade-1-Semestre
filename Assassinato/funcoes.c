#include <stdio.h>
void questionario(int r1, int r2, int r3, int r4, int r5)
{
    int culpado=0;
    if(r1 == 's')
        culpado += 1;
    if(r2 == 's')
        culpado += 1;
    if(r3 == 's')
        culpado += 1;
    if(r4 == 's')
        culpado += 1;
    if(r5 == 's')
        culpado += 1;

    if(culpado == 5)
        printf("O assassino. Voce esta preso.");

    else if(culpado >= 3 && culpado <= 4)
        printf("Um dos cumplices. Esta preso.");

    else if(culpado == 2)
        printf("Mais um dos suspeitos.");

    else
        printf("Um inocente. Pode ir embora");

    return 0;
}
