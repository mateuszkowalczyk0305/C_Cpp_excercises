#include "gcd.h"
#include <chrono>
#include <iostream>

int iterGcd(int x, int y){

	while(x!=y){
	if(x>y)
		x = x - y;
	else
		y = y - x;
	}


	return x;
}

int recurGcd(int x, int y){
	if(y!=0)
		return recurGcd(y, x%y);
	else	
		return x;
}
