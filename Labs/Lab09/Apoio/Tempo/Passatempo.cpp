#include <iostream>
#include "Tempo.h"

using std::cout;
using std::endl;

int main()
{
    Tempo a{ 2, 30 };
    Tempo b{ 1, 10 };
    Tempo c{ 0, 20 };
    
    Tempo total;
    total.Exibir();
    cout << endl;

    total += a;
    total.Exibir();
    cout << endl;
    
    total += b;
    total.Exibir();
    cout << endl;
    
    total -= c;
    total.Exibir();
    cout << endl;
};
