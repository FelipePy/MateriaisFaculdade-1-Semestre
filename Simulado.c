#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float alt=0, larg=0, comp=0, peso=0, cubico=0;
    char resp='s';

    while(resp == 's' || resp == 'S')
    {
        printf("Digite a altura(cm): ");
        scanf("%f", &alt);
        setbuf(stdin, NULL);

        printf("Digite a larg(cm): ");
        scanf("%f", &larg);
        setbuf(stdin, NULL);

        printf("Digite o comprimento(cm): ");
        scanf("%f", &comp);
        setbuf(stdin, NULL);

        printf("Digite o peso(Kg): ");
        scanf("%f", &peso);
        setbuf(stdin, NULL);

        cubico = ((alt * larg * comp)/6000);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

        if(cubico <= 5){
            printf("Seu produto será atribuido ao peso físico de %.2fKg\n", peso);

        }
        else{
            printf("Seu produto será atribuido ao peso cúbico de %.2fKg\n", cubico);

        }
        printf("------------------------------\n");
        do{
        printf("Tem mais algum produto? ");
        scanf("%c", &resp);
        setbuf(stdin, NULL);
        } while(resp != 's' && resp != 'S' && resp != 'n' && resp != 'N');

    }
}
