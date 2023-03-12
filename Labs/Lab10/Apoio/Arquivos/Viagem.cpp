#include <iostream>
#include <fstream>
#include "Tempo.h"
using namespace std;

int main()
{
    ifstream fin{ "viagem.txt" };
    if (!fin.is_open())
    {
        cout << "Arquivo viagem.txt inexistente!\n";
        return EXIT_FAILURE;
    }

    Tempo ida, volta;
    fin >> ida;
    fin >> volta;
    fin.close();

    Tempo total = 5 + ida + volta;  // 5 horas de passeio

    cout << "Ida: " << ida << endl;
    cout << "Volta: " << volta << endl;
    cout << "Passeio: " << Tempo{ 5, 0 } << endl;
    cout << "Tempo Total: " << total << endl;

    ofstream fout{ "passeio.txt" };
    fout << "Ida: " << ida << endl;
    fout << "Volta: " << volta << endl;
    fout << "Passeio: " << Tempo { 5, 0 } << endl;
    fout << "Tempo Total: " << total << endl;
    fout.close();
}
