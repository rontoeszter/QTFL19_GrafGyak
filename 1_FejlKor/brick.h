#ifndef BRICK_H
#define BRICK_H

typedef struct Brick
{
	double a;
	double b;
	double c;
}Brick;

//A téglatest három élének hossza.
void set_size(Brick* brick, double a, double b, double c);

//A téglatest térfogata.
double calc_volume(const Brick* brick);

//A téglatest felszíne.
double calc_surface(const Brick* brick);

#endif // BRICK_H