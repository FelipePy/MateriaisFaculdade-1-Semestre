#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media;
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;

    if (media >= 6)
    {
        printf("Sua média foi de %.2f, Parabéns, você tirou uma nota dentro da média e passou nesta matéria!!\n", media);
    }
    else
    {
        printf("Sua média foi de %.2f, você tirou uma nota abaixo da média, infelizmente reprovou na matéria.\n", media);
    }
}
