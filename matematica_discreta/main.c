#include <stdio.h>
#include <stdlib.h>

#include "types.h"

int main(int argc, char const *argv[])
{
    printf("%d", or(1, 0));
    printf("%d", xor(1, 1));
    return 0;
}
