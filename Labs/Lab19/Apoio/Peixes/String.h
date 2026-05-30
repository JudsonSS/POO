#ifndef STRING_H
#define STRING_H

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char* str;								    // ponteiro para string
    size_t tam;							        // tamanho da string

public:
    String();								    // construtor padrão   
    ~String();								    // destrutor
    String(const char s[]);					    // construtor
    String(const String& s);				    // construtor de cópia

    size_t Size() const { return tam; }         // retorna tamanho

    String & operator=(const char s[]);		    // operador de atribuição
    String & operator=(const String & s);	    // operador de atribuição
    char& operator[](int i);				    // operador de acesso
    const char& operator[](int i) const;	    // operador const de acesso

    // funções amiga para operações
    friend String operator+(const String& s1, const String& s2);
    friend ostream& operator<<(ostream& os, const String& s);
    friend istream& operator>>(istream& is, String& s);
    friend bool operator<(const String& s1, const String& s2);
    friend bool operator>(const String& s1, const String& s2);
    friend bool operator==(const String& s1, const String& s2);
};

#endif
