#include <string>
using std::string;

class Jogo
{
private:
    string nome_;
    float preco_;
    int horas_;

public:
    Jogo(string nome, float preco, int horas);
    void Exibir();
};
