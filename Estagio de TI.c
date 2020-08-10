#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media = 0, escolhidoM=0;
    char nome[50], escolhidoN[50], contagem[50];

    for(int c = 0; c < 4; c++){
        printf("Digite seu nome: ");
        scanf(" %[^\n]*s", &nome[c]);

        printf("Digite sua media: ");
        scanf("%f", &media);
        if(media > 10 || media <= 0)
            printf("Desclassificado.");

        if(media >= 0 && media <= 10){
            if(c == 0){
                escolhidoM = media;
                strcpy(escolhidoN, nome);
            }
            else if(media > escolhidoM){
                escolhidoM = media;
                strcpy(escolhidoN, nome);
            }
        }
        else
            printf("A média não pode ser maior que 10 ou menor a 0.\n");
    }

    printf("O aluno escolhido foi: %s\n", escolhidoN);
    printf("E sua média foi: %.2f\n", escolhidoM);




    return 0;

}

