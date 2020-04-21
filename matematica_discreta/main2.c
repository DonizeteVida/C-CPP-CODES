#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main(int argc, char const *argv[])
{
    int option = 0;

    do
    {
        printf("MENU\n1. ~ p\n2. ~ q\n3. p /\\ q\n4. p \\/\n5. \\/*\n6. p -> q\n7. p <-> q\n8. Sair.\n");
        print("Digite um valor: ");
        scanf("%d", &option);
    } while (option != 8);
    return 0;
}
