#pragma once

// Declaration of boolean type
#include <stdbool.h>

typedef struct Point
{
	double x; 
	double y;
} Point_t;

double find_max(double a, double b,double c);

bool isRightTriangle(Point_t points[]);
