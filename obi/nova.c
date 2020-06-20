#include <stdio.h>
#include <stdlib.h>

char *createString(int m)
{
    char *newString = malloc(sizeof(char) * (m + 1));

    for (int i = 0; i < m; i++)
    {
        scanf("%c", newString + i);
    }
    *(newString + m) = '\0';
    return newString;
}

int main(int argc, char const *argv[])
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        createString(m);
    }

    return 0;
}
