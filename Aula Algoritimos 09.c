#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    setlocale(LC_ALL, "Portuguese");
    printf("Dig�te o valor de a: ");
    scanf("%d", &a);

    printf("Dig�te o valor de b: ");
    scanf("%d", &b);

    printf("Dig�te o valor de c: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("O valor de delta � %d", delta);
    return 0;
}
