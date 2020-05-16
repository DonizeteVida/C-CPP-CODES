#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "symbols.h"

int main(int argc, char const *argv[])
{
    //Programa 1
    int var1 = 0;

    while (var1++ != 10)
    {
        printf("5 x %d == %d\n", var1, 5 * var1);
    }

    //Programa2
    int var2 = 0;
    int var2aux = 0;
    printf("Escolha qual tabuada deseja: ");
    scanf("%d", &var2);

    while (var2aux++ != 10)
    {
        printf("%d x %d == %d\n", var2, var2aux, var2 * var2aux);
    }

    //Programa3
    int tabuadaAtual = 0;
    int multiplicacaoAtual = 0;

    while (tabuadaAtual++ != 10)
    {
        while (multiplicacaoAtual++ != 10)
        {
            printf("%d x %d == %d\n", tabuadaAtual, multiplicacaoAtual, tabuadaAtual * multiplicacaoAtual);
        }
        printf("---------------------\n");
        multiplicacaoAtual = 0;
    }

    //Programa4
    while (1)
    {
        printf("Escolha uma das opcoes a seguir: \n");
        char *options[] = {
            "1: Soma",
            "2: Subtracao",
            "3: Divisao",
            "4: Multiplicacao",
            "5: Sair",
        };

        int optionsCounter = 0;
        while (optionsCounter != 5)
        {
            printf("%s\n", options[optionsCounter++]);
        }

        int optionsChosed = 0;
        scanf("%d", &optionsChosed);

        if (optionsChosed < 1 || optionsChosed > 4)
            break;

        float (*operations[])(float, float) = {
            &soma,
            &subtracao,
            &divisao,
            &multiplicacao,
        };

        float num1 = 0;
        float num2 = 0;

        printf("Digite o numero 1: ");
        scanf("%f", &num1);

        printf("Digite o numero 2: ");
        scanf("%f", &num2);

        float (*selectedOperation)(float, float) = operations[optionsChosed - 1];

        float result = selectedOperation(num1, num2);

        printf("O resultado é: %.2f\n\n", result);
    }

    //Programa5
    int nNaturais = 0;

    printf("Digite o natural a ser calculado: ");
    scanf("%d", &nNaturais);

    int result = 0;
    while (nNaturais > 0)
    {
        result += nNaturais;
        nNaturais--;
    }
    printf("Naturais calculados: %d\n", result);

    //Programa6
    for (int num = 1; num <= 10; num++)
    {
        printf("5 x %d == %d\n", num, num * 5);
    }
    printf("------");

    int tabuada = 0;
    printf("Digite a tabuada desejada: ");
    scanf("%d", &tabuada);

    for (int num = 1; num <= 10; num++)
    {
        printf("%d x %d == %d\n", tabuada, num, tabuada * num);
    }
    printf("------\n");

    for (int tab = 1; tab <= 10; tab++)
    {
        for (int value = 1; value <= 10; value++)
        {
            printf("%d x %d == %d\n", tab, value, tab * value);
        }
        printf("--------------\n");
    }

    //Programa7
    int entre1e10 = 0;
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &entre1e10);

    while (entre1e10 >= 0)
    {
        printf("%d\n", entre1e10--);
    }

    //Programa8
    int imageCounterGenerator = 0;
    while (imageCounterGenerator % 2 == 0 || imageCounterGenerator < 0)
    {
        printf("Digite o numero para gerar as imagens, maior que zero e impar: ");
        scanf("%d", &imageCounterGenerator);
    }
    void (*symbols[])(int) = {
        &symbol1,
        &symbol2,
        &symbol3,
        &symbol4,
        &symbol5,
        &symbol6,
        &symbol7,
    };

    int count = 0;
    do
    {
        symbols[count](imageCounterGenerator);
    } while (++count < 7);
    return 0;
}
