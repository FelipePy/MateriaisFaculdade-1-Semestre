#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int anoatual;
    printf("------------------------------\n");
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    if (anoatual % 4 == 0 && anoatual % 100 != 0 || anoatual % 400 == 0){
        printf("Sim, seu ano é bissexto!\n");
    }
    else
        printf("Seu ano não é bissexto!\n");
    printf("------------------------------");
    return 0;
}
