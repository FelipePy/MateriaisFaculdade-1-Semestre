#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, a2, a3, area, resultado;
    setlocale(LC_ALL, "Portuguese");

    printf("Dig�te a primeira �rea do tri�ngulo: ");
    scanf(" %d", &a);

    printf("Dig�te a segunda �rea do tri�ngulo: ");
    scanf(" %d", &a2);

    printf("Dig�te a terceira �rea do tri�ngulo: ");
    scanf(" %d", &a3);

    area = (a + a2 + a3) / 2;

    resultado = sqrt(area * (area - a) * (area - a2) * (area - a3));

    printf("A sua �rea � %d", resultado);

    return 0;
}
