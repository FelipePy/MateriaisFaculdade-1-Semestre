#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
        printf("Sim seu n�mero � divisilvel por 5 e 3.");

    else
        printf("N�o seu n�mero n�o � divisivel por 5 ou 3");
    return 0;
}
