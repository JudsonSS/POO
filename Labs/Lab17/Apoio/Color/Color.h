#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>
using std::ostream;

class Color
{
private:
    int r;                                     // vermelho
    int g;                                     // verde
    int b;                                     // azul

public:
    Color();                                   // construtor padrão
    Color(int R, int G, int B);                // construtor
    Color(const Color& c);                     // construtor de cópia
    Color& operator=(const Color& c);          // operador de atribuição
    ~Color();                                  // destrutor
    
    // função amiga para exibição com cout
    friend ostream& operator<<(ostream& os, Color& c);
};

#endif
