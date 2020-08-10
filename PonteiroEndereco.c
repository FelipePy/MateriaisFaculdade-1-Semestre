#include <stdio.h>

int main()
{
    int x=10;

    int *p;

    p=&x;

    printf("Valor da variavel x = %d\n",x);
    printf("Endereco da variavel x = %d\n",&x);
    printf("Endereco do ponteiro = %d\n",p);


    *p=5;

    printf("Novo Conteudo de x = %d\n",x);

    return(0);
}
