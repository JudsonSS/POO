#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>
using std::cout;

// inicialização de membro estático da classe
int String::objs = 0;

// construtor
String::String(const char txt[])
{
    tam = strlen(txt);     
    str = new char[tam + 1];
    strcpy(str, txt);
    objs++;
    cout << "-------------| Objeto (" << objs << ") criado: \"" << str << "\"\n";
}

// construtor padrão
String::String()
{
    tam = 0;
    str = new char[1] { "" };
    objs++;
    cout << "-------------| Objeto padrão (" << objs << ") criado: \"" << str << "\"\n";
}

// destrutor
String::~String()
{
    cout << "-------------| Objeto (" << objs << ") deletado: \"" << str << "\", ";
    objs--;
    delete[] str;
    cout << objs << " objeto(s) ainda vivo(s)\n";
}

// exibe String com cout
ostream& operator<<(ostream& os, const String& s)
{
    os << s.str;
    return os;
}
