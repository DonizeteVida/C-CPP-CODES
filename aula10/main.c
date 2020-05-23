#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Numero
{
    int numero;
    struct Numero *prox;
};

typedef struct Numero Numero;

int main(int argc, char const *argv[])
{
    //Programa 8
    Numero *numero = (Numero *)malloc(sizeof(Numero));
    numero->numero = 10;
    return 0;

    //Programa 1
    int quantity = 5;
    int *numeros = malloc(sizeof(int) * quantity);

    for (int i = 0; i < quantity; i++)
    {
        printf("Digite o valor %d\n", i + 1);
        scanf("%d", numeros + i);
    }

    for (int i = 0; i < quantity; i++)
    {
        printf("O valor elevado de %d é %.2f\n", *(numeros + i), pow(*(numeros + i), 2));
    }

    //Programa2
    for (int i = 0; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    //Programa3
    for (int i = 100; i > 0; i--)
    {
        printf("%d\n", i);
    }

    //Programa4
    for (int i = 100; i > 0; i -= 2)
    {
        printf("%d\n", i);
    }

    //Programa5
    for (int i = 120; i <= 300; i++)
    {
        printf("%d\n", i);
    }

    //Programa5

    int inicio, fim, incremento;

    printf("Digite o inicio do programa: \n");
    scanf("%d", &inicio);

    printf("Digite o fim do programa: \n");
    scanf("%d", &fim);

    printf("Digite o incremento do programa: \n");
    scanf("%d", &incremento);

    for (int i = inicio; i <= fim; i += incremento)
    {
        printf("%d ", i);
    }
    printf("\n");

    //Programa6 -- Bubble sort
    int tam = 10;
    int numerosToSort[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", numerosToSort + i);
    }

    for (int i = tam - 1; i >= 0; i--)
    {
        for (int o = 0; o < i; o++)
        {
            int *item1 = numerosToSort + o;
            int *item2 = numerosToSort + (o + 1);

            if (*item1 > *item2)
            {
                int aux = *item1;
                *item1 = *item2;
                *item2 = aux;
            }
        }
    }

    printf("Numeros em ordem crescente, primeiro menor, depois maior.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(numerosToSort + i));
    }
    printf("\n");

    //Programa7

    int serie = 0;
    printf("Digite a serie: ");
    scanf("%d\n", &serie);

    float total = 0;

    for (int i = 1; i <= serie; i++)
    {
        total += (float)1 / i;
    }

    printf("Total %f", total);
}
