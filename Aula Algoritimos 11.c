#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_ALL, "Portuguese");
    float km, litros, gasto;

    printf("----------|BEM-VINDO-AO-POSTO-7|----------\n");
    printf("Dig�te Quantos KM foram rodados: ");
    scanf("%f", &km);

    printf("Agora dig�te quantos litros de gasolina foi gasto na viagem: ");
    scanf("%f", &litros);

    gasto = km / litros;

    printf("Sua m�dia de KM por litros � de %.2f", gasto);
    printf("\n----------|OBRIGADO-PELA-PREFER�NCIA!!----------");
    return 0;
}
