#include "Jogador.h"

int main()
{
	Jogador estrela{ "Bebeto", 8 };
	
	estrela.Gol(2, 1);
	estrela.Gol(3, 2);
	estrela.Gol(4, 3);
	estrela.Gol(5, 1);
	estrela.Gol(7, 3);
	estrela.Resumo();
}