
#include <stdio.h>

void tabuada(int v1)
{
    int resultado;
    for(int t = 1; t <= 10; t++){
        resultado = v1 * t;
        printf("%2d X %d = %d\n", t, v1, resultado);
    }
}

int main()
{
    char resposta;
    while(resposta != 'S' || resposta != 's'){
        int v1;
        printf("\nDigite um numero para saber sua tabuada: ");
        scanf("%d", &v1);

        tabuada(v1);

        printf("\nDeseja digitar outro valor? [S/N]: ");
        scanf("%c", &resposta);
    }
    return 0;
}

