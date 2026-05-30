#ifndef STACK_H
#define STACK_H

using Item = char;

class Stack
{
private:
    enum { MIN_SIZE = 4 };              // tamanho mínimo da pilha
    Item* data;                         // armazenamento dos itens
    int capacity;                       // capacidade atual da pilha
    int size;                           // número de elementos armazenados

    void Expand();                      // expande o armazenamento

public:
    Stack(int n = MIN_SIZE);            // constructor padrão                              
    Stack(const Stack& st);             // constructor de cópia
    ~Stack();                           // destrutor                 

    bool isEmpty() const;               // pilha está vazia?      
    bool isFull() const;                // pilha está cheia?

    void Push(const Item& item);        // empilha elemento
    const Item Pop();                   // desempilha elemento
    Stack& operator=(const Stack& st);  // operador de atribuição
};

#endif