#include <stdio.h>
#include <locale.h>
#include <math.h>


/*  1) Entrar com 4 números e imprimir a média ponderada, sabendo-se que os pesos são
respectivamente 1, 2, 3 e 4. A média ponderada é calculada pela fórmula = nota1 x peso1 + nota2 x
peso2 + nota3 x peso3 + nota4 x peso4, dividido pela soma dos pesos. */

/*int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, contador=0;
    float  media=0, mediap=0;

    while(contador != 4){
        contador++;
        printf("Digite um número: ");
        scanf("%d", &numero);
        media = numero * contador;
        mediap += media;
    }
    mediap = mediap / 10;
    printf("%.2f", mediap);

    return 0;
}*/


/*  2) Criar um algoritmo que calcule e imprima a área de um triângulo. Lembrando que a área do
triângulo é: base x altura divido por 2.*/
/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura, area;

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    printf("Digite a largura da base: ");
    scanf("%f", &base);

    area = (base * altura) / 2;

    printf("Sua área do trinângulo é %.2f", area);

    return 0;
}*/

/*3) Leia um número inteiro, caso ele seja maior do que 10, exibir a sua metade.*/
/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero, metade;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero >= 10)
    {
        metade = numero / 2;
        printf("A metade de %.2f é %.2f", numero, metade);
    }
    else
        printf("O número digitado foi %.2f", numero);

    return 0;
}*/

/*4) Uma empresa concederá um aumento de salário aos seus funcionários variável de acordo com o
cargo, conforme tabela abaixo.
 Código Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 32%
104 Administrativo 37%
105 Auxiliar 40%
Faça um algoritmo que leia o salário e o código do cargo do funcionário, a seguir, calcule o novo salário.
Mostre o salário antigo e o novo salário.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    float salario, nsalario;

    printf("Digite seu código de funcionário: ");
    scanf("%d", &codigo);

    printf("Digite seu salário R$: ");
    scanf("%f", &salario);

    if(codigo == 101)
    {
       nsalario = (salario * 10) / 100 + salario;
       printf("Seu salário era de %.2fR$ e com 10 por cento de aumento passá a ser %.2fR$", salario, nsalario);
    }
    if(codigo == 102)
    {
       nsalario = (salario * 20) / 100 + salario;
       printf("Seu salário era de %.2fR$ e com 20 por cento de aumento passá a ser %.2fR$", salario, nsalario);
    }
    if(codigo == 103)
    {
       nsalario = (salario * 32) / 100 + salario;
       printf("Seu salário era de %.2fR$ e com 32 por cento de aumento passá a ser %.2fR$", salario, nsalario);
    }
    if(codigo == 104)
    {
       nsalario = (salario * 37) / 100 + salario;
       printf("Seu salário era de %.2fR$ e com 37 por cento de aumento passá a ser %.2fR$", salario, nsalario);
    }
    if(codigo == 105)
    {
       nsalario = (salario * 40) / 100 + salario;
       printf("Seu salário era de %.2fR$ e com 40 por cento de aumento passá a ser %.2fR$", salario, nsalario);
    }

    return 0;
}*/
/*5) Entrar com um número qualquer e informar se o mesmo está compreendido entre 20 e 90. Caso
contrário informe ao usuário que o valor está fora da faixa. */

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;

    printf("\nDigite um número qualquer: ");
    scanf("%f", &numero);

    if(numero >= 20 && numero <= 90)
        printf("Seu número esta dentro da faixa!\n");
    else
        printf("Seu número está fora da faixa!\n");

        return 0;
}*/

/*6) Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte
expressão:
, onde
*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, r, s, d;

    printf("\nDigite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("Digite pela ultima vez outro número: ");
    scanf("%d", &n3);

    r = pow(n1 + n2, 2);
    s = pow(n2 + n3, 2);
    d = (r + s) / 2;

    printf("Sua expressão resultou em: %d\n", d);

    return 0;
}*/

/*7) Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em
segundos e mostre-o expresso em horas.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int segundos, horas, minutos;

    printf("Digite em segundos a duração do envento: ");
    scanf("%d", &segundos);

    horas = segundos / pow(60, 2);
    minutos = segundos / 60;

    if(horas > 1)
        printf("O evento durou %d horas %d minutos e %d segundos.", horas, minutos - (horas * 60), segundos - (minutos * 60));

    else if (horas == 1)
        printf("O evento durou %d hora %d minutos e %d segundos.", horas, minutos - (horas * 60), segundos - (minutos * 60));

    else if(horas < 1 && segundos != 0)
        printf("Seu evento durou menos de 1 hora, mais precisamente %d minutos e %d segundos.", minutos, segundos - (minutos * 60));

    else if(segundos == 0)
        printf("Seu evento não começou.");

    return 0;
}*/

/*8) O cardápio de uma lanchonete é o seguinte:
Especificação   Código  Preço
Cachorro quente 100     1,20
Hambúrger       103     1,20
Cheeseburguer   104     1,30
Refrigerante    105     1,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por
aquele lanche. Considere que a cada execução somente será calculado um item.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo=0, quantidade=0, resposta = 1;
    float preco;

    printf("______________________________");
    printf("\n|Especificação  |Código|Preço|\n|Cachorro quente| 100  |1,20 |\n|Hambúrger      | 103  |1,20 |\n|Cheeseburguer  | 104  |1,30 |\n|Refrigerante   | 105  |1,00 |\n");
    printf("------------------------------\n");

    //printf("Você comprou algum produto? [s/n]: ");
    //gets(resposta);

    while(resposta == 1)
    {
        printf("\nDigite o código do pedido: ");
        scanf("%d", &codigo);

        if(codigo == 100)
        {
            printf("Quantidade de cachorros quentes: ");
            scanf("%d", &quantidade);
            preco += 1.20 * quantidade;
        }

        else if(codigo == 103)
        {
            printf("Quantidade de Hambúrgueres: ");
            scanf("%d", &quantidade);
            preco += 1.20 * quantidade;
        }

        else if(codigo == 104)
        {
            printf("Quantidade de Cheeseburguer: ");
            scanf("%d", &quantidade);
            preco += 1.30 * quantidade;
        }

        else if(codigo == 105)
        {
            printf("Quantidade de refrigerante: ");
            scanf("%d", &quantidade);
            preco += 1.00 * quantidade;
        }
        else
        {
            printf("Código inválido!");
            break;
        }
        printf("Você comprou mais alguma coisa? [1/0]: ");
        scanf("%d", &resposta);
    }
    system("cls");
    printf("______________________________");
    printf("\n|Especificação  |Código|Preço|\n|Cachorro quente| 100  |1,20 |\n|Hambúrger      | 103  |1,20 |\n|Cheeseburguer  | 104  |1,30 |\n|Refrigerante   | 105  |1,00 |\n");
    printf("------------------------------\n");
    printf("Seu pedido sai por %.2fR$.\n", preco);
    return 0;
}*/

/*9) Escreva, um algoritmo que calcule o preço final de um produto sabendo que o mesmo sofreu um
desconto de 8%.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float produto, pfinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    pfinal = produto - (produto * 8)/ 100;

    printf("Seu produto com 8 por cento de desconto sai por %.2fR$\n", pfinal);

    return 0;
}*/

/*10) Calcular a área de uma circunferência. Sendo área = raio ao quadrado x PI*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio, PI=3.14, area=0, total=0;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("Sua área da circunferência é: %.2fm2.", area);
    return 0;
}*/

/*11) Escrever um programa que lê o número de identificação de um aluno, as 3 notas obtidas por este
aluno em 3 avaliações e a média dos exercícios do semestre. Calcular a média de aproveitamento,
usando a fórmula: MA=((Nota1+Nota2+Nota3)/3)+ME)/2.
Ao final o programa verifica o valor da média de aproveitamento e exibe a letra indicando o
respectivo conceito.
A atribuição de conceitos obedece à tabela abaixo:
Média de Aproveitamento Conceito
maior que 9 - A
maior ou igual a 7,5 e menor que 9 - B
maior ou igual a 6 e menor que 7,5 - C
maior ou igual a 4 e menor que 6 - D
menor que 4 - E
O programa ainda deve exibir como saída o número de identificação do aluno, suas notas, a média dos
exercícios, a média de aproveitamento, o conceito correspondente e a mensagem: APROVADO se o
conceito for A, B ou C e REPROVADO se o conceito for D ou E.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c=1;
    float notas=0, soma, mediaEx, media, MediaA, n1, n2, n3;
    char identificacao[50], tecla, nl;

    printf("-----Bem Vindo Ao Site oficial da Fatec!-----\n");
    printf("\nDigite seu número de identificação: ");
    tecla = getch();
    gets(identificacao);

    if(tecla != 13)
    {
        while(c <= 3)
        {
            if(notas <= 10)
            {
                printf("\nDigite a %dº nota: ", c);
                scanf("%f", &notas);
                printf("_-_-_-_-_-_-_-_-_-_");
                soma += notas;


                if(c == 1)
                    n1 = notas;
                if(c == 2)
                    n2 = notas;
                if(c == 3)
                    n3 = notas;
                c++;
            }
            else
                break;
        }

        if(n1 <= 10 && n2 <= 10 && n3 <= 10)
        {
            printf("\nAgora digite sua média (SEMESTRE) dos exercícios: ");
            scanf("%f", &mediaEx);
            if(mediaEx <= 10)
            {
                MediaA = ((soma / 3) + mediaEx) / 2;

                if(MediaA > 9 && MediaA <= 10)
                    nl = 65;

                else if(MediaA >= 7.5 && MediaA < 9)
                    nl = 66;

                else if(MediaA >= 6 && MediaA < 7.5)
                    nl = 67;

                else if(MediaA >= 4 && MediaA < 6)
                    nl = 68;

                else if(MediaA < 4)
                    nl = 69;

                system("cls");
                printf("Seu resultado foi de...");
                printf("\n\nO aluno com identificação de %s, teve as notas Nota1: %.1f. Nota2: %.1f e Nota3: %.1f.\n", identificacao, n1, n2, n3);
                printf("\nSua média dos exercicios foi de %.1f e sua média de aproveitamento foi de %.1f.\n\nSeu conceito foi %c e voce foi %s\n",
                       mediaEx, MediaA, nl, nl == 65 || nl == 66 || nl == 67 ? "Aprovado! Parabéns!!" : "Reprovado");
            }
            else
            {
                printf("A média de exercícios tem limite de 10. Tente novamente.\n");
            }
        }
        else
            printf("\nNotas não podem ser acima de 10.");

    }
    else
    {
        system("cls");
        printf("Você não se identificou Tente novamente.\n");
    }
    return 0;
}*/
/*12) Um banco concederá um crédito especial aos seus clientes de acordo com o saldo médio do
mesmo. Escreva um algoritmo que receba o saldo médio de um cliente e calcule o valor do crédito
de acordo com a tabela a seguir:
Acima de 400,00 - 30% do saldo médio
De 300,00 a 400,00 - 25% do saldo médio
De 200,00 a 300,00 - 20% do saldo médio
Até 200,00 - 10% do saldo médio
O algoritmo deve mostrar o saldo médio e o valor do crédito.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saldom, credito;

    printf("Digite seu saldo médio atual: R$ ");
    scanf("%f", &saldom);
    setbuf(stdin, NULL);

    if(saldom > 400)
    {
        credito = (saldom * 30) / 100;
        system("cls");
        printf("\nCom seu salário de R$%.2f, seu saldo especial é R$%.2f totalizando R$%.2f\n", saldom, credito, saldom+credito);
    }
    else if(saldom >= 300 && saldom <= 400)
    {
        credito = (saldom * 25) / 100;
        system("cls");
        printf("\nCom seu salário de R$%.2f, seu saldo especial é R$%.2f totalizando R$%.2f\n", saldom, credito, saldom+credito);
    }

    else if(saldom >= 200 && saldom < 300)
    {
        credito = (saldom * 20) / 100;
        system("cls");
        printf("\nCom seu salário de R$%.2f, seu saldo especial é R$%.2f totalizando R$%.2f\n", saldom, credito, saldom+credito);
    }

    else if(saldom > 1 && saldom < 200)
    {
        credito = (saldom * 10) / 100;
        system("cls");
        printf("\nCom seu salário de R$%.2f, seu saldo especial é R$%.2f totalizando R$%.2f\n", saldom, credito, saldom+credito);
    }

    else
    {
        system("cls");
        printf("\nValores abaixo de zero ou igual a ele, não recebem credito especial.\n");
    }

}*/

/*13) Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes valores
podem formar os lados de um triângulo.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, contador=1;

    printf("Digite o %dº valor: ", contador);
    scanf("%d", &a);
    setbuf(stdin, NULL);
    contador++;

    printf("Digite o %dº valor: ", contador);
    scanf("%d", &b);
    contador++;

    printf("Digite o %dº valor: ", contador);
    scanf("%d", &c);

        if(a > b + c || b > c + a || c > b + a){printf("Seus valores não podem formar um triângulo.");}

        else
            printf("Sim, seus valores formam um triângulo.");

}*/

/*14) A prefeitura de Cruzeiro abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que permita
entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser
concedido.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, emprestimo, trinta, x, prestacaom;

    printf("Digite seu salário BRUTO: ");
    scanf("%f", &salario);
    setbuf(stdin, NULL);

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &emprestimo);
    setbuf(stdin, NULL);

    printf("Quantas vezes será parcelado: ");
    scanf("%f", &x);
    setbuf(stdin, NULL);

    trinta = (salario * 30) / 100;
    prestacaom = (emprestimo / x);

    if(prestacaom > trinta)
        printf("o valor da parcela mensal é de R$%.2f. empréstimo foi NEGADO! pois exede 30%% de seu salário sendo R$%.2f ", prestacaom, trinta);
    else
        printf("Seu empréstimo foi APROVADO! Suas parcelas serão de R$%.2f", prestacaom);




    return 0;
}*/

/*15) Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes
categorias:
infantil A = 5 a 7 anos
infantil B = 8 a 10 anos
juvenil A = 11 a 13 anos
juvenil B = 14 a 17 anos
adulto = maiores de 18 anos
*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    setbuf(stdin, NULL);

    if(idade >= 5 && idade <= 7)
        printf("Categoria: Infantil A");

    else if(idade >= 8 && idade <= 10)
        printf("Categoria: Infantil B");

    else if(idade >= 11 && idade <= 13)
        printf("Categoria: Juvenil A");

    else if(idade >= 14 && idade <= 17)
        printf("Categoria: Juvenil B");

    else if(idade >= 18 && idade < 70)
        printf("Categoria: Adulto");

    else if(idade >= 70 && idade < 100)
        printf("Da pra nadar mais não!");

    else if(idade >= 100)
        printf("Tu ta morto, Da pra nadar não.");

    else if(idade < 5 && idade > 0)
        printf("Ainda não pode participar de nenhuma categoria.");

    else if(idade <= 0)
        printf("Você ainda nem nasceu e ja quer nadar?");

    return 0;
}*/

/*16) Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50*/

/*int main()
{
    int contador=0, impar=0;

    while(contador != 50)
    {
        impar = contador % 2;
        if(impar == 1)
            printf("%d ", contador);
        contador++;
    }
    return 0;
}*/

/*17) Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No final da série de
saltos de cada atleta, o melhor e o pior resultados são eliminados. O seu resultado fica sendo a
média dos três valores restantes. Você deve fazer um programa que receba o nome e as cinco
distâncias alcançadas pelo atleta em seus saltos e depois informe a média dos saltos conforme a
descrição acima informada (retirar o melhor e o pior salto e depois calcular a média). Faça uso de
uma lista para armazenar os saltos. Os saltos são informados na ordem da execução, portanto não
são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta. A
saída do programa deve ser conforme o exemplo abaixo:
Atleta: Rodrigo Santos
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m
Melhor salto: 6.5 m
Pior salto: 5.3 m
Média dos demais saltos: 5.9 m
Resultado final:
Rodrigo Santos: 5.9 m*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saltos[5], maior=0, menor=0, media=0;
    char nome[99], tecla;

        printf("Atleta: ");
        tecla = getch();
        gets(nome);

    if(tecla != 13)
    {
        for(int i=0 ; i <  5; ++i)
        {
            int c = 0;
            printf("%dº Salto: ", i+1);
            scanf("%f", &saltos[i]);

            if(i == 0)
            {
                maior = saltos[i];
                menor = saltos[i];
            }

            if(saltos[i] > maior)
                maior = saltos[i];

            if(saltos[i] < menor)
                menor = saltos[i];
        }

        printf("Atleta: %s\n", nome);
        float soma=0;
        for(int i = 0; i < 5; ++i){
        soma += (saltos[i]);
        printf("Salto %d: %.2fm\n", i+1, saltos[i]);
        }
        media = (soma-maior-menor) / 3;

        printf("Maior salto: %.2fm\nMenor Salto: %.2fm\n", maior, menor);
        printf("Media dos 3 saltos: %.2fm\nResultado final:\n", media);
        printf("%s: %.2fm\n", nome, media);
    }

    else
    {
        system("cls");
        printf("Finalizando Programa...");

    }
}*/

/*18 - Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino). Fazer um algorítimo
que calcule e escreva:
• A maior altura do grupo
• A média de altura das mulheres
• O número de homens
*/


/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador=0, NH=0, cont=0;
    float SAM=0, MDG=0, altura=0, MAM=0;
    char sexo[10];

    while(contador != 5)
    {
        printf("Digite seu sexo [m/f]: ");
        scanf("%s", sexo);

        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);

        contador++;

        if(contador == 1)
        {
            MDG = altura;
        }

        if(altura > MDG)
            MDG = altura;

        if(stricmp(sexo, "f") == 0)
        {
            SAM += altura;
            cont+=1;
        }

        if(stricmp(sexo, "m")== 0)
            NH += 1;
    }
    system("cls"); //caso queira conferir os numeros digitados sem apagar, retire essa linha:
    MAM = SAM / cont;
    printf("A maior altura digitada foi: %.2fM\n", MDG);
    printf("A média da altura das mulheres foi: %.2fm\n", MAM);
    printf("E foram registrados %d Homens.", NH);

    return 0;
}*/


/*19 - Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10.
O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo
abaixo:
o Tabuada de 5:
o 5 X 1 = 5
o 5 X 2 = 10
o ...
o 5 X 10 = 50
*/


/*int main()
{
    int numero = 0, contador = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(contador <= 10)
    {
        printf("%d x %.2d = %d\n", numero, contador, numero*contador);
        contador++;
    }

    return 0;
}*/


/*20 - Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a
quantidade de números impares.*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador = 1, numero = 0, par=0, impar=0;

    while(contador <= 10)
    {
        printf("Digite o %dº número inteiro: ", contador);
        scanf("%d", &numero);
        contador++;

        if(numero % 2 == 0)
            par++;

        else
            impar++;
    }
    printf("Você digitou %d números pares.\n", par);
    printf("Você digitou %d números ímpares.", impar);

    return 0;

}*/

/*21 - Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um
número primo é aquele que é divisível somente por ele mesmo e por 1.
*/

/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, contador=2, primo=0;

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    while(contador < numero)
    {
        contador++;
        if(numero % contador == 0)
            primo += 1;
    }
    if(primo > 1)
        printf("Seu número não é primo.");
    else
        printf("Seu número é primo.");

    return 0;
}*/


/*22 - O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um
conjunto indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas,
bem como a média das temperaturas.*/


/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador=0;
    float temperaturas=1, media=0, maior=0, menor=0, soma=0;

        while(temperaturas != 1000)
        {
            printf("Digite a %dº temperatura [1000] para encerrar: ", contador+1);
            scanf("%f", &temperaturas);

            if(temperaturas != 1000)
            {
                contador++;
                if(contador == 1)
                {
                    maior = temperaturas;
                    menor = temperaturas;
                }
                if(temperaturas > maior)
                    maior = temperaturas;

                if(temperaturas < menor)
                    menor = temperaturas;

                soma += temperaturas;

            }
        }
        printf("%d", contador);

        media = soma / contador;
        printf("A maior temperatura foi %.2f\n", maior);
        printf("A menor temperatura foi %.2f\n", menor);
        printf("A média das temperaturas foi %.2f", media);

    return 0;;
}*/

/*23 - O valor da variável a, ao final da execução do programa abaixo, será 16.
int n=5;
int a=0;
for (int b=1; b<=n ; b++) {
 for (int c=b; c<=n; c++){
 a=a+1;
 }
}
printf(“%d”,a);
[ ] CERTO [ ] ERRADO*/


/*[X] ERRADO*/

/*int main()
{
    int n=5;
    int a=0;
    for (int b=1; b<=n ; b++)
    {
        printf("\nb = %d.", b);

        for (int c=b; c<=n; c++)
        {
            printf("\nc = %d.", c);
            a=a+1;
        }
    }
    printf(" C repetiu 15x, ou seja, A = %d", a);

    return 0;
}*/

/*24 - Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos (1+3+5+7+9+...)
até que esta soma seja igual a N, o número M de termos somados será igual a raiz quadrada de N.
Exemplo: N = 16
16 = 1 + 3 + 5 + 7 M = 4 termos.
Logo, a raiz quadrada de 16 é 4.
Fazer um programa em C para ler um número inteiro e positivo N e responder se N é quadrado perfeito. */


/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero=0, contador=0, soma=0, termos=0;

    printf("Digite um número: ");
    scanf("%d", &numero);
    numero = numero;

    while(soma < numero)
    {
        contador++;
        if(contador % 2 == 1){
            soma += contador;
            termos++;
        }


    }

    if(sqrt(numero) != termos)
        printf("Seu número não é um quadrado perfeito.");
    else
        printf("seu número é um quadrado perfeito.");

    return 0;
}*/


/*25 - Um cinema possui capacidade de 300 lugares e está sempre com ocupação total. Certo dia cada
espectador respondeu a um questionário, no qual constava:
Sua idade e sua opinião sobre o filme, de acordo com a tabela abaixo:
Nota Significado
A Ótimo
B Bom
C Regular
D Ruim
E Péssimo
Elabore um programa que, lendo esses dados, calcule e imprima:
a) A quantidade de pessoas que acharam o filme ótimo.
b) A quantidade de pessoas que acharam o filme regular
c) A média de idade das pessoas que responderam: Ruim
d) A quantidade de pessoas que com idade acima de 65 anos*/



/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador=1, idade=0, otimo=0, regular=0, ruim=0, sessenta=0, i=0;
    char nota[2];

    while(i < 300)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Nota|Significado\nA   |Ótimo\nB   |Bom\nC   |Regular\nD   |Ruim\nE   |Péssimo\n");

        printf("Agora digite sua opnião sobre o filme: ");
        scanf("%s", &nota);

        printf("Obrigado Pelo seu FeedBack. Volte Sempre!!\n");

        if(strcmp(nota, "a") == 0)
            otimo++;

        if(strcmp(nota, "c") == 0)
            regular++;

        if(strcmp(nota, "d") == 0)
            ruim++;

        if(idade > 65)
            sessenta++;

        i++;
    }
printf("%d pessoas acharam o filme otimo.\n", otimo);
printf("%d pessoas acharam o filme regular.\n", regular);
printf("%d pessoas acharam o filme ruim.\n", ruim);

if(sessenta == 0)
    printf("Não tivemos nenhuma pessoa com mais de 65 anos.\n");

if(sessenta == 1)
    printf("Tivémos 1 pessoa com mais de 65 anos.\n");

if(sessenta > 1)
    printf("Tivémos %d pessoas com mais de 65 anos.\n", sessenta);

    return 0;
}*/
