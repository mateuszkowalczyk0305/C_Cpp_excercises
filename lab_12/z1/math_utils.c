#include "math_utils.h"

// NWD z wykorzystaniem algorytmu Euklidesa:
int gcd(int x, int y) {
	while (y != 0){     // 
		int temp = y;   // utworzenie zmiennej tymczasowej temp.
		y = x % y;      // obliczanie reszty z dzielenia.
		x = temp;       // 
	}
	return x;
}

// NWW z wykorzystaniem funkcji gcd:
int lcm(int x, int y) {
    return (x / gcd(x, y)) * y; 
}
