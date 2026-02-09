#include <iostream>
#include "Mensagem.h"
using std::cout;

Msg::Msg() : texto_("Vazia")
{
}

void Msg::Exibir()
{
    cout << texto_ << "\n";
}
