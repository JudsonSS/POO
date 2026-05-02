#include "String.h" 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    String::SetMinCapacity(8);
    
    String mensagem { ", como vai você?" };
    String nome;
    
    cout << "Nome: ";
    cin >> nome;

    cout << "Olá, Sr(a). " << nome + mensagem << endl;
}