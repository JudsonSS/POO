#include "Jogo.h"

int main()
{
	Jogo gow;

	gow.adquirir("Gow", 160.0f);
	gow.exibir();

	gow.jogar(5);
	gow.exibir();

	gow.jogar(3);
	gow.exibir();
}