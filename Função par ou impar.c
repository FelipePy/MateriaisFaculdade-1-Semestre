#include <stdio.h>

void poui(int a)
{
    if(a % 2 == 0){
        printf("Seu numero e par");
    }
    else
        printf("Seu numero e impar");
}
int main()
{
    int num;
    printf("Digite um nemero inteiro: ");
    scanf("%d", &num);
    poui(num);
}
