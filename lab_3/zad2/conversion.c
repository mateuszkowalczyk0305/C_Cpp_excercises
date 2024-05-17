#include "conversion.h"
#include <stdio.h>

void decimalToBinary (unsigned int number)
{
	// tablica przechowująca wartości bitów binarnych [16-bitowa]:
	int tabBin [16];
	// zmienna dotycząca ilości znaków liczby binarnej:
	int i = 0;
	
	// pętla dzielenia przez dwa z resztą. Reszta wpisywana do tablicy tabBin znak po znaku:
	while (number > 0)
	{
		tabBin[i] = number % 2;
		number = number / 2;
		i++;
	}
	
	// wyświetlenie reprezentacji binarnej:
	printf("Reprezentacja binarna liczby: ");
	
	for (int j = i - 1; j >= 0; j--)
		printf("%d", tabBin[j]);
	printf("\n");
}
