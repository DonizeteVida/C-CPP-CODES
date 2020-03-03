#include <stdio.h>

int main(int argc, char const *argv[])
{
    int posicaoMaxima = 0, quantasPastas = 0;

    printf("Digite a maxima posicao e quantas pastas serao armazenadas: \n");
    scanf("%d %d", &posicaoMaxima, &quantasPastas);

    int ordemDasPastas[1000];
    int *inicio = ordemDasPastas;

    printf("Digite a ordem em que as pastas serao colocadas: \n");
    do{
        *inicio = 0;
        scanf("%d", inicio);
    }while(*inicio++ != 0);

    int sucesso = 1;

    do{
        int successTemp = *inicio == *(inicio+1)
        || (*inicio)+1 == *(inicio+1);

        if(!successTemp){
            successTemp = *inicio == posicaoMaxima && *(inicio+1) == 1;
        }
        sucesso = sucesso &&successTemp;
    }while(*inicio++ != 0);

    char r = sucesso ? 'S':'N';
    printf("%c", r);
    return 0;
}
