/*
Lab 10
C: Algorytm wyszukiwania wartości minimalnej.
*/
#include <stdio.h>
#include <stdbool.h>

bool min(const int * tab, unsigned int n, int * buffer){
	bool result = false;
	if (tab != NULL && buffer != NULL){
		// Zapisz do bufora pierwszy element:
		*buffer = tab[0];
		//Iteruj po n elementach tablicy:
		for (unsigned int i=1;i<n;++i){
			if(*buffer > tab[i]){
				//zapisz do bufora tab[i]
				*buffer = tab[i];
			}
		}
		result = true;
	}
	return result;
}

int main(){

	return 0;
}


