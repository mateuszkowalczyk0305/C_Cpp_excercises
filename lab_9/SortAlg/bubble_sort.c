/*
Lab 10
C: Sortowanie bąbelkowe.
*/
#include <stdio.h>

void bubbleSort(int * tab, unsigned int n){
	if (tab != NULL){
		//n-1 przejść:
		for(unsigned int i=0;i<n-1;++i){
			//n-1 porównań (-1 dla i=0, 1, 2, 3...)
			for(unsigned int j=0; j<n-i-1; ++j){
				if(tab[j]>tab[j+1]){
					//zmiana kolejności elementów.
					int tmp = tab[j];
					tab[j] = tab[j+1];
					tab[j+1] = tmp;
				}
			}
		}
	}
}

int main(){

	return 0;
}


