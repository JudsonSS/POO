#ifndef CANVAS_H
#define CANVAS_H

class Canvas
{
private:
	int linhas;
	int colunas;
	int * cores;

public:
	Canvas(const char arquivo[]);
	~Canvas();

	void Exibir();
};

#endif
