#include <iostream>
#include "String.h" 
using std::cout;
using std::cin;
using std::endl;

const int MaxMsg = 10;

int main()
{
    String nome;
    cout << "Olá, qual é seu nome?\n>> ";
    cin >> nome;

    cout << nome << ", por favor entre com até " << MaxMsg
        << " dizeres populares <linha vazia para sair>:\n";

    String frases[MaxMsg];
    int i = 0;    
    while (i < MaxMsg)
    {
        cout << i + 1 << ": ";
        cin >> frases[i];
        // linha vazia?
        if (frases[i][0] == '\0')  
            break;                      
        i++;
    }
    
    // total de mensagens lidas
    int total = i;  

    if (total > 0)
    {
        cout << "\nAqui estão os dizeres:\n";
        for (i = 0; i < total; i++)
            cout << frases[i][0] << ": " << frases[i] << endl;

        int menor = 0;
        int primeira = 0;
        for (i = 1; i < total; i++)
        {
            if (frases[i].Size() < frases[menor].Size())
                menor = i;
            if (frases[i] < frases[primeira])
                primeira = i;
        }
        cout << "\nFrase mais curta:\n" << frases[menor] << "\n\n";
        cout << "Primeira em ordem alfabética:\n" << frases[primeira] << "\n\n";
        cout << "Este programa usou " << String::Count() << " objetos String.\n";
    }
    else
        cout << "Nenhuma entrada!\n";

    return 0;
}