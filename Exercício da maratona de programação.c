#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mcachorrosq, totalparti;
    float media;
    printf("_________________________|Maratona de programa��o|________________________");
    printf("\nDigite o n�mero m�dio de cachorroes quentes comidos pelos participantes: ");
    scanf("%d", &mcachorrosq);
    printf("Agora informe o total de participantes: ");
    scanf("%d", &totalparti);
    if (mcachorrosq == 1 && totalparti == 1)
        {
        printf("Os n�meros digitados foram. %d cachorro quente e %d pessoa.| ", mcachorrosq, totalparti);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
    else if (mcachorrosq == 1 && totalparti != 1)
        {
        printf("Os n�meros digitados foram. %d cachorro quente e %d pessoas.| ", mcachorrosq, totalparti);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
    else if (mcachorrosq != 1 && totalparti == 1)
        {
        printf("Os n�meros digitados foram. %d cachorros quentes e %d pessoa.| ", mcachorrosq, totalparti);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
        else if (mcachorrosq > 1 && totalparti > 1)
        {
        printf("Os n�meros digitados foram. %d cachorros quentes e %d pessoas.| ", mcachorrosq, totalparti);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
        else if (mcachorrosq <= 0 && totalparti <= 0)
        {
        printf("nenhum valor digitado ");
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
        else if (mcachorrosq <= 0 && totalparti > 1)
        {
        printf("Os n�meros digitados foram. nenhum cachorro quente e %d pessoas.| ", totalparti);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � %.2f\n", media);
        return 0;
        }
        else if (mcachorrosq  > 1 && totalparti <= 0)
        {
        printf("Os n�meros digitados foram. %d cachorros quentes e nenhuma pessoa.| ", mcachorrosq);
        media = (float)mcachorrosq / (float)totalparti;
        printf("-----> O resultado � 0 pois n�o foi ninguem pra comer.");
        return 0;
        }
    printf("_____________________________________________________________________________");
}
