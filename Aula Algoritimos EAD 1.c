#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, contador, negativos=0, positivos=0, neutro=0;

    for(contador=0; contador <= 5; contador++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        if(numero < 0)
            negativos += 1;

        else if(numero == 0)
            neutro += 1;

        else
            positivos += 1;
    }
    printf("Tivemos %d positivos, %d negativos, e %d neutros.", positivos, negativos, neutro);
    return 0;
}
