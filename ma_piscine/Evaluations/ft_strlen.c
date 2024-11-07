int	ft_strlen(char *str)
{
	int	len;
	len =0;
	while(*str)
	{
		str++;
		len++;
	}
	return len;
}

#include <stdio.h>
int main(void)
{
	char *str = "vincent";
	printf("%d", ft_strlen(str));

}