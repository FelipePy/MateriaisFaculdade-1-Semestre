#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
        printf("Sim seu número é divisilvel por 5 e 3.");

    else
        printf("Não seu número não é divisivel por 5 ou 3");
    return 0;
}
