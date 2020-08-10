/*Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if(x < 1){
        y = x;
        printf("Seu Y e igual ao seu X que e %d\n", x);}

    else if(x == 1){y = 0;
    printf("De acordo com o seu X, seu Y e igual a 0\n");}

    else if(x > 1){
        y = pow(x, 2);
        printf("De acrodo com seu X, seu Y e igual a %d", y);
    }
}
