#include <stdio.h>

float ganho(int s, int c)
{
    float total;
    total = s*c;
    return total;
}

int tabuada(int v1)
{
    int resultado;
    for(int t = 1; t <= 10; t++){
        resultado = v1 * t;
        printf("%2d X %d = %d\n", t, v1, resultado);
    }
}

int main()
{
    float valor;
    int hora, v1;

    printf("Valor por hora: R$");
    scanf("%f", &valor);

    printf("Horas trabalhadas: ");
    scanf("%d", &hora);

    printf("Voce recebera : R$%.2f", ganho(valor, hora));

    printf("\nDigite um numero para saber sua tabuada: ");
    scanf("%d", &v1);

    printf("%d", tabuada(v1));

    return 0;
}
