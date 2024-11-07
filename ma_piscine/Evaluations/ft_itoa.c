#include <stdlib.h>

int get_num_len(int n)
{
	int len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return len;
}

char *ft_itoa(int n)
{
	int len = get_num_len(n);
	char *str;
	long nbr = n;
	int sign = 1;

	if (n < 0)
		sign = -1;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
	str[len] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	while (len--)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return str;
}
#include <stdio.h>

int main(void)
{
	int test_values[] = {0, -123, 456, -7890, 2147483647, -2147483648};
	int num_tests = sizeof(test_values) / sizeof(test_values[0]);

	for (int i = 0; i < num_tests; i++)
	{
		char *result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", test_values[i], result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
		}
	}

	return 0;
}
