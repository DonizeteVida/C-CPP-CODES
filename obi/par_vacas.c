#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vacas = 0;
    scanf("%d", &vacas);
    int pares[vacas];

    for (int i = 0; i < vacas; i++)
    {
        scanf("%d", pares + i);
    }

    int possiveis = 0;

    for (int i = 0; i < vacas; i++)
    {
        for (int a = 0; a < vacas; a++)
        {
            if (a != i)
            {
                if (*(pares + a) % *(pares + i) == 0)
                {
                    possiveis++;
                }
            }
        }
    }

    printf("%d", possiveis);

    return 0;
}
