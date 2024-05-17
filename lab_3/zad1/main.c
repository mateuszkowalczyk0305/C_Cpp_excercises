#include <stdio.h>
#include "zeros.h"

int main()
{
	// wywołanie funkcji zeros:
	printf("Dla a: 3.13, b: 10.21, c: 1.45.\n");
	zeros(3.13, 10.21, 1.45);
	printf("Dla a: -7, b: 1, c: -13.\n");
	zeros(-7, 1, -13);
	printf("Dla a: 1, b: -4, c: 4.\n");
	zeros(1, -4, 4);
	return 0;
}
