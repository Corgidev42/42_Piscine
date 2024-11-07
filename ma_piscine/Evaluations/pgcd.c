#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char const *argv[])
{

	if (argc == 3)
	{
		int nbr1 = atoi(argv[1]);
		int nbr2 = atoi(argv[2]);

		if (nbr1 > 0 && nbr2 > 0)
		{
			printf("%d",gcd(nbr1,nbr2));
		}
	}
	printf("\n");
	return (0);
}
