#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main(int argc, char const *argv[])
{
    int option = 0;
    int p = 0, q = 0;

    printf("Digite os valores iniciais aos futuros calculos: \n");
    printf("O primeiro valor é p: ");
    scanf("%d", &p);
    printf("Agora digite o valor de q: ");
    scanf("%d", &q);
    system("clear");

    do
    {
        printf("MENU\n1. ~ p\n2. ~ q\n3. p /\\ q\n4. p \\/ q\n5. p \\/* q\n6. p -> q\n7. p <-> q\n8. Sair.\n");
        printf("Digite um valor para a opcão: ");
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
            system("clear");
            printf("Digite um valor válido.../n");
        }
    } while (option != 8);
    return 0;
}
