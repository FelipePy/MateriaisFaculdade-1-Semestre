#include <stdio.h>

int main() {
    /*1)Ler um vetor R de 5 elementos contendo o gabarito da LOTO.
    Aseguir ler um vetor A de 10 elementos contendo uma aposta.
    Aseguir imprima quantos pontos fez o apostador.
    [Entrada]  4, 12, 34, 25, 17 (gabarito)
    3  17  55  21  34  4  27  29  20  11 (aposta)
    [Saída]3 (pontos)*/

    int gabarito[5] = {4, 12, 34, 25, 17};
    int resposta, ponto = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite sua %d aposta: ", i + 1);
        scanf("%d", &resposta);

        for (int j = 0; j < 5; j++){
            if (resposta == gabarito[j]) {
                ponto++;
            }

    }

    printf("O total de pontos sao: %d \n", ponto);

    return(0);
}
