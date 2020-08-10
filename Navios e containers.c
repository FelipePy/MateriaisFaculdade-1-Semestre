#include <stdio.h>
#include <locale.h>

void largura (int a, int b)
{
    int resultado=0, contador=0;

    while(resultado <= b){
        resultado += a;

        if(resultado <= b)
            contador += 1;
    }
    printf("%d", contador);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int LargC=0, AltuC=0, CompC=0, LargN=0, AltuN=0, CompN=0, AlturaM=0;

    printf("Digite a largura do container: ");
    scanf("%d", &LargC);

    printf("Agora a altura: ");
    scanf("%d", &AltuC);

    printf("Por fim o comprimento: ");
    scanf("%d", &CompC);

    printf("Agora as especificações do navio.\n");

    printf("Largura do Navio: ");
    scanf("%d", &LargN);

    printf("Altura: ");
    scanf("%d", &AltuN);

    printf("Comprimento do navio: ");
    scanf("%d", &CompN);

    printf("Altura Maxima: ");
    scanf("%d", &AlturaM);

    largura(LargC, LargN);
}
