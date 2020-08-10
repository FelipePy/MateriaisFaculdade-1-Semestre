#include <stdio.h>

int main()
{
    int alunos=0, contador=0, AcimaM = 0;
    float media=0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    while(contador != alunos)
    {
        float nota1=0, nota2=0;

        contador++;

        printf("\n%d aluno\n", contador);

        printf("Digite sua 1 nota: ");
        scanf("%f", &nota1);

        printf("Digite sua 2 nota: ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;

        printf("Media do %d aluno %.1f", contador, media);

        if(media > 5)
        {
            AcimaM += 1;
        }
    }

    if(AcimaM == 0)
        printf("\nNenhum aluno Tirou media acima de 5.");

    else
        printf("\n\n%d alunos tiraram media acima de 5", AcimaM);
}

