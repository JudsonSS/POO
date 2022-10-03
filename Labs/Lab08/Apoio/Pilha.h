
// definição do tipo Item
using Item = char;

// ----------------------------------
// Declaração da Classe Pilha
// ----------------------------------

class Pilha
{
private:
	enum { MAX = 10 };                      // limite de itens
	Item itens[MAX];						// armazenamento de itens
	int topo;                               // índice do item no topo

public:
	Pilha();                                // construtor

	bool Vazia() const;                     // verifica se a pilha está vazia
	bool Cheia() const;                     // verifica se a pilha está cheia

	bool Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item & item);			// remove item da pilha
};

// ----------------------------------