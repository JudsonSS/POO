#include "Color.h"
#include <iostream>
using namespace std;

int main()
{
	Color preto;                  
	Color laranja(255,125,0); 
	Color amarelo{255,255,0}; 
	Color carvao = Color(25,25,25);
	
	cout << "\nFavorita:\n";
	Color favorita = preto;
	favorita = Color(190, 255, 0);
	favorita = favorita;
	
	cout << "\nFim:\n";
}