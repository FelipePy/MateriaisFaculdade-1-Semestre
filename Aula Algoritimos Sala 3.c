#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, IMC;
    char sexo;
    printf("Digite seu sexo [m/f]: ");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'f'){

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite seua altura: ");
    scanf("%f", &altura);
    IMC = (peso/(altura*altura));
        if (sexo == 'm'){
            printf("%.2f, ", IMC);
            if (IMC >= 19 && IMC <= 24){
                printf("Voc� est� no peso ideal!");
            }
            else if (IMC < 19){
                printf("Voc� esta a baixo do peso ideal. CUIDADO!!");
            }
            else if (IMC > 24){
                printf("Voc� est� acima do peso ideal. CUIDADO!!");
            }
            }

        if (sexo == 'f'){
            printf("%.2f, ", IMC);
            if (IMC >= 18 && IMC <= 23){
                printf("Voc� est� no peso ideal!");
            }
            else if (IMC < 18){
                printf("Voc� esta abaixo do peso, CUIDADO!");
            }
            else if (IMC > 23){
                printf("Voc� est� acima do peso, CUIDADO!");
            }
            }
    }
    else{
        printf("Valor digitado n�o reconhecido, tente novamente!");
    }
    return 0;
}
