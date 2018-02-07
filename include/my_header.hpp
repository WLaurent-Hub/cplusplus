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
unsigned short lancer_de(void);
void exo4(void)
{
std:: cin.get();
	unsigned short i = 0;
	short b = 0;
	while (i != 1)
	{ 
		i = lancer_de();
		if (i % 2 == 0)
			b = b + i;
		else
			if (i == 3)
				b = b * 2;
			else
				if (i == 5)
					b = 0;


 	}


	std:: cout << "La valeur de n est:"
		       << b
		       << std::endl;

		       


}
void exo4(void);
void exo5(void)
{
	short j1 = 0;
	short j2 = 0;
	if 

}
	
#endif // MY_HEADER_HPP


