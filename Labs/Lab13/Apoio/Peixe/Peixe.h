#include <iostream>
#include <string>
using std::cout;
using std::string;

class Peixe
{
private:
    string nome_;
    float peso_;
    unsigned tam_;

public:
    Peixe();
    ~Peixe();

    void Exibir();
};
