#pragma once

class Lutador
{
private:
    char* nome;                 // nome
    int forca;                  // força
    int destreza;               // destreza
    int velocidade;             // velocidade

public:
    Lutador();                  // construtor padrão
    Lutador(const char* nome);  // construtor
    Lutador(const Lutador& j);  // construtor de cópia
    ~Lutador();                 // destrutor

    void Forca(int val);        // ajusta força
    void Destreza(int val);     // ajusta destreza
    void Velocidade(int val);   // ajusta velocidade

    friend void Mostrar(Lutador);
    friend void Exibir(Lutador&);
};

