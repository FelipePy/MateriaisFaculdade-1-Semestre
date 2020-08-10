#include <stdio.h>
#include <locale.h>

int main()
{
    char grau;
    float temperatura, f, c;
    /*Escreva um programa para ler dois valores, o primeiro indica o tipo de temperatura(celsius Farenheit), e o segundo, a temperatura. Faça o calculo
    utilizando as conversoes entre elas.*/

    setlocale(LC_ALL, "Portuguese");
    printf("Digite entre as temperaturas [C/F]: ");
    scanf("%c", &grau);

    printf("Agora digite a temperatura: ");
    scanf("%f", &temperatura);

    switch(grau){
case 'c':
    f = (temperatura * 9/5) + 32;
    printf("A temperatura para Farenheit é %.2fºF", f);
    break;

case 'f':
    c = (temperatura - 32) / 1.8;
    printf("A temperatura para Celcius é %.2fºC", c);
    break;}
}
