#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size;
	if (start > end)
		size = start - end;
	else
		size = end - start;

	int *tab = malloc(sizeof(int) * (size));
	if (tab == NULL)
		return NULL;

	int i = 0;
	if (start > end)
	{
		while (i <= size)
		{
			tab[i] = end++;
			i++;
		}
	}
	else
	{
		while (i <= size)
		{
			tab[i] = end--;
			i++;
		}
	}

	return tab;
}

#include <stdio.h>
int main()
{
	int start = 0;
	int end = 0;
	int *range = ft_rrange(start, end);
	if (range == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	int size;
	if (start > end)
	{
		size = start - end;
		printf("size : %d\n", size);
	}
	else
	{
		size = end - start;
		printf("size : %d\n", size);
	}
	int i = 0;
	while (i <= size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);
	return 0;
}
