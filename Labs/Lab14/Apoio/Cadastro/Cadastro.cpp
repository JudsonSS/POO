#include <iostream>
#include <string>

using namespace std;
using std::string;

namespace Cadastro
{
    struct Pessoal
    {
        string nome;
        int idade;
    };
}

int main()
{
    using namespace Cadastro;

    Pessoal novo;
    cout << "Nome: ";
    cin >> novo.nome;

    cout << "Idade: ";
    while (!(cin >> novo.idade))
    {
        cout << "Erro! Entre com uma idade.\n";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }

    cout << "Cadastrado: (" << novo.nome << ", " << novo.idade << ")\n";
}
