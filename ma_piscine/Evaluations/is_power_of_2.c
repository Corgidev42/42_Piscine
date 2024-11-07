int	is_power_of_2(unsigned int n)
{
	if (n == 1)
		return (1);
	if (n <= 0 || n % 2 != 0)
		return (0);
	return (is_power_of_2(n / 2));
}
#include <stdio.h>

int main(void)
{
	unsigned int test_values[] = {0, 1, 2, 3, 4, 8, 16, 18, 32, 64, 100};
	int num_tests = sizeof(test_values) / sizeof(test_values[0]);

	for (int i = 0; i < num_tests; i++)
	{
		unsigned int n = test_values[i];
		printf("is_power_of_2(%u) = %d\n", n, is_power_of_2(n));
	}

	return 0;
}
