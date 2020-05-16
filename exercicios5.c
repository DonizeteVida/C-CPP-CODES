#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Programa 1
    int idade = 0;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("O valor do ingresso é 15 reais\n");
    }else{
        printf("O valor do ingresso é 10 reais\n");
    }

    // Programa 2
    // É o programa 1

    //Programa 3
    int inteiro1 = 0, inteiro2 = 0;
    printf("Digite o valor do inteiro 1: ");
    scanf("%d", &inteiro1);

    printf("Digite o valor do inteiro 2: ");
    scanf("%d", &inteiro2);

    char op;
    printf("Digite a operacao desejada aos operadores 1 e 2:\n");
    printf("Soma: +\nSubtracao: -\nDivisao: /\nMultiplicacao: *\n");
    fflush(stdin);
    scanf("%c", &op);

    float result = 0;

    switch(op){
        case '+':
            result = inteiro1 + inteiro2;
        break;
        case '-':
            result = inteiro1 + inteiro2;
        break;
        case '/':
            result = (float)inteiro1 / inteiro2;
        break;
        case '*':
            result = inteiro1 * inteiro2;
        break;

        default:
        result = -1;
    }

    printf("O resultado é: %.2f", result);
    return 0;
}
