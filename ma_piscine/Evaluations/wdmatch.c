#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int	main(int argc, char *argv[])
{
	char	*str1 = argv[1];
	char	*str2 = argv[2];
	int		size = argc - 1;
	int		i = 0;
	int		j = 0;
	int		len_test = 0;
	if(size == 2)
	{
		while(str2[j])
		{
			if(str2[j] == str1[i])
			{
				len_test++;
				i++;
			}
			j++;
		}
		if (len_test == ft_strlen(str1))
			write(1, str1, ft_strlen(str1));
	}
	write(1, "\n", 1);
}
