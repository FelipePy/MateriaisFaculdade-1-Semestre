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
        printf("Sua m�dia foi de %.2f, Parab�ns, voc� tirou uma nota dentro da m�dia e passou nesta mat�ria!!\n", media);
    }
    else
    {
        printf("Sua m�dia foi de %.2f, voc� tirou uma nota abaixo da m�dia, infelizmente reprovou na mat�ria.\n", media);
    }
}
