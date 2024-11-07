void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}

#include <stdio.h>
int	main(void)
{
	int n1 = 12;
	int n2 = 42;

	printf("%d\n%d\n", n1, n2);
	ft_swap(&n1, &n2);
		printf("%d\n%d\n", n1, n2);

}