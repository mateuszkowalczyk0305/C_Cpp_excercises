#include <iostream>
#include "multiply.h"

// wywołanie funkcji multiply.
int main()
{
	std::cout << "Multiply (2*3) = " << multiply(2, 3) << std::endl;
	std::cout << "Multiply (2.5*3.3) = " << multiply(2.5f, 3.3f) << std::endl;
}