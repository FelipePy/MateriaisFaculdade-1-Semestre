#include <stdio.h>
void QuadA()
{
    printf("Digite sua opcao de acordo com os valores apresentados abaixo.\n");
    printf("_______________________________________\n");
    printf("__________");
    printf("                             |\n|        |                             |\n|        |                             |\n|        |                             |\n");
    printf("|________|                             |\nQuadrado digite 1                      |\n");
}

void RetanA()
{
    printf("_________________                      |");
    printf("\n|               |                      |\n|               |                      |\n|               |                      |\n");
    printf("|_______________|                      |");
    printf("    \nRetangulo digite 2                     |\n");
}

void ParaleA()
{
    printf("                                       |\n    _________________                  |\n");
    printf("   /                /                  |\n  /                /                   |\n /                /                    |");
    printf("\n/________________/                     |");
    printf("    \nParalelogramo digite 3                 |\n");
}

void TrapezA()
{
    printf("\n    ____________                       |\n");
    printf("   /            \\                      |\n  /              \\                     |\n /                \\                    |\n");
    printf("/__________________\\                   |");
    printf("    \nTrapezio digite 4                      |\n");
}

void PQ(float a)
{
    float p;
    p = 4*a;
    printf("_____________________________________");
    printf("\nO perimetro de seu quadrado e: %.2f\n", p);
    printf("_____________________________________");
}

void PR(float h, float b)
{
    float p;
    p = 2*(h+b);
    printf("_____________________________________");
    printf("\nO perimetro de seu retangulo e: %.2f\n", p);
    printf("_____________________________________");
}

void PP(float h, float b)
{
    float p;
    p = 2*(h+b);
    printf("_____________________________________");
    printf("\nO perimetro de seu paralelogramo e: %.2f\n", p);
    printf("_____________________________________");
}

void PT(float a, float b, float c)
{
    float p;
    p = a+b+c;
    printf("_____________________________________");
    printf("\nO perimetro de seu trapezio e: %.2f\n", p);
    printf("_____________________________________");
}









