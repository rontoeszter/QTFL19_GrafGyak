#include "brick.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	Brick brick;
	double volume;
	double surface;
	
	set_size(&brick, 3, -3, 3);
	volume = calc_volume(&brick);
	surface	= calc_surface(&brick);
	
	printf("A teglatest terfogata : %lf\n", volume);
	printf("A teglatest felszine :  %lf", surface);
	
	return 0;
}