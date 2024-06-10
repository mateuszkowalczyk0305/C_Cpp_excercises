#include <stdio.h>

#include "reader.h"

char readChar() {
	char character;
	while ((character = getchar()) == '\n' || character == EOF) {} // czyta, aż nie będzie znaku nowej linii lub znaku końca pliku.
	return character; // zwróc odczytany znak
}

// EOF = znak końca pliku, (spacja nim nie jest).