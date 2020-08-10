#include <stdio.h>

int main()
{
    int ip[12];

    printf("Digite seu ip: ");
    scanf("%d", &ip);

    for(int c = 0; c < 12; c++){
        printf("%d\n", ip[c]);
    }
}
