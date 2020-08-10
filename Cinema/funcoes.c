int Tidade (int i)
{
    int maior=0;
    if(i > 65)
        maior += 1;
    return maior;
}

void tabela()
{   printf("_____________________\n");
    printf("|Nota    |Significado\n|A       |otimo\n|B       |Bom\n|C       |Regular\n|D       |Ruim\n|E       |Pessimo\n\n");
}

int otimo(char a)
{
    int otimo=0;
    if(a == 'a' || a == 'A')
        otimo = 1;
    return otimo;
}

int regular(char a)
{
    int regular = 0;
    if(a == 'c' || a == 'A')
        regular = 1;
    return regular;
}

int ruim(char a)
{
    int ruim = 0;
    if(a == 'd' || a == 'D')
        ruim = 1;
    return ruim;
}

