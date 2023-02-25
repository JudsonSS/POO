class Tempo
{
private:
	int horas;									// quantidade de horas
	int minutos;								// quantidade de minutos

public:
	Tempo();									// construtor padrão
	Tempo(int h, int m = 0);					// construtor com horas e minutos
	void Exibir() const;						// exibe tempo na tela

	Tempo operator+(const Tempo& t) const;		// retorna soma dos tempos
};

