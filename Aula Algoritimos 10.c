#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i1, i2, i3;
    float p1, p2, p3;
    float rp;
    int ri;
    printf("Dig�te o peso da 1� pessoa: ");
    scanf("%f", &p1);
    printf("Dig�te a idade da 1� pessoa: ");
    scanf("%d", &i1);

    printf("Dig�te o peso da 2� pessoa: ");
    scanf("%f", &p2);
    printf("Dig�te a idade da 2� pessoa: ");
    scanf("%d", &i2);

    printf("Dig�te o peso da 3� pessoa: ");
    scanf("%f", &p3);
    printf("Dig�te a idade da 3� pessoa: ");
    scanf("%d", &i3);

    ri = (i1 + i2 + i3) / 3;
    rp = (p1 + p2 + p3) / 3;

    printf("A m�dia de idade foi %d\n", ri);
    printf("E a m�dia de peso foi %.2f", rp);
    return 0;

}
