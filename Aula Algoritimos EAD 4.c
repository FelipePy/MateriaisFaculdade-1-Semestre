/*Fazer um algoritmo que permita que diversos n�meros sejam digitados e que exiba,
para cada n�mero, o seu triplo.
O algoritmo deve terminar somente quando for digitado pelo usu�rio o n�mero 999.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    while(numero != 999)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
        if(numero != 999)
        printf("%d x 3 = %d\n", numero, numero*3);


        else
            break;
    }
        printf("Fim!");
        return 0;
}
