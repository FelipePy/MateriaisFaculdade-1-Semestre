#include <stdio.h>
int main()
{
    int v[10];
    int c=0, total=0;
    for(c = 0; c < 10; c++){
        printf("Digite %d valor: ", c+1);
        scanf("%d", &v[c]);

        if(v[c] % 5 == 0 && v[c] != 0) //Se quiser considerar o 0 também é so tirar o && v[c] != 0, eu tirei
            total++;

    }
    printf("No total %d valores digitados sao divisiveis por 5.", total);
}

