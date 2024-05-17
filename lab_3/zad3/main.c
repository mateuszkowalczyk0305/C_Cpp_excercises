// main.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rsa_utils.h"

int main() {
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(NULL));

    // Inicjalizacja zmiennych p, q, e
    unsigned int p, q, e;

    // Losowanie liczb p i q takich, że są liczbami pierwszymi
    do {
        p = rand() % 1000 + 1000; // Zakres losowania +1000
    } while (!isPrime(p));

    do {
        q = rand() % 1000 + 1000; // Zakres losowania +1000
    } while (!isPrime(q));

    // Wybór liczby e względnie pierwszej z p-1 oraz q-1
    unsigned int phi = (p - 1) * (q - 1);
    do {
        e = rand() % phi;
    } while (gcd(e, phi) != 1);

    // Wyświetlenie wylosowanych liczb
    printf("Wylosowane liczby:\n");
    printf("p = %u\n", p);
    printf("q = %u\n", q);
    printf("e = %u\n", e);

    return 0;
}
