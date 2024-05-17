/*
Lab 10
Zad 1: median.h
*/
#pragma once
#include <stdbool.h>

void push(Node_t ** root, int value);
bool pop(Node_t ** root, int * buffer);
bool isEmpty(Node_t * root);

