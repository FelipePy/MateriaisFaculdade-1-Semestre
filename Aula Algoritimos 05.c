#include <stdio.h>
#include <locale.h>

int main()
{   // Exercicio 5
    setlocale(LC_ALL, "Portuguese");
    float chuva, milimetros;
    printf("-------|Exerc�cio 5|-------\n");
    printf("Digite a quantidade de chuva [POLEGADAS]: ");
    scanf("%f", &chuva);
    milimetros = chuva * 25.4;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("----->%.2f polegadas passado para mil�metros torna-se %.2fMM\n", chuva, milimetros);
    return 0;
}
