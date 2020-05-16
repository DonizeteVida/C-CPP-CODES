#include "symbols.h"
#include <stdio.h>

void symbol1(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < num - 2; i++)
    {
        for (int a = 0; a < num; a++)
        {
            char c = ' ';
            if (a == 0 || a == (num - 1))
            {
                c = '*';
            }
            printf("%c", c);
        }
        printf("\n");
    }

    for (int i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");
}
void symbol2(int num)
{
    for (int i = 0; i < num; i++)
    {
        char c = '*';

        if (i == 0 || i == (num - 1))
        {
            c = ' ';
        }
        printf("%c", c);
    }
    printf("\n");
    for (int i = 0; i < num - 2; i++)
    {
        for (int a = 0; a < num; a++)
        {
            char c = ' ';
            if (a == 0 || a == (num - 1))
            {
                c = '*';
            }
            printf("%c", c);
        }
        printf("\n");
    }
    for (int i = 0; i < num; i++)
    {
        char c = '*';

        if (i == 0 || i == (num - 1))
        {
            c = ' ';
        }
        printf("%c", c);
    }
    printf("\n");
}
void symbol3(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
void symbol4(int num)
{
    int control = num - 2;

    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a < num; a++)
        {
            char c = ' ';

            if (a > control)
            {
                c = '*';
            }

            printf("%c", c);
        }
        control--;
        printf("\n");
    }
    printf("\n");
}
void symbol5(int num)
{
    int control = 0;

    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a < num; a++)
        {
            char c = '*';

            if (a < control)
            {
                c = ' ';
            }
            printf("%c", c);
        }
        control++;
        printf("\n");
    }

    printf("\n");
}
void symbol6(int num)
{
    int meio = ((num + 1) / 2) - 1;
    for (int i = 0; i < num; i++)
    {
        int meioMeio = i == meio;

        if (meioMeio)
        {
            for (int b = 0; b < num; b++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }

        for (int a = 0; a < num; a++)
        {
            char c = ' ';

            if (a == meio)
            {
                c = '*';
            }
            printf("%c", c);
        }
        printf("\n");
    }
    printf("\n");
}
void symbol7(int num)
{
    int control = ((num + 1) / 2) - 1;
    int controlA = control;
    int controlB = control;

    int reverseLogic = 1;

    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a < num; a++)
        {
            int shouldPrint = a == controlA || a == controlB;
            int c = ' ';
            if (shouldPrint)
            {
                c = '*';
            }
            printf("%c", c);
        }
        printf("\n");
        if (controlB == 0)
        {
            reverseLogic = !reverseLogic;
        }

        if (!reverseLogic)
        {
            controlA--;
            controlB++;
        }
        else
        {
            controlA++;
            controlB--;
            //Quando B virar zero, ativa o gatilho de reverter
        }
    }
}