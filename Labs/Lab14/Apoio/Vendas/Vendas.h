#pragma once

namespace Loja
{
    const int Trimestres = 4;

    class Vendas
    {
    private:
        double vendas[Trimestres];
        double media;
        double max;
        double min;

    public:
        Vendas(const double vet[], int n);
        
        void Ler();
        void Mostrar();
    };
}