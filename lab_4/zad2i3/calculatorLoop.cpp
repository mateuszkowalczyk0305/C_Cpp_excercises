#include <iostream>


#include "calculator.h"

int main() {
	// deklaracja zmiennych:
	float x, y, result, xPrevious, yPrevious;
	unsigned int z = 1; // kontrola pętli
	
	
	do{
	std::cout << "Type two numbers." << std::endl << "x: ";
	std::cin >> x;
	std::cout << std::endl << "y: ";
	std::cin >> y;
	if(x == xPrevious && y == yPrevious) // sprawdzamy czy x,y są takie jak xPrevious, yPrevious (jeśli tak, to koniec pętli).
		break;
	else	
		z = 1;
	std::cout << std::endl << "Choose arithmetic operation to be performed:" << std::endl
		<< "0 - addition" << std::endl
		<< "1 - subtraction" << std::endl
		<< "2 - multiplication" << std::endl
		<< "3 - division" << std::endl;
	unsigned int operationValue;
	std::cin >> operationValue;
	Operation operation = static_cast<Operation>(operationValue);
	result = calculate(operation, x, y);
	std::cout << "Operation result equals: " << result << std::endl;
	// przypisanie x do zmiennych Previous:
	xPrevious = x;
	yPrevious = y;
	
	}while(z==1); // jeśli z == 1 to kolejna iteracja pętli.
	return EXIT_SUCCESS;
}