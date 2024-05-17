#include <stdio.h>
#include <math.h>
#include "triangle.h"
 

// funkcja znajdująca max długość:
 double find_max(double a, double b, double c)
{
	double max=a;
	
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	
	return max;
}

// funkcja sprawdzająca czy trójkąt jest prostokątny:
bool isRightTriangle(Point_t points[])

{
 // obliczanie długośći boków:
 double a= sqrt(pow(points[0].x-points[1].x,2)+pow(points[0].y-points[1].y,2));
 double b= sqrt(pow(points[1].x-points[2].x,2)+pow(points[1].y-points[2].y,2));
 double c= sqrt(pow(points[2].x-points[0].x,2)+pow(points[2].y-points[0].y,2));
 /*
 podnosi argument do danej potęgi -> double pow(double liczba_podnoszona_do_potegi , double potęga);
 */
 double max=find_max(a,b,c);
 //printf("%d ",max);
 
// Twierdzenie pitagorasa w zależności od boku max:
if(max==a)
{
	  if(c*c+b*b==a*a)
	  {
	  	return true;
	  }
	  else
	  {
	  	return false;
	  }
}
else if(max==b)
{
	  if(c*c+a*a==b*b)
	  {
	  	return true;
	  }
	  else
	  {
	  	return false;
	  }
}
else
{  
	  if(a*a+b*b==c*c)
	  {
	  	return true;
	  }
	  else
	  {
	  	return false;
	  }
}
 }