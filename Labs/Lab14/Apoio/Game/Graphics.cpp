#include "Graphics.h"
#include <iostream>
using std::cout;

namespace Volt
{
    namespace Graphics
    {
        void Paint(Mouse pos)
        {
            cout << "Mouse (" << pos.x << "," << pos.y << ")\n";
        }
    }
}
