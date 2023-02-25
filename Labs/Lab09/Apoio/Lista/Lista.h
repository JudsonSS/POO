// tipo dos itens
using Item = int;

// declaração da classe
class Lista
{
private:
	Item* itens;			// itens da lista
	int size;				// tamanho atual	
	int max;				// tamanho máximo

public:
	Lista(int tam);
	~Lista();

	bool Vazia() const;
	bool Cheia() const;
	bool Adicionar(const Item& item);
};