#include <stdio.h>
#include <locale.h>

int main()
{
    float n1, n2, media;
    setlocale(LC_ALL, "Portuguese");

    printf("|_______|Exerc�cio 7|_______|");

    printf("\nDigite um n�mero: ");
    scanf("%f", &n1);
    printf("Digite outro n�mero: ");
    scanf("%f", &n2);

    if (n1 <= 10 && n2 <= 10)
        {
        media = (n1 + n2) / 2;

        printf("A m�dia de %.2f + %.2f � igual a %.2f\n", n1, n2, media);
        }
    else{
        printf("O limite da nota � entre 0 a 10, tente novamente!\n");
        }

    printf("________________________________________________");
    return 0;
}
