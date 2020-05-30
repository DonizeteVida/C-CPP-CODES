#include "symbols.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    void (*symbols[])(int) = {
        &symbol1,
        &symbol2,
        &symbol3,
        &symbol4,
        &symbol5,
    };

    for (int i = 0; i < 5; i++)
    {
        (*(symbols + i))(7);
    }
    return 0;
}
