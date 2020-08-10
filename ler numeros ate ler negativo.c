#include <stdio.h>

int main()
{
    float numero=0, soma=0, media=0;
    int total=0, contador=0;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    while(numero > 0)
    {
        contador++;
        soma += numero;
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero >= 0)
            total++;
    }

    media = soma / contador;
    printf("Foram lidos %d valores\n", contador);
    printf("E a soma e %.2f\n", soma);
    printf("A media foi %.2f\n", media);
}
