#include "String.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Entrando no bloco\n\n";
    {    
        String games { "Asha Sharman nomeada CEO do Xbox" };
        String techn { "Netflix desiste de comprar a Warner" };
        String sport { "Jutta Leerdam quebra recorde no Speed Skating" };

        cout << endl;
        cout << games << endl;
        cout << techn << endl;
        cout << sport << endl;
        cout << endl;
    }
    cout << "\nSaindo do bloco\n";
}
