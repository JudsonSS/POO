#ifndef NOTEPAD_H
#define NOTEPAD_H

class Notepad
{
private:
    char * texto;                   // texto da anotação
    size_t linhas;                  // número de linhas
    size_t caracteres;              // número de caracteres

public:
    Notepad(const char * arquivo);  // construtor
    ~Notepad();                     // destrutor

    void Exibir();                  // mostrar anotação
    void Detalhar();                // mostrar estatísticas
};

#endif
