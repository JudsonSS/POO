#include "Window.h"
#include <iostream>

Volt::Core::Window::Window() : 
    color(0), 
    width(0), 
    height(0)
{
}

void Volt::Core::Window::Size(int width, int height)
{
    this->width = width;
    this->height = height;

}

void Volt::Core::Window::Color(int color)
{
    this->color = color;
}

void Volt::Core::Window::Show()
{
    std::cout << "Window (" 
        << width 
        << " x " 
        <<  height 
        << ") Color ("
        << color << ")\n";
}