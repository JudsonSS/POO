#include "Animation.h"
#include <iostream>
using std::cout;

Animation::Animation() : 
	frames(nullptr),
	index(0),
	start(0),
	end(0)
{
	cout << "Construtor padrão\n";
}

Animation::Animation(int seq[], int size) :
	index(0),
	start(0),
	end(size-1)
{
	cout << "Construtor\n";

	frames = new int[size];
	for (int i = 0; i < size; i++)
		frames[i] = seq[i];
}

Animation::Animation(const Animation & anim)
{
	cout << "Construtor de Cópia\n";

	const int size = anim.end + 1;
	frames = new int[size];
	for (int i = 0; i < size; i++)
		frames[i] = anim.frames[i];
	index = anim.index;
	start = anim.start;
	end = anim.end;
}

Animation& Animation::operator=(const Animation & anim)
{
	cout << "Operador de Atribuição\n";

	if (this == &anim)
		return *this;
	
	delete[] frames;
	const int size = anim.end + 1;
	frames = new int[size];
	for (int i = 0; i < size; i++)
		frames[i] = anim.frames[i];
	index = anim.index;
	start = anim.start;
	end = anim.end;
	
	return *this;
}

Animation::~Animation()
{
	cout << "Destrutor\n";
	delete[] frames;
}

Animation operator+(Animation& a, Animation& b)
{
	// alocando espaço para a nova sequência
	int aSize = a.frames ? (a.end - a.start + 1) : 0;
	int bSize = b.frames ? (b.end - b.start + 1) : 0;
	int size = aSize + bSize;
	int* seq = new int[size];

	// copiando os quadros do objeto a
	for (int i = 0; i < aSize; i++)
		seq[i] = a.frames[i];
	
	// copiando os quadros do objeto b
	for (int i = 0; i < bSize; i++)
		seq[aSize + i] = b.frames[i];

	// criando o novo objeto
	Animation result{ seq, size };
	delete [] seq;

	return result;
}

ostream& operator<<(ostream& os, const Animation& anim)
{
	os << "[";
	if (anim.frames)
	{
		for (int i = anim.start; i < anim.end; i++)
		{
			os << anim.frames[i];
			os << ", ";
		}
		os << anim.frames[anim.end];
	}
	os << "]";
	return os;
}