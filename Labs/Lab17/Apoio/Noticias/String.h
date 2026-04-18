#ifndef _STRING_H_
#define _STRING_H_

#include <iostream>
using std::ostream;

class String
{
private:
	char* str;								// ponteiro para string
	size_t tam;								// tamanho da string
	static int objs;						// número de instâncias
public:
	String(const char s[]);					// construtor
	String(const String& s);				// construtor de cópia
	String();								// construtor padrão   
	~String();								// destrutor

	String & operator=(const String & s);	// operador de atribuição
	
	// função amiga para exibição com cout
	friend ostream& operator<<(ostream& os, const String& s);
};

#endif
