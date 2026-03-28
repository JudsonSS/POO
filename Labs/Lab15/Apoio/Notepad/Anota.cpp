#include "Notepad.h"

int main()
{
	Notepad tarefas { "tarefas.txt" };
	tarefas.Exibir();
	tarefas.Detalhar();
}