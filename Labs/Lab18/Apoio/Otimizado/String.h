#ifndef STRING_H
#define STRING_H

#include <iostream>
using std::ostream;
using std::istream;

// -----------------------------------------------------------------

struct HeapString
{
    char * str;			    // ponteiro para string
    size_t size;		    // tamanho da string
};

struct SmallString
{
    char str[16];		    // string com \0
};

union StringData
{
    SmallString small;      // string na pilha
    HeapString  heap;	    // string alocada dinamicamente
};

// -----------------------------------------------------------------

class String
{
private:
    StringData data;							// dados da string
    bool isSmall;								// tipo da string

public:
    String();									// construtor padrão   
    ~String();									// destrutor
    String(const char s[]);						// construtor
    String(const String& s);					// construtor de cópia

    String & operator=(const char s[]);			// operador de atribuição
    String & operator=(const String & s);		// operador de atribuição
    char& operator[](int i);					// operador de acesso
    const char& operator[](int i) const;		// operador const de acesso
    String operator+(const String& s) const;	// operador de concatenação
    
    size_t Size() const;						// tamanho da string
    const char* Data() const;					// ponteiro para os dados da string

    // funções amiga para exibição e leitura
    friend ostream& operator<<(ostream& os, const String& s);
    friend istream& operator>>(istream& is, String& s);
};

#endif
