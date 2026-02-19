#include <iostream>
using namespace std;

void Inverte();

namespace N1
{
    int x = 1;
}

namespace N2
{
    int x = 2;
}

int main()
{
    using namespace N1;
    cout << x << endl; 
    {
        int x = 4;
        cout << x << ", " << N1::x << ", " << N2::x << endl; 
    }
    using N2::x;
    cout << x << endl << endl;

    Inverte();
}

void Inverte()
{
    using namespace N2;
    cout << x << endl;
    {
        int x = 4;
        cout << x << ", " << N1::x << ", " << N2::x << endl;
    }
    using N1::x;
    cout << x << endl << endl;

}