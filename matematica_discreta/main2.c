#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main(int argc, char const *argv[])
{
    int option = 0;

    do
    {
        printf("MENU\n1. ~ p\n2. ~ q\n3. p /\\ q\n4. p \\/\n5. \\/*\n6. p -> q\n7. p <-> q\n8. Sair.\n");
        print("Digite um valor para a opcão: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            system("cls");
            printf("Digite um valor válido...");
        }
    } while (option != 8);
    return 0;
}
