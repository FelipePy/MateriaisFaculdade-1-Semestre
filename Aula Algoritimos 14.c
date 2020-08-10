#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, menor, maior, contador = 0;
    while (contador != 3)
    {
        printf("Digite um número: ");
        scanf("%d", &numero);
        contador++;
        if (contador == 1){
            maior = numero;
            menor = numero;
        }
        else if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
            menor = numero;
    }
    printf("O número maior é %d \nE o menor é %d", maior, menor);
    return 0;
}
