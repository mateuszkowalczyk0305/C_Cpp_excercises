/*
Lab 10
Zad 1: median.c
*/
#include <stdio.h>
#include <stdbool.h>
#include "median.h"

typedef struct Node {
	int head;
	struct Node * tail;
}Node_t;

void push(Node_t ** root, int value){
	Node_t * currentNode = root;
	if (currentNode != NULL){
		while (currentNode -> != NULL)
			currentNode = currentNode->tail;
		// Dodaj nowy eleme
	}
}



