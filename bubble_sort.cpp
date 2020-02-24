#include <iostream> 
using namespace std;

class Carro{
    private:
    public:
        char placa[200];
        char nome[100];
        char cor[10];
        double preco;
};

#define MAX_CARS 10

typedef int (*Predicate)(Carro, Carro);

int porPreco(Carro carro1, Carro carro2){
    if(carro1.preco == carro2.preco){
        return 0;
    }else if(carro1.preco > carro2.preco){
        return 1;
    }else{
        return -1;
    }
}
void comparar(Predicate predicato, Carro carros[]){
    for(int i = MAX_CARS; i >= 0; i--){
        for(int j = 0; j < i; j++){
            Carro actual = carros[j];
            Carro next = carros[j + 1];

            if(predicato(actual, next)>0){
                Carro aux = actual;
                carros[j] = next;
                carros[j+1] = aux;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Carro carros[MAX_CARS];
    int i = 0;
    while(true){
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite o preco do carro: ";
        cin >> carros[i].preco;

        char resp;

        cout << "Deseja continuar?\n <s> SIM\n<n> Não" <<endl;
        cin >> resp;

        if(resp != 's'){
            break;
        }
        i++;
        cout << endl;
    }

    comparar(&porPreco, carros);

    for(int i = 0; i<MAX_CARS; i++){
        cout << carros[i].preco <<endl;
    }
}
