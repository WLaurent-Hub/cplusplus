//  Copyright (c) 2017 Yamuyamuso
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP  
#include <cmath>

void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}
void exo2(void)
{
	long n = 3, fac = 1, i = 1;
	if (n > 0)
		while (i <= n)
		{
			fac = fac * 1;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}
int essayer_code(unsigned short code);
void exo3(void)
{
	unsigned short code = 0;

	int a = essayer_code(code);

	while (a == 0)
	{
		code = code + 1;
		a = essayer_code(code);
	}
}

#endif // MY_HEADER_HPP


