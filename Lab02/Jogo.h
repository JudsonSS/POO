// declaração da classe Jogo
#include <string>
using std::string;

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // preço do jogo
	int horas;                                          // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada
	
	void calcular()                                     // calcular custo da hora jogada
	{ 
		if (horas > 0)
			custo = preco / horas; 
	}          

public:
	void adquirir(const string& titulo, float valor);	// preencher informações
	void atualizar(float valor);                        // atualizar preço do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar informações
};

