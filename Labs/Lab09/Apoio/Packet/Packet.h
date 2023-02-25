
union Data
{
    struct
    {
        short x;                    // 16 bits
        short y;                    // 16 bits
        short z;                    // 16 bits
        short w;                    // 16 bits
    }
    part;

    long long all;                  // 64 bits
};

class Packet
{
private:
    Data data;
    int index;

public:
    Packet();                       // construtor

    void begin();                   // inicia empacotamento
    void end();                     // finaliza empacotamento
    void send();                    // envia (exibe) pacote
    void operator<<(short val);     // inserção de dados
    void operator>>(short& val);    // extração de dados
};