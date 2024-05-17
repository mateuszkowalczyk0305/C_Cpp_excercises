#include <stdio.h>
#include <math.h>
#include "triangle.h"
#include <stdbool.h>
int main()
{
 	Point_t points[3];
 	for(int i=0; i<3;i++)
 	{
 		printf("Podaj wspolrzedne %d punktu \n", i + 1);
 		scanf("%lf",&points[i].x);
 		scanf("%lf",&points[i].y);
		 }

if(isRightTriangle(points))
{
	printf("trojkat jest prostokatny");
	
}
else
{
	printf("trojkat nie jest prostokatny");
}
return 0;
}