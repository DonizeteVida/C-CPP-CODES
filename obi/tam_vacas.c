#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vacas = 0;
    scanf("%d", &vacas);
    int alturas[vacas];

    for (int i = 0; i < vacas; i++)
    {
        scanf("%d", alturas + i);
    }

    int maior = 1;
    int atual = 1;
    for (int i = vacas - 2; i >= 0; i--)
    {
        if (*(alturas + i) < *(alturas + i + 1))
        {
            atual++;
        }
        else
        {
            maior = atual;
            atual = 1;
        }
    }

    printf("%d", maior);
    return 0;
}
