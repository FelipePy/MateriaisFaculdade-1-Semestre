#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, fatorial=1, contador;

    printf("Digite um número para saber seu fatorial: ");
    scanf("%d", &numero);
    printf("%d! = ", numero);
    for(contador = numero; contador >= 1; contador--){
        numero = fatorial * contador;
        fatorial = numero;
        printf("%d %s ", contador, contador > 1 ? "x" : "=");
    }
    printf("%d", fatorial);
    return 0;
}
