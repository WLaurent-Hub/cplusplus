//  Copyright (c) 2017 Yamuyamuso
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP  
#include <cmath>

double exo1(double rayon)
{
	double volume;
	volume = 4/3*3.14 * rayon * rayon* rayon ;
	return volume;
}
void exo2(short a, short b)
{
	short y;
	y = a < b && !a;
}
double exo3(double rayon)
{
	double aire;
	aire = pow(rayon, 3)*3.14 * 4 / 3;
	return aire;
}
double exo4(short a, short b, short c)
{
	short y;
	y = 0;
	if (a > b)
	{
		if (a > c)
			y = a;
		else
			y = c;
	}
	else
	{
		if (b > c)
			y = b;
		else
			y = c;
	}
	return y;
}
double exo5(double prix)
{
	short y;
	y = 0;
	if (prix > 100)
		y = 0.05 * prix;
	{
		if (prix > 300)
			y = 0.08*prix;
	}
	
	
	return prix - y;


}

#endif // MY_HEADER_HPP


