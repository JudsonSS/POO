#ifndef STRING_H
#define STRING_H

#include <iostream>
using std::ostream;

class String
{
private:
    char* str;                      // ponteiro para string
    size_t tam;                     // tamanho da string
    static int objs;                // número de objetos

public:
    String(const char txt[]);       // construtor
    String();                       // construtor padrão
    ~String();                      // destrutor

    // função amiga para exibir String com cout
    friend ostream& operator<<(ostream& os, const String& s);
};

#endif
