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


int main(int argc, char const *argv[])
{
    const char* const opcoes[] = {
        "Adicionar um carro",
        "Remover um carro",
        ""
    };

    
    return 0;
}
