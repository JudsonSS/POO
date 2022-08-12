#include "Jogo.h"

int main()
{	
	// variável do tipo Jogo
	Jogo gow;

	// chamando métodos 
	gow.adquirir("Gow", 160.0f);    // altera atributos do jogo
	gow.exibir();					// exibe os atributos do jogo

	gow.jogar(5);					// altera horas jogadas
	gow.exibir();					// exibe os dados

	gow.jogar(3);					// adiciona mais 3 horas jogadas
	gow.exibir();					// exibe o jogo
}