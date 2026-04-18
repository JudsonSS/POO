#include "Animation.h"
#include <iostream>
using std::cout;

int main()
{
	int seq[] = { 0,1,2,3,9,8,7,6,4,5,4,5 };
	int inv[] = { 5,4,5,4,6,7,8,9,3,2,1,0 };
	
	const int seqSize = sizeof(seq) / sizeof(int);
	const int invSize = sizeof(inv) / sizeof(int);
	
	Animation anim;
	Animation fast { seq, seqSize };
	Animation slow = Animation { inv, invSize };

	cout << "\nAnim: " << anim << "\n";
	cout << "Fast: " << fast << "\n";
	cout << "Slow: " << slow << "\n";

	cout << "\nIniciando +\n";
	anim = slow + fast;
	cout << "Finalizando +\n\n";

	cout << "Anim: " << anim << "\n";
}