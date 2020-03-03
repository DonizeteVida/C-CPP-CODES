#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int divisoesSucetivas[1000];
    int *inicio = divisoesSucetivas;

    printf("Digite uma vez de cada as divisoes que se sucederam: \n");
    printf("Digitar zero termina a execucao.\n");
    do{
        *inicio = 0;
        scanf("%d", inicio);
    }while(*(inicio++) != 0);

    int quantity = 1;
    inicio = divisoesSucetivas;

    do{
        quantity--;
        quantity+=*inicio;
    }while(*(inicio++) != 0);

    printf("Pedacos restantes: %d", quantity);
    return 0;
}
