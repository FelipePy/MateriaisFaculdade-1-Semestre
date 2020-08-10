#include <stdio.h>

void resultado(int a)
{
    if(a > 0)
        printf("Seu numero e positivo");
    else if(a == 0)
        printf("Seu numero e 0");
    else if(a < 0)
        printf("Seu numero e negativo");
    else
        printf("Valor diferente de inteiro. Tente novamente");

}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    resultado(numero);
}
