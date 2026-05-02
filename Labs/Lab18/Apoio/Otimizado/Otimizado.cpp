#include "String.h" 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    String mensagem { "Olá " };
    String nome;
    cout << "Tamanho da classe String: " << sizeof(String) << " bytes\n";
    cout << "Nome: ";
    cin >> nome;
    cout << mensagem + nome << "!\n";

    String saudacao { "Seja Bem-vindo(a) Sr(a). " };
    String sobrenome;
    cout << "Sobrenome: ";
    cin >> sobrenome;
    cout <<  saudacao + sobrenome << ".\n";
}