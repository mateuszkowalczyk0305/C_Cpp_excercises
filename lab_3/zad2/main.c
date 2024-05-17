#include <stdio.h>
#include "conversion.h"

int main() {
	unsigned int number;
	
	printf("Podaj liczbe dziesietna z zakresu <0, 65535>: ");
	scanf("%u", &number);

	// wywołanie funkcji decimalToBinary:
	decimalToBinary(number);
	return 0;
}