#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    Stack stack;
    Item item;

    stack.Push('A');
    stack.Push('H');
    stack.Push('L');
    stack.Push('I');
    stack.Push('P');

    while (!stack.isEmpty())
    {
        item = stack.Pop();
        cout << item;
    }
}
