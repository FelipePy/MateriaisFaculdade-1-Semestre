#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, maior;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um número: ");
    scanf("%d", &n2);
    printf("Digite um número: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
        maior = n1;
    else if (n2 > n1 && n2 > n3)
        maior = n2;
    else if (n3 > n1 && n3 > n2)
        maior = n3;
    printf("O número maior lido foi %d", maior);
    return 0;
}
