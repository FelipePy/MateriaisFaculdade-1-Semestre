#include <stdio.h>
#include <locale.h>

int main()
{
    //|Exercício| crie um algoritimo que leia um peso na terra e o numero de um planeta e exiba o valor de seu peso neste planeta
    //os planetas estao representados logo abaixo, juntamente com o valor das gravidades relativa:

    /*codigo    planeta     gravidade relativa
        1       mercurio    0,37
        2       venus       0,88
        3       marte       0,38
        4       júpter      2,54
        5       saturno     1,15        */

        setlocale(LC_ALL, "Portuguese");
        float pesot, calculo;
        int opcao;

        printf("Digite seu peso: ");
        scanf("%f", &pesot);

        printf("Mercúruo [1]\nVenus[2]\nMarte[3]\nJúpter[4]\nSaturno[5]\nAgora digite uma opçao: ");
        scanf("%d", &opcao);

        switch(opcao){
    case 1:
        calculo = (pesot * 0.37);
        printf("Seu peso em Mercúrio seria: %.2f", calculo);
        break;
    case 2:
        calculo = (pesot * 0.88);
        printf("Seu peso em Venus seria: %.2f", calculo);
        break;
    case 3:
        calculo = (pesot * 0.38);
        printf("Seu peso em Marte seria: %.2f", calculo);
        break;
    case 4:
        calculo = (pesot * 2.54);
        printf("Seu peso em Júpter seria: %.2f", calculo);
        break;
    case 5:
        calculo = (pesot * 1.15);
        printf("Seu peso em Saturno seria: %.2f", calculo);
        break;
                    }
    return 0;
}
