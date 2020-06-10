#include <stdio.h>
#include <string.h>
#include <math.h>

void ex1()
{
    int num1 = 0, num2 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O primeiro é maior que o segundo !!!");
    }
}

void ex2()
{
    int num1 = 0, num2 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O primeiro é maior que o segundo !!!");
    }
    else
    {
        printf("O primeiro não é maior que o segundo !!!");
    }
}

void ex3()
{
    int x = 0, y = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0)
    {
        if (y > 0)
        {
            printf("Está no quadrante 1");
        }
        else if (y < 0)
        {
            printf("Está no quadrante 2");
        }
        else
        {
            printf("Está entre o quadrante 1 e 2");
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            printf("Está no quadrante 4");
        }
        else if (y < 0)
        {
            printf("Está no quadrante 3");
        }
        else
        {
            printf("Está entre o quadrante 3 e 4");
        }
    }
    else
    {
        if (y > 0)
        {
            printf("Está entre o quadrante 1 e 4");
        }
        else if (y < 0)
        {
            printf("Está entre o quadrante 2 e 3");
        }
        else
        {
            printf("Está no centro");
        }
    }
}

void ex4()
{
    float salario = 0;
    char tipo[10];

    scanf("%f", &salario);
    gets(tipo);

    if (strcasecmp(tipo, "técnico\0") == 0)
    {
        printf("O salario é de %.2f", salario * 1.5);
    }
    else if (strcasecmp(tipo, "gerente\0") == 0)
    {
        printf("O salario é de %.2f", salario * 1.3);
    }
    else
    {
        printf("O salario é de %.2f", salario * 1.3);
    }
}

void ex5()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int result = 3 * (a + b) / (a * c) - c + b;

    if (result > a * b * c)
    {
        printf("O resultado é maior");
    }
    else
    {
        printf("O resultado não é maior");
    }
}

void ex6()
{
    float salarioMinimo = 0, salario = 0;

    scanf("%f", &salarioMinimo);
    scanf("%f", &salario);

    float relation = salarioMinimo / salario;

    if (relation <= 3)
    {
        printf("A contribuicao é de %.2f", salario * .8);
    }
    else
    {
        float result = salario * .10;

        if (result > salarioMinimo)
        {
            printf("A contribuicao é de %.2f", salarioMinimo);
        }
        else
        {
            printf("A contribuicao é de %.2f", result);
        }
    }
}

void ex7()
{
    float salarioLiquido = 0;

    scanf("%f", &salarioLiquido);

    if (salarioLiquido <= 900)
    {
        printf("Nada será retido");
    }
    else if (salarioLiquido <= 1800)
    {
        printf("Será retido %.2f", salarioLiquido * 0.15);
    }
    else
    {
        printf("Será retido %.2f", salarioLiquido * 0.275);
    }
}

void ex8()
{
    int provas[4];
    int trabalhos[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Insira a nota da prova %d", i + 1);
        scanf("%d", provas + i);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Insira a nota do trabalho %d", i + 1);
        scanf("%d", trabalhos + i);
    }

    int sProva = 0;
    int sTrabalho = 0;

    for (int i = 0; i < 4; i++)
    {
        sProva += *(provas + i);
        sTrabalho += *(trabalhos + i);
    }

    float mediaFinal = ((sProva / 4) * .8) + ((sTrabalho / 4) * .2);

    if (mediaFinal >= 6)
    {
        printf("Está aprovado !!!");
    }
    else
    {
        printf("Não está aprovado !!!!");
    }
}

void ex9()
{
    int lados[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o lado %d: ", i + 1);
        scanf("%d", lados + i);
    }

    for (int a = 2; a >= 0; a--)
    {
        for (int i = 0; i < a; i++)
        {
            int *atual = lados + i;
            int *prox = lados + i + 1;

            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    if ((lados[0] + lados[1]) >= lados[2])
    {
        printf("É possivel formar um triangulo");
    }
    else
    {
        printf("Nao é possivel formar um triangulo");
    }
}

void ex10()
{
    float salario = 0;
    scanf("%f", &salario);

    float reajuste = 0;
    if (salario < 500)
    {
        reajuste = .15;
    }
    else if (salario <= 1000)
    {
        reajuste = .10;
    }
    else
    {
        reajuste = .5;
    }

    printf("O reajuste foi de %.2f", salario * reajuste);
}

void ex11()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 1000)
    {
        printf("Está na faixa");
    }
}

void ex12()
{
    char sexo[10];
    gets(sexo);

    if (strcmp(sexo, "masculino\0") == 0 || strcmp(sexo, "feminino\0") == 0)
    {
        printf("Digitou um sexo válido");
    }
}

void ex13()
{
    int lados[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o lado %d: ", i + 1);
        scanf("%d", lados + i);
    }

    for (int a = 2; a >= 0; a--)
    {
        for (int i = 0; i < a; i++)
        {
            int *atual = lados + i;
            int *prox = lados + i + 1;

            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    if (lados[0] == lados[1] == lados[2])
    {
        printf("O triangulo é equilatero");
    }
    else if (lados[1] == lados[2])
    {
        printf("É isoceles");
    }
    else
    {
        printf("É escaleno");
    }
}

void ex14()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero > 30)
    {
        printf("%d", numero / 2);
    }
    else
    {
        printf("%d", numero * 2);
    }
}

void ex15()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("%d", numero * -1);
    }
    else
    {
        printf("%d", numero);
    }
}

void ex16()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("É par");
    }
    else
    {
        printf("É impar");
    }
}

void ex17()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero < (sqrt(numero) / (2 * numero)))
    {
        printf("Sim");
    }
    else
    {
        printf("Não");
    }
}

void ex18()
{
    int notas[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", notas + i);
    }

    float final = (notas[0] + notas[1] + notas[2]) / 3;

    if (final >= 7)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
}

void ex19()
{
    int a = 0, b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    int produto = a * b;

    if (produto > 20)
    {
        a = b;
    }
    else
    {
        b = a;
    }
}

void ex20()
{
    float num1 = 0, num2 = 0;
    int opc = 0;
    scanf("%f", &num1);
    scanf("%f", &num2);

    do
    {
        printf("Escolha uma opcao: \n1 => Adicao\n2 => Subtracao\n3 => Multiplicacao\n4 => Divisao");
        scanf("%d", &opc);
    } while (opc < 1 || opc > 4);

    float resultado = 0;

    if (opc == 1)
    {
        resultado = num1 + num2;
    }
    else if (opc == 2)
    {
        resultado = num1 - num2;
    }
    else if (opc == 3)
    {
        resultado = num1 * num2;
    }
    else
    {
        resultado = num1 / num2;
    }

    printf("O resultado é: %.2f", resultado);
}

int main(int argc, char const *argv[])
{
    ex13();
    return 0;
}
