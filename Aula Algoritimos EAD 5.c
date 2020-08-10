#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, contador = 0;
    char sexo[1];

    while(contador <= 20){
        contador++;

        printf("Digite seu sexo: ");
        scanf("%s", sexo);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(sexo == "m" && idade > 21)
            printf("Reprovado.");
        }
}
