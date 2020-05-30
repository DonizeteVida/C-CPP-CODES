#include "symbols.h"
#include <stdio.h>

void symbol1(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void symbol2(int num)
{
    symbol1(num);
    for (int i = 1; i <= num; i++)
    {
        for (int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void symbol3(int num)
{
    int control1 = num / 2;
    int control2 = (num / 2) + 1;

    for (int i = 1; i <= num / 2; i++, control1--, control2++)
    {
        for (int a = 1; a <= num; a++)
        {
            if (a <= control1 || a >= control2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if (i == num / 2)
        {
            continue;
        }
        printf("\n");
    }
    for (int i = 1; i <= (num / 2) + 1; i++, control1++, control2--)
    {
        for (int a = 1; a <= num; a++)
        {
            if (a <= control1 || a >= control2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void symbol4(int num)
{
    int control1 = 1;
    int control2 = num;

    int control3 = (num / 2) + 1;
    int control4 = (num / 2) + 1;

    for (int i = 1; i <= num / 2; i++, control1++, control2--, control3--, control4++)
    {
        for (int a = 1; a <= num; a++)
        {
            if (a == control1)
            {
                printf("\\");
            }
            else if (a == control2)
            {
                printf("/");
            }
            else if (a >= control3 && a <= control4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= (num / 2) + 1; i++, control1--, control2++, control3++, control4--)
    {
        for (int a = 1; a <= num; a++)
        {
            if (a == control1)
            {
                printf("/");
            }
            else if (a == control2)
            {
                printf("\\");
            }
            else if (a >= control3 && a <= control4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void symbol5(int num)
{
}