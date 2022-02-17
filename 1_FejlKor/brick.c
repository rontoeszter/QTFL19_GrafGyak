#include "brick.h"
#include <stdio.h>
#include <math.h>

//A téglatest három élének hossza.
void set_size(Brick* brick, double a, double b, double c)
{
if (a > 0.0 && b > 0.0 && c > 0.0)
	{
		brick -> a = a;
		brick -> b = b;
		brick -> c = c;	
	if (a == b && b == c)
	{
		printf("Az osszes el hossza egyenlo, ezert a teglatest kocka.\n");
	}
	}
	else
	{
		printf("A be allitot ertekek nem megfeleloek!\n");
	}
}


//A téglatest térfogata.
double calc_volume(const Brick* brick)
{
	double volume = brick -> a * brick -> b * brick -> c;
	return volume;
}


//A téglatest felszíne.
double calc_surface(const Brick* brick)
{
	double surface = 2 * (brick -> a * brick -> b + brick -> a * brick -> c + brick -> b * brick -> c);
	return surface;
}