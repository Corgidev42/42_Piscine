#include <stdlib.h>

int *ft_range(int start, int end)
{
	int	size = end - start;
	int	*tab = malloc (sizeof(int) * size);
	if (tab == NULL)
		return 0;
	int i = 0;
	while (i <= size)
	{
		tab[i] = start++;
		i++;
	}
	return (tab);
}
#include <stdio.h>

int main(void)
{
	int start = 1;
	int end = 5;
	int *range = ft_range(start, end);
	if (range == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i <= end - start; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	start = -3;
	end = 3;
	range = ft_range(start, end);
	if (range == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i <= end - start; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	start = 10;
	end = 10;
	range = ft_range(start, end);
	if (range == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i <= end - start; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);

	return 0;
}
