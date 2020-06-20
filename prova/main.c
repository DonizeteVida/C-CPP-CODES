#include <stdio.h>
#include <string.h>

void ex1()
{
    char sexo[10];
    printf("Digite o seu sexo: ");
    scanf("%s", sexo);

    float altura = 0;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if (!strcmp(sexo, "masculino\0"))
    {
        float r = (72.7 * altura) - 58;
        printf("O peso ideal para o sexo masculino é: %.2f", r);
    }

    if (!strcmp(sexo, "feminino\0"))
    {
        float r = (62.1 * altura) - 44.7;
        printf("O peso ideal para o sexo feminino é: %.2f", r);
    }
}

void ex2()
{
    int counter = 0;
    float menor = 0;
    float maior = 0;
    float total = 0;
    do
    {

        printf("Digite o salario %d: ", counter + 1);
        float salario = 0;
        scanf("%f", &salario);
        if (salario == 0)
        {
            break;
        }
        else
        {
            if (counter == 0)
            {
                menor = salario;
                maior = salario;
            }
            else
            {
                if (salario > maior)
                {
                    maior = salario;
                }
                else if (salario < menor)
                {
                    menor = menor;
                }
            }
            total += salario;
            counter++;
        }

        printf("Maior: %.2f, menor: %.2f e media: %.2f", maior, menor, total / counter);
    } while (1);
}

void ex3()
{
    float produto = 0;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    printf("O valor do imposto é %.2f", produto * .18);
}

typedef struct
{
    int cod;
    char nome[100];
    int contagem;
} Candidato;

void ex4()
{
    Candidato candidatos[] = {
        {-1, "Nulo", 0},
        {0, "Branco", 0},
        {1, "Candidato 1", 0},
        {2, "Candidato 2", 0},
        {3, "Candidato 3", 0},
    };

    do
    {
        int voto = 0;
        printf("Digite o voto: \n");
        scanf("%d", &voto);
        if (voto == -2)
        {
            break;
        }
        candidatos[voto + 1].contagem++;
    } while (1);

    int maiorVotado;
    int qtdMaiorVotado = 0;
    for (int i = 0; i < 5; i++)
    {
        Candidato *candidato = (candidatos + i);
        if (candidato->contagem > qtdMaiorVotado)
        {
            maiorVotado = i;
        }
        printf("Votos em %s foram de %d\n", candidato->nome, candidato->contagem);
    }

    printf("O ganhador foi %s\n", candidatos[maiorVotado].nome);
}

void ex5()
{
    int numeros[3];
    int maior;
    for (int i = 0; i < 3; i++)
    {

        printf("Digite o numero %d: ", i + 1);
        scanf("%d", numeros + 1);
        if (i == 0)
        {
            maior = numeros[i];
        }
        else
        {
            if (numeros[i] > maior)
            {
                maior = numeros[i];
            }
        }
    }

    printf("O maior numero foi o %d", maior);
}

void ex7()
{
    float tnotas = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        float nota = 0;
        scanf("%f", &nota);
        tnotas += nota;
    }
    printf("A média das notas é de %.2f", tnotas / 4);
}

void ex8()
{
    float altura = 0, largura = 0;
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a altura: ");
    scanf("%f", &largura);

    float total = altura * largura;
    float latas = total / 15;
    float litros = latas * 18;
    float custo = latas * 250;

    printf("Voce vai precisar de %.2f latas, que serao %.2f litros e custarao %.2f reais", latas, litros, custo);
}

void ex9()
{
    int inf = 0;

    printf("Digite o numero de pessoas infectadas: ");
    scanf("%d", &inf);

    int mascDead = 0;
    int moreThan60 = 0;
    int morbDead = 0;
    int totalDead = 0;
    do
    {
        char s = '\0';
        printf("Digite o sexo: ");
        scanf("%c", &s);

        if (s == 'm')
        {
            mascDead++;
        }

        int idade = 0;
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > 60)
        {
            moreThan60++;
        }

        char morbidade = '\0';
        printf("Tinha alguma morbidade: ");
        scanf("%s", &morbidade);

        if (morbidade == 's')
        {
            morbDead++;
        }
        totalDead++;

        if (totalDead > 10)
        {
            break;
        }
    } while (1);
    printf("Mortos: %.2f, masculino: %.2f, mais de 60 anos: %.2f e morbidade: %.2f", (float)totalDead / inf * 100, (float)mascDead / inf * 100, (float)moreThan60 / totalDead * 100, (float)morbDead / inf * 100);
}

void ex10()
{
    int lados[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o lado %d: ", i + 1);
        scanf("%d", lados + i);
    }

    if (lados[0] == lados[1] && lados[0] == lados[2])
    {
        printf("É equilatero");
    }
    else if (lados[0] != lados[1] && lados[0] != lados[2] && lados[1] != lados[2])
    {
        printf("É escaleno");
    }
    else
    {
        printf("É isosceles");
    }
}

int main(int argc, char const *argv[])
{
    ex4();
    return 0;
}
