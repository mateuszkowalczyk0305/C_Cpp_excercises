#include "rsa_utils.h"
#include <stdbool.h>
#include <stdio.h>

// Funkcja obliczająca największy wspólny dzielnik (NWD) liczb x, y:
int gcd(unsigned int x, unsigned int y)
{
	if (y == 0)
		return x;
	return gcd(y, x%y);
}
// Funkcja sprawdzająca czy liczba jest liczbą pierwszą:
bool isPrime (unsigned int x)
{
	if (x <= 1)
		return false;
	if (x <= 3)
		return true;
	if (x%2 == 0 || x%3 == 0)
		return false;
	for (unsigned int i = 5; i * i <= x; i += 6)
	{
		if (x%1 == 0 || x % (i + 2) == 0)
			return false;
	}
	return true;
}
