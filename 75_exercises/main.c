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

void ex21()
{
    int numeros[3];
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
        soma += *(numeros + i);
    }

    if (soma > 50)
    {
        printf("Maior que 50");
    }
}

void ex22()
{
    int numeros[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }
    int ab = numeros[0] + numeros[1];
    int c = numeros[2];
    if (ab > c)
    {
        printf("A + B maior que C");
    }
    else if (ab < c)
    {
        printf("A + B menor que C");
    }
    else
    {
        printf("A + B é igual a C");
    }
}

void ex23()
{
    int a = 0, b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    int c = 0;

    if (a == b)
    {
        c = a + b;
    }
    else
    {
        c = a * b;
    }

    printf("A: %d\nB: %d\nC: %d\n", a, b, c);
}

void ex24()
{
    int numero = 0;

    scanf("%d", &numero);

    if (numero > 20)
    {
        printf("O numero é %.2f", (float)numero / 2);
    }
}

void ex25()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero: %d", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = numeros + a;
            int *prox = numeros + a + 1;

            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }
    printf("O maior numero é: %d", numeros[2]);
}

void ex26()
{
    int num = 0;

    scanf("%d", &num);

    if (num > 0)
    {
        printf("Num is positive");
    }
    else if (num < 0)
    {
        printf("Num is negative");
    }
    else
    {
        printf("Num is NULL");
    }
}

void ex27()
{
    int num = 0;

    scanf("%d", &num);

    if (num > 20)
    {
        printf("%d", num);
    }
}

void ex28()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int r = num1 + num2;

    if (r > 20)
    {
        printf("%d", r);
    }
}

void ex29()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int r = num1 + num2;

    if (r > 20)
    {
        printf("%d", r + 8);
    }
    else
    {
        printf("%d", r - 5);
    }
}

void ex30()
{
    float num = 0;

    scanf("%f", &num);

    if (num > 0)
    {
        printf("%.2f", sqrt(num));
    }
    else
    {
        printf("%.2f", pow(num, 2));
    }
}

void ex31()
{
    int num = 0;

    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("É multiplo de 3");
    }
    else
    {
        printf("Nao é multiplo de 3");
    }
}

void ex32()
{
    int num = 0;

    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("É divisivel por 5");
    }
    else
    {
        printf("Não é divisivel por 5");
    }
}

void ex33()
{
    int num = 0;

    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("É divisivel por 3 e 7");
    }
    else
    {
        printf("Não é divisivel por 3 e 7");
    }
}

void ex34()
{
    int isDivisible = 0;

    int num = 0;

    scanf("%d", &num);

    if (num % 10 == 0)
    {
        printf("É divisivel por 10");
        isDivisible = 1;
    }

    if (num % 5 == 0)
    {
        printf("É divisivel por 5");
        isDivisible = 1;
    }

    if (num % 2 == 0)
    {
        printf("É divisivel por 2");
        isDivisible = 1;
    }

    if (!isDivisible)
    {
        printf("Nao é divisivel por ninguem");
    }
}

void ex35()
{
    float salario = 0;
    float emprestimo = 0;
    scanf("%f", &salario);
    scanf("%f", &emprestimo);

    if (salario * .3 < emprestimo)
    {
        printf("Nao pode fazer o emprestimo");
    }
}

void ex36()
{
    int num = 0;

    scanf("%d", &num);

    if ((num / 100) % 2 == 0)
    {
        printf("O algarismo das centenas é par");
    }
}

void ex37()
{
    int num = 0;

    scanf("%d", &num);

    if ((num / 100) % 4 == 0)
    {
        printf("O algarismo das centernas e milhares é multiplo de 4");
    }
}

void ex38()
{
    int num = 0;

    scanf("%d", &num);

    if (num >= 20 && num <= 90)
    {
        printf("Esta compreendido");
    }
    else
    {
        printf("Nao");
    }
}

void ex39()
{
    int num = 0;

    scanf("%d", &num);

    if (num > 20)
    {
        printf("Maior que 20");
    }
    else if (num < 20)
    {
        printf("Menor que 20");
    }
    else
    {
        printf("Igual a 20");
    }
}

void ex40()
{
    int nasc = 0;
    int dataAtual = 0;

    do
    {
        scanf("%d", &nasc);
    } while (nasc <= 0);

    do
    {
        scanf("%d", &dataAtual);
    } while (dataAtual <= 0);

    printf("Seu ano de nascimento é: %d", dataAtual - nasc);
}

void ex41()
{
    char nome[10], sexo[10];
    int idade = 0;

    scanf("%s", nome);
    scanf("%s", sexo);
    scanf("%d", &idade);

    if (strcmp(sexo, "feminino\0") == 0 && idade < 25)
    {
        printf("%s ACEITA", nome);
    }
}

void ex42()
{
    char sigla[2];

    scanf("%s", sigla);

    if (!strcmp(sigla, "RJ\0"))
    {
        printf("É carioca");
    }
    else if (!strcmp(sigla, "MG\0"))
    {
        printf("É mineira");
    }
    else if (!strcmp(sigla, "SP\0"))
    {
        printf("É paulistana");
    }
    else
    {
        printf("É de outro estado");
    }
}

void ex43()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Sao iguais");
    }
    else
    {
        printf("Sao diferentes");
    }
}

void ex44()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d", num1);
    }
    else
    {
        printf("%d", num2);
    }
}

void ex45()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("%d", num1);
    }
    else
    {
        printf("%d", num2);
    }
}

void ex46()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d %d", num2, num1);
    }
    else
    {
        printf("%d %d", num1, num2);
    }
}

void ex47()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d %d", num1, num2);
    }
    else
    {
        printf("%d %d", num2, num1);
    }
}

void ex48()
{
    int num1 = 0, num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        double quad = pow(num2, 2);
        double raiz = sqrt(num1);
        printf("Quadrado: %lf e raiz: %lf", quad, raiz);
    }
    else
    {
        double quad = pow(num1, 2);
        double raiz = sqrt(num2);
        printf("Quadrado: %lf e raiz: %lf", quad, raiz);
    }
}

void ex49()
{
    int num1 = 0, num2 = 0, num3 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2)
    {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num2 > num3)
    {
        int aux = num2;
        num2 = num3;
        num3 = aux;
    }

    if (num1 > num2)
    {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    printf("Maior: %d", num3);
    printf("Menor: %d", num1);
}

void ex50()
{
    int numeros[3];
    int *maior = NULL;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);

        if (maior == NULL)
        {
            maior = numeros + i;
        }
        else
        {
            if (*maior < *(numeros + i))
            {
                maior = numeros + i;
            }
        }
    }

    printf("Maior: %d", *maior);
}

void ex51()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = (numeros + a);
            int *prox = (numeros + a + 1);
            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    printf("1: %d, 2: %d e 3: %d", *(numeros), *(numeros + 1), *(numeros + 2));
}

void ex52()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = (numeros + a);
            int *prox = (numeros + a + 1);
            if (*atual < *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    printf("1: %d, 2: %d e 3: %d\n", *(numeros), *(numeros + 1), *(numeros + 2));
}

void ex53()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = (numeros + a);
            int *prox = (numeros + a + 1);
            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    printf("Maior: %d, intermediario: %d e menor: %d\n", *(numeros), *(numeros + 1), *(numeros + 2));
}

void ex54()
{
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 4; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = (numeros + a);
            int *prox = (numeros + a + 1);
            if (*atual < *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }

    printf("Maior numero: %d e menor número: %d", *numeros, *(numeros + 4));
}

void ex55()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            int *atual = (numeros + a);
            int *prox = (numeros + a + 1);
            if (*atual > *prox)
            {
                int aux = *atual;
                *atual = *prox;
                *prox = aux;
            }
        }
    }
    if (*(numeros) + *(numeros + 1) < *(numeros + 2))
    {
        printf("Nao pode ser um triangulo");
    }
    else
    {
        printf("Pode ser um triangulo");
    }
}

void ex56()
{
    int idade = 0;
    scanf("%d", &idade);
    if (idade < 18)
    {
        printf("Menor de idade");
    }
    else if (idade > 65)
    {
        printf("Idoso");
    }
    else
    {
        printf("Tá na idade");
    }
}

void ex57()
{
    int num = 0;

    if (num == 5)
    {
        printf("Num é igual a 5");
    }
    else if (num == 200)
    {
        printf("Num é igual a 200");
    }
    else if (num == 400)
    {
        printf("Num é igual a 400");
    }
    else if (num >= 500 && num <= 1000)
    {
        printf("Está no intervalo de 500 e 1000");
    }
    else
    {
        printf("Nao atinge nenhhum dos escopos anteriores");
    }
}

void ex58()
{
    int notas[2];
    char nome[100];

    for (int i = 0; i < 2; i++)
    {
        printf("Insira a nota %d", i + 1);
        scanf("%d", notas + i);
    }
    int media = (notas[0] + notas[1]) / 2;

    printf("%s sua media foi de %d e voce está %s", nome, media, media >= 7 ? "aprovado\0" : media <= 3 ? "reprovado\0" : "em prova final\0");
}

void ex59()
{
    float salario = 0;

    scanf("%f", salario);
    float desconto;
    if (salario <= 600)
    {
        desconto = 0;
    }
    else if (salario <= 1200)
    {
        desconto = 20;
    }
    else if (salario <= 1800)
    {
        desconto = 25;
    }
    else
    {
        desconto = 30;
    }

    printf("Seu desconto é de %.2f", salario * desconto / 100);
}

void ex60()
{
    float valor = 0;
    scanf("%f", &valor);

    int pVenda = 30;

    if (valor < 20)
    {
        pVenda = 45;
    }

    printf("O valor da venda sera de %.2f", valor / (pVenda + 100) / 100);
}

void ex61()
{
    float altura = 0;
    char sexo[10];

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Ditite o seu sexo: ");
    scanf("%s", sexo);

    if (!strcasecmp(sexo, "masculino\0"))
    {
        float p = (72.7 * altura) - 58;
        printf("Em caso de homens, o peso ideal para a altura de %.2f é de %.2f", altura, p);
    }
    else if (!(strcasecmp(sexo, "feminino\0")))
    {
        float p = (62.1 * altura) - 44.7;
        printf("Em caso de mulheres, o peso ideal para a altura de %.2f é de %.2f", altura, p);
    }
    else
    {
        printf("Que sexo é esse ? ");
    }
}

void ex62()
{
}

int main(int argc, char const *argv[])
{
    ex58();
    return 0;
}
