#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
	while (b != 0)
	{
		unsigned int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return 0;
	return (a * b) / gcd(a, b); // PPCM(a, b) = (a * b) / PGCD(a, b)
}
int main()
{
	unsigned int a = 4;
	unsigned int b = 6;
	printf("PPCM de %u et %u est %u\n", a, b, lcm(a, b));
	return 0;
}
