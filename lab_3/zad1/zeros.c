#include "zeros.h"
#include <stdio.h>
#include <math.h>

void zeros (float a, float b, float c)
{
	float delta = ((b*b)- (4*a*c));

	if (delta < 0)
	{
		printf("Delta jest ujemna.\n");
	}
	else if (delta > 0)
	{
		float x1 = (-1*b - sqrt(delta))/(2*a);
		float x2 = (-1*b + sqrt(delta))/(2*a);
		printf("Miejsca zerowe funkcji x1: %f , x2: %f\n", x1, x2);
	}
	else
	{
		float x = (-1*b)/(2*a);
		printf("Miejsce zerowe funkcji x: %f\n", x);
	}
	
}