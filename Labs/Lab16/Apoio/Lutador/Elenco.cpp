#include "Lutador.h"
#include <iostream>
using namespace std;

void Mostrar(Lutador lu) 
{
	cout << "Mostrar:";
	cout << lu.nome 
		 << " " << lu.forca 
		 << " " << lu.destreza
		 << " " << lu.velocidade 
		 << endl;
} 

void Exibir(Lutador& lu)
{
	cout << "Exibir: ";
	cout << lu.nome
		<< " " << lu.forca
		<< " " << lu.destreza
		<< " " << lu.velocidade
		<< endl;
}

int main()
{
	Lutador paimei{ "PaiMei" };
	Lutador kratos{ "Kratos" };
	Lutador rahuna{ "Rahuna" };
	Lutador mestre = paimei;

	// defina força, destreza e velocidade dos lutadores aqui
	paimei.Forca(100);
	paimei.Destreza(100);
	paimei.Velocidade(100);

	kratos.Forca(80);
	kratos.Destreza(30);
	kratos.Velocidade(50);

	rahuna.Forca(55);
	rahuna.Destreza(95);
	rahuna.Velocidade(85);

	cout << endl;
	Exibir(paimei); 
	cout << endl;
	Mostrar(kratos); 
	cout << endl;
	Exibir(rahuna); 
	cout << endl;
	Mostrar(mestre); 
	cout << endl;
}
