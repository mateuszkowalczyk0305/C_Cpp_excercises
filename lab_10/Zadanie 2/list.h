#pragma once

#include "predicate.h"

typedef struct Node {
	int head;
	struct Node * tail;
} Node_t;

// lista o liczbie nodeCount węzłów.
Node_t * createList(unsigned int nodeCount, ...); 

// wypisuje kolejne wartości listy rozpocznającej się węzłem o adresie root.
void printList(Node_t * root); 

// dodaje nowy węzeł o wartości value na koniec listy rozpoczynającej się węzłem a adresie root.
void push(Node_t * root, int value);

// usuwa pierwszy węzeł z listy spełniający warrunek predicate.
void removeIf(Node_t ** root, Predicate predicate, int toCompare);
