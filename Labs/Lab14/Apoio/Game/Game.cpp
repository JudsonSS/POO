#include "Window.h"
#include "Input.h"
#include "Graphics.h"

namespace Engine = Volt::Core;
using namespace Volt::Input;
using Volt::Graphics::Paint;

int main()
{
    Engine::Window window;
    window.Size(1920, 1080);
    window.Color(240);
    window.Show();

    Mouse mouse { 10,10 };
    Paint(mouse);
}