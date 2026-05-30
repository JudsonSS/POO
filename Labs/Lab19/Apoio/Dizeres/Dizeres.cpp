#include <iostream>
#include "String.h" 
using namespace std;

int main()
{
    cout << "Entre com até 10 dizeres populares <linha vazia para sair>:\n";

    String frase[10];
    int i = 0;
    do {
        cout << i + 1 << ": ";
        cin >> frase[i];
    } 
    while (frase[i++][0] != '\0' && i < 10);
    
    // quantidade de frases válidas
    int total = i - 1;

    if (total > 0)
    {
        cout << "\nAqui estão os dizeres:\n";
        for (i = 0; i < total; i++)
            cout << frase[i] << endl;

        String* menor = &frase[0];
        for (i = 1; i < total; i++) {
            if (frase[i].Size() < menor->Size())
                menor = &frase[i];
        }
        cout << "\nFrase mais curta:\n" << *menor << "\n\n";

        String* favorita = new String{ frase[total - 1] };
        cout << "Minha frase favorita:\n" << *favorita << endl;
        delete favorita;
    }
    else
        cout << "Nenhuma entrada!\n";
}
