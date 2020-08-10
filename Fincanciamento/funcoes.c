#include <stdio.h>
float tot(float valor, int parcela, float juros)
{
    int c = 0;
    float total, joros;
    total = valor;

    for(c = 1; c <= parcela; c++){
        joros = (juros * total) / 100;
        total += joros;
    }
    return (total);
}
