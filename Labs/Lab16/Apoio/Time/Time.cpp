#include "Jogador.h"

int main()
{
	Jogador novato;						// #1
	Jogador galinho("Zico");			// #2
	Jogador baixinho{ "Romário", 20 };  // #3
	Jogador* especial = new Jogador;	// #4
	Jogador artilheiro = galinho;		// #5
	Jogador idolo = "Bebeto";			// #6
}