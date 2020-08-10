#include <stdio.h>

int main() {
    char letra[6];

    int gabarito[5] = {4, 12, 34, 25, 17};
    int resposta[10], ponto = 0, contador=0;

    for(int p = 0; p < 10; p++){
        printf("Digite sua %d aposta: ", p + 1);
        scanf("%d", &resposta[p]);

        for (int j = 0; j < 5; j++){
            if (resposta[p] == gabarito[j]) {
                ponto++;
            }
        }
    }
    system("cls"); //Retira para ver o programa inteiro
    printf("Suas apostas foram: ");
    for(int c = 0; c < 10; c++){
        printf("%d ", resposta[c]);
    }

    printf("\nO gabarito e: ");
    for(int cont = 0; cont < 5; cont++){
        printf("%d ", gabarito[cont]);
    }

    printf("\nO total de pontos sao: %d \n", ponto);

    return(0);
}

