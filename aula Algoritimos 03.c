#include <stdio.h>
#include <locale.h>

int main(){
//Exercicio 3
    int base, altura, multiplicacao, real, dolar;
    setlocale(LC_ALL, "Portuguese");
    printf("----------|Exerc�cio 3|----------\n");
    printf("-----> Digite a altura do tri�ngulo: ");
    scanf("%d", &altura);
    printf("-------------------------\n");
    printf("-----> Digite a base: ");
    scanf("%d", &base);
    multiplicacao = (base * altura) / 2;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("%d x %d / 2 = sua �rea. Que � %d \n", base, altura, multiplicacao);
    return 0;
}
