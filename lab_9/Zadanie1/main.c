/*
Lab 10
Zad 1: main.c
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "median.h"

int main() {
	unsigned int n;
	printf("Podaj wielkosc tablicy liczb: ");
	scanf("%u", &n);
	
	//int tab[n];
	int * tab;
	tab = (int*) malloc(n * sizeof(int));
	printf("Podaj liczby calkowite dla tablicy: \n");
	for(unsigned int i = 0; i < n; ++i)
		scanf("%d", &tab[i]);
	
	float result;
	
    if (median(tab, n, &result)) {
        printf("Mediana: %.2f\n", result);
    } else {
        printf("Nie udalo sie wyliczyc mediany.\n");
    }

    return 0;
}


