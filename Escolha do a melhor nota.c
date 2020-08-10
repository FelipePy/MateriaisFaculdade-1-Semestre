#include <stdio.h>

int main()
{
    char nome[50], name;
    float nota, maiorn;

    for(int c = 0; c < 10; c++){
        printf("Digite seu nome: ");
        scanf("%s", &nome);

        printf("Agora digite sua nota semestral: ");
        scanf("%f", &nota);

        if(c == 0){
            maiorn = nota;
            name = nome;
        }
        else if(nota > maiorn){
            maiorn = nota;
            name = nome;
        }
    }
    printf("O escolhido foi %s com a nota %.2f", name, maiorn);
    return 0;
}
