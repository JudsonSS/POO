#include <string>
using std::string;

// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // preço do jogo
	int horas;                                          // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada
	
	void calcular();                                    // calcular custo da hora jogada
	
public:
	Jogo(const string& titulo, float valor);			// construtor da classe
	void atualizar(float valor);                        // atualizar preço do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar informações
};

// -----------------------------------------------
// Métodos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

// -----------------------------------------------