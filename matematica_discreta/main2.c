#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main(int argc, char const *argv[])
{
    int option = 0;
    int p = 0, q = 0;

    printf("Digite os valores iniciais aos futuros calculos ( eles devem ser os valores 0 e 1 ): \n");
    printf("O primeiro valor é p: ");
    scanf("%d", &p);
    printf("Agora digite o valor de q: ");
    scanf("%d", &q);
    system("clear");

    if ((p > 1 || p < 0) || (q > 1 || q < 0))
    {
        return 0;
    }

    do
    {
        printf("MENU\n1. ~ p\n2. ~ q\n3. p /\\ q\n4. p \\/ q\n5. p \\/* q\n6. p -> q\n7. p <-> q\n8. Sair.\n");
        printf("Digite um valor para a opcão: ");
        scanf("%d", &option);

        int finalResult = -1;

        switch (option)
        {
        case 1:
            finalResult = not(p);
            break;
        case 2:
            finalResult = not(q);
            break;
        case 3:
            finalResult = and(p, q);
            break;
        case 4:
            finalResult = or (p, q);
            break;
        case 5:
            finalResult = xor(p, q);
            break;
        case 6:
            finalResult = ifJust(p, q);
            break;
        case 7:
            finalResult = ifJustIf(p, q);
            break;
        case 8:
            return 0;
        default:
            system("clear");
            printf("Digite um valor válido.../n");
        }

        system("clear");
        printf("O resultado é: %d\n", finalResult);
    } while (option != 8);
    return 0;
}
