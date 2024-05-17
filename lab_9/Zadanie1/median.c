/*
Lab 10
Zad 1: median.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "median.h"

bool median(const int *tab, unsigned int n, float *buffer) {
// Sprawdzenie czy tablica nie jest pusta:
    if (n == 0)
        return false;

// Stworzenie kopii tablicy:
    //int tempTab[n];
	int * tempTab;
	tempTab = (int*) malloc(n * sizeof(int));
    for (unsigned int i = 0; i < n; ++i)
        tempTab[i] = tab[i];

// Sortowanie tablicy BubbleSort:
    for (unsigned int i = 0; i < n - 1; ++i) {
        for (unsigned int j = 0; j < n - i - 1; ++j) { 
            if (tempTab[j] > tempTab[j + 1]) {
                int temp = tempTab[j];
                tempTab[j] = tempTab[j + 1];
                tempTab[j + 1] = temp;
            }
        }
    }

// Wyznaczanie mediany:
    if (n % 2 == 0) {
        *buffer = (tempTab[n / 2 - 1] + tempTab[n / 2]) / 2.0f; //2.0f żeby było zmiennoprzecinkowe(bez zaokrąglania).
    } else {
        *buffer = tempTab[n / 2];
    }
    return true;
}




