#include <stdio.h>

void maior(float a, float b, float  c)
{
    float maior;
    if(a > b && a > c)
        maior = a;
    else if(b > a && b > c)
        maior = b;
    else if(c > a && c > b)
        maior = c;
    printf("O numero maior e %.2f", maior);
}

int main()
{
    float v[3];
    for(int c = 0; c < 3; c++){
        printf("Digite um numero: ");
        scanf("%f", &v[c]);
    }
    maior(v[0], v[1], v[2]);
}
