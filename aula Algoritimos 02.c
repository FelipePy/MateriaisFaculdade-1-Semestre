#include <stdio.h>
#include <locale.h>

int main(){
    //Exerc�cio 3
    int n, ma, me;
    setlocale(LC_ALL, "Portuguese");
    printf("-------Exerc�cio 2-------\n");
    printf("-------------------------\n");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    me = n - 1;
    ma = n + 1;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-----> O sucessor de %d e %d \n", n, ma);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-----> E o antecessor de %d e %d \n", n, me);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}
