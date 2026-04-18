#ifndef _ANIMATION_H_
#define _ANIMATION_H_

#include <iostream>
using std::ostream;

class Animation
{
private:
    int* frames;                                    // sequência de quadros
    int index;                                      // quadro atual 
    int start;                                      // quadro inicial
    int end;                                        // quadro final

public:
    Animation();                                    // construtor padrão
    Animation(int seq[], int size);                 // construtor
    Animation(const Animation& anim);               // construtor de cópia
    Animation& operator=(const Animation& anim);    // operador de atribuição
    ~Animation();                                   // destrutor

	// operadores sobrecarregados
    friend Animation operator+(Animation& a, Animation& b);
	friend ostream& operator<<(ostream& os, const Animation& anim);
};

#endif
