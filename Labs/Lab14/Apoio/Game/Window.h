#pragma once

namespace Volt
{
    namespace Core
    {
        class Window
        {
        private:
            int color;
            int width;
            int height;
        
        public:
            Window();
            void Size(int width, int height);
            void Color(int color);
            void Show();
        };  
    }
}