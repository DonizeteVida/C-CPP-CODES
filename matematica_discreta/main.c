#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

typedef void (*Type)(int, int);

char *typesDesc[] = {
    "AND\0",
    "OR\0",
    "XOR\0",
    "IFJUST\0",
    "IFJUSTIF\0",
};

//Better than (*typeDesc[])(int, int)
int (*typesFuncPointer[])(int, int) = {
    &and,
    & or
    ,
    &xor,
    &ifJust,
    &ifJustIf,
};

void line(const char *const prefix)
{
    if (strlen(prefix) > 0)
        printf("%s", prefix);
    printf("------------------------\n");
}

void trueTable(int value1, int value2)
{
    line("");
    printf("%d | %d ", value1, value2);
    for (int i = 0; i < 5; i++)
    {
        printf("| %d ", typesFuncPointer[i](value1, value2));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int value1, value2;
    printf("V1 | V2 ");
    for (int i = 0; i < 5; i++)
    {
        printf("| %s ", typesDesc[i]);
    }
    printf("\n");
    for (value1 = 0; value1 <= 1; value1++)
    {
        for (value2 = 0; value2 <= 1; value2++)
        {
            trueTable(value1, value2);
        }
    }
    return 0;
}
