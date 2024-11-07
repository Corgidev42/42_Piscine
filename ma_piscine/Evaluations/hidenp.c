#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int main(int argc, char *argv[])
{
	int size = argc - 1;
	if (size == 2)
	{
		char	*str1 = argv[1];
		char	*str2 = argv[2];
		int		i = 0;
		int		j = 0;
		int len = 0;
		while(str2[i])
		{
			if(str2[i] == str1[j])
			{
				len++;
				j++;
			}
			i++;
		}
		if (len == ft_strlen(str1))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}

	write(1, "\n", 1);
}
