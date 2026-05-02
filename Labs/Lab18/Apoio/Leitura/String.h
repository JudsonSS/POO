#ifndef STRING_H
#define STRING_H

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;									// ponteiro para string
    size_t tam;									// tamanho da string
    size_t cap;									// capacidade da string
    static size_t MinCap;						// capacidade mínima
    void Expand();								// função para expandir a capacidade

public:
    String(const char s[]);						// construtor
    String(const String& s);					// construtor de cópia
    String();									// construtor padrão   
    ~String();									// destrutor

    String & operator=(const char s[]);			// operador de atribuição
    String & operator=(const String & s);		// operador de atribuição
    char& operator[](int i);					// operador de acesso
    const char& operator[](int i) const;		// operador const de acesso
    String operator+(const String& s) const;	// operador de concatenação
    
    size_t Size() const;						// tamanho da string
    static void SetMinCapacity(size_t minCap);	// define a capacidade mínima

    // funções amiga para exibição e leitura
    friend ostream& operator<<(ostream& os, const String& s);
    friend istream& operator>>(istream& is, String& s);
};

#endif
