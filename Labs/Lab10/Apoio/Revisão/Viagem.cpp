#include "Tempo.h"
#include <iostream>
using namespace std;

int main()
{
    Tempo ida, volta, total;

    cout << "Tempo de ida:\n";
    cin >> ida;
    cout << "Tempo de volta:\n";
    cin >> volta;
    
    total = 5 + ida + volta;  // 5 horas de passeio
    
    cout << "Tempo da viagem:\n" << total << endl;
}
