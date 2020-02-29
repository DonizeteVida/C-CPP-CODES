#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.1415

void cls(){
    system("clear");
}

void pause(){
    fflush(stdin);
    getchar();
    fflush(stdin);
    cls();
}

void config(){
    setlocale(LC_ALL, "portuguese");
}

int main(void){
    config();

    //Numero 1
    printf("Donizete Junior Ribeiro Vida\n");
    pause();

    //Numero 2
    printf("O produto de 28 e 43 é: %d", 28 * 43);
    pause();

    //Numero 3
    printf("A média aritimética entre os números 8, 9 e 7 é: %.2f\n", (float)(8+9+7)/3);
    pause();

    //Numero 4
    int inteiro1 = 0, inteiro2 = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &inteiro1);
    printf("Digite o segundo número: ");
    scanf("%d", &inteiro2);

    printf("Os números escolhidos são %d e %d\n", inteiro1, inteiro2);
    pause();

    //Número 5
    int numero3 = 0;
    printf("Digite um número: ");
    scanf("%d", &numero3);
    printf("O número digitado é: %d. O seu antecessor é: %d. O seu sucessor é: %d", numero3, numero3-1, numero3+1);
    pause();

    //Número 6
    int numero4 = 0, numero5 = 0;
    printf("Insira o número 1: ");
    scanf("%d", &numero4);
    printf("Insira o número 2: ");
    scanf("%d", &numero5);
    printf("A soma dos números digitados é: %d", numero4 + numero5);
    pause();

    //Número 7
    float real1 = 0.0;
    printf("Digite um número real: ");
    scanf("%f", &real1);
    printf("A terca parte do número digitado é: %.2f", real1 / 3);
    pause();


    //Numero 8 
    float real2 = 0, real3 = 0;
    printf("Digite o primeiro número real: ");
    scanf("%f", &real2);
    printf("Digite o segundo número real: ");
    scanf("%f", &real3);
    printf("A média aritimética é: %.2f", (real2 + real3) / 2);
    pause();


    //Numero 9
    float real4 = 0;
    printf("Digite um número para saber os 3,5\%: ");
    scanf("%f", &real4);
    printf("O acrescimo de 3,5\\% ao total é: %.2f", real4 * 1.035);
    pause();

    //Numero 10
    float real5 = 0;
    printf("Digite o raio do circulo: ");
    scanf("%f", &real5);
    printf("O perimetro é: %.2f.A área é: %.2f", 2*PI*real5, (real5 * real5)*PI);
    pause();

    //Numero 11
    float salario = 0, watts = 0;
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario);
    printf("Digite o valor de watts: ");
    scanf("%f", &watts);
    float percentage = watts / 100;
    float toPayMoney = (salario / 7) * percentage;
    printf("O valor do quilowatts é: %.2f\n", salario / 7 / 100);
    printf("O valor a ser pago é: %.2f\n", toPayMoney);
    printf("O valor com 10\% de desconto: %.2f\n", toPayMoney * 0.9);
    pause();

    //Numero 12
    float pValue = 0, pPercentage = 0;
    printf("Insira o valor do produto: ");
    scanf("%f", &pValue);
    printf("Insira a porcentagem do desconto: ");
    scanf("%f", &pPercentage);
    printf("O valor do produto com desconto é de: %.2f", pValue * 1 - (pPercentage / 100));
    pause();

    //Numero 13
    int secondsValue = 0;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &secondsValue);

    int hour = 0, minutes = 0, seconds = 0;
    hour = secondsValue / (60*60);
    minutes  = ((seconds - (hour * 60 * 60))) / 60;
    seconds = seconds - ((hour*60*60) + (minutes * 60));
    printf("O tempo total é de: %d:%d:%d", hour, minutes, seconds);
    pause();

    //Numero 14
    int aulasDadas = 0;
    float aulaValue = 0, inssValue = 0;
    printf("Digite as aulas dadas: ");
    scanf("%d", &aulasDadas);
    printf("O valor de cada aula: ");
    scanf("%f", &aulaValue);
    printf("A porcentagem de desconto do inss: ");
    scanf("%f", &inssValue);
    printf("O salário líquido é de: %.2f", (aulasDadas * aulaValue) * ((100 - inssValue) / 100));
    pause();

    //Numero 15
    float altura = 0, raio = 0;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("O volume do cilindro é de: %.2f", PI * raio * raio * altura);
    pause();

    //Numero 16
    float kmLitro = 0, timeTravel = 0, velocityAverage = 0;
    printf("Digite a quantidade de KM por Litro de combustível: ");
    scanf("%f", &kmLitro);
    printf("Digite o tempo total da viagem: ");
    scanf("%f", &timeTravel);
    printf("Digite a velocidade média da viagem: ");
    scanf("%f", &velocityAverage);

    float distance = timeTravel * velocityAverage;

    printf("A distancia da viagem foi de: %.2f. Os litros gastos foram de: %.2f", distance, distance / kmLitro);
    pause();

    //Numero 17
    float prestacaoValor = 0, prestacaoTempo = 0, prestacaoTaxa = 0;
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacaoValor);
    printf("Digite o tempo da prestacao: ");
    scanf("%f", &prestacaoTempo);
    printf("Digite o valor da taxa: ");
    scanf("%f", &prestacaoTaxa);

    printf("A prestacao será de; %.2f", prestacaoValor + (prestacaoValor * prestacaoTaxa / 100 * prestacaoTempo));
    pause();

    //Numero 18
    int a = 0, b = 0, aux = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os novos valores de A: %d e B: %d", a, b);
    pause();

    //Numero 19
    int numerador = 0, denominador = 0;
    printf("Digite o valor do numerador: ");
    scanf("%d", &numerador);
    printf("Digite o valor do denominador: ");
    scanf("%d", &denominador);
    printf("O valor da fracao é de: %.2f", (float)numerador / denominador);
    pause();

    //Numero 20
    float valorConta = 0;
    printf("Digite o valor da conta: ");
    scanf("%f", &valorConta);
    printf("O valor com o acrescimo é de: %.2f. O acrescimo é de: %.2f", valorConta * 1.1, valorConta * 0.1);
    return 0;
}