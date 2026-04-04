#define _CRT_SECURE_NO_WARNINGS
#include "Lutador.h"
#include <iostream>
#include <cstring>
using namespace std;

#define red    "\033[38;5;160m"
#define green  "\033[38;5;10m"
#define lime   "\033[38;5;118m"
#define yellow "\033[38;5;220m"
#define normal "\033[0m"

Lutador::Lutador() :
	forca(0),
	destreza(0),
	velocidade(0)
{
	nome = new char[1] {""};
	cout << lime << "Lutador " << nome <<  " construído" << normal << "\n";
}

Lutador::Lutador(const char* nome) :
	forca(0),
	destreza(0),
	velocidade(0)
{
	this->nome = new char[strlen(nome) + 1];
	strcpy(this->nome, nome);
	cout << green << "Lutador " << nome << " construído" << normal << "\n";
}

Lutador::Lutador(const Lutador & j)
{
	this->forca = j.forca;
	this->destreza = j.destreza;
	this->velocidade = j.velocidade;
	this->nome = new char[strlen(j.nome) + 1];
	strcpy(this->nome, j.nome);
	cout << yellow << "Lutador " << nome << " copiado" << normal << "\n";
}

Lutador::~Lutador()
{
	cout << red << "Lutador " << nome << " destruído" << normal << "\n";
	delete[] nome;
}

void Lutador::Forca(int val)
{
	forca = val;
}

void Lutador::Destreza(int val)
{
	destreza = val;
}

void Lutador::Velocidade(int val)
{
	velocidade = val;
}
