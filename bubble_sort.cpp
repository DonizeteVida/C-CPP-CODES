#include <iostream> 
using namespace std;


class Carro{
    private:
    public:
        char placa[200];
        char nome[100];
        char cor[10];
        double preco;
        Carro* proximo;

}primeiro;

bool adicionarCarro();
void mostrarOpcoes(const char* const options[]);

int main(int argc, char const *argv[])
{
    int selected = 0;

    const char* const opcoes[] = {
        "Adicionar um carro",
        "Remover um carro",
        "Editar um carro",
        "Ler carros",
        "Sair"
    };

    do{
        mostrarOpcoes(opcoes);
    }while(selected != 0);
    
    return 0;
}

bool adicionarCarro(){

}

void mostrarOpcoes(const char* const options[]){
    int index = 0;
    int total = sizeof(options);

    for(;index < total; index++){
        cout << options[index] << endl;
    }
}
