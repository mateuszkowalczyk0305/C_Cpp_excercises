#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

static Node_t * createNode(int head) {
	Node_t * node = (Node_t *) malloc(sizeof(node));
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail;
		currentNode->tail = createNode(value);
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) {
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

/****************************************************************/

Node_t* createList(unsigned int nodeCount, ...) // nowa lista o liczbie nodeCount węzłów.
{
	if (nodeCount == 0) // Lista pusta - sprawdzenie.
		return NULL;
		
	va_list args; // typ danych używany przez makra va_start, va_end, va_arg.
	va_start(args, nodeCount); // Przekazanie argumentu nodeCount poprzedzającego zmienną liczbę argumentów.
	
	Node_t *root = createNode(va_arg(args, int)); // utwórz pierwszy węzeł.
	
	Node_t *currentNode = root; // wskaźnik na węzeł początkowy - root.
	
    for (unsigned int i = 1; i < nodeCount; ++i) {
        int value = va_arg(args, int);
        push(currentNode, value); // Dodaj kolejny węzeł z wartością
        currentNode = currentNode->tail; // Przeniesienie do następnego węzła listy.
    }

	va_end(args);
	return root;
}
