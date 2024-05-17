#include "fib.h"

int fibonacci(unsigned int n) {
	if (n <= 2) // tutaj powinno być "<"
		return n;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}


int fib(unsigned int n){
	int x = 1;
	int z = 0;
	int w = 0;
	for(int i=0; i<n; i++){
		z = x;
		x = w;
		w = z + x;
	}
	return w;
}
