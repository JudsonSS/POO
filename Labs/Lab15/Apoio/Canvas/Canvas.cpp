#include "Canvas.h"
#include <iostream>
#include <fstream>
using std::cout;
using std::ifstream;

Canvas::Canvas(const char arquivo[]) :
    linhas(0),
    colunas(0),
    cores(nullptr)
{
    ifstream fin{ arquivo };
    
    if (fin.is_open())
    {
        // tamanho da imagem
        fin >> linhas;
        fin >> colunas;

        // alocação dinâmica
        int pixels = linhas * colunas;
        cores = new int[pixels];
        
        // leitura dos pixels
        for (int i = 0; i < pixels; i++)
            fin >> cores[i];            
    }
    else
    {
        cout << "Arquivo " << arquivo << " inexistente!\n";
    }
}

Canvas::~Canvas()
{
    delete[] cores;
}

void Canvas::Exibir()
{
    // se arquivo não existe
    if (!cores) return;

    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++) 
        {
            int color = cores[i*colunas + j];

            // define cor de fundo ANSI (256 cores)
            cout << "\033[48;5;" << color << "m";

            // exibe "bloco" (2 espaços para ficar mais quadrado)
            cout << "  ";
        }
        cout << "\n";
    }

    // restaura cor padrão
    cout << "\033[0m";
}
