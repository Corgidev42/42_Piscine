#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

char *str_low_case(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return str;
}

char *rstr_capitalizer(char *str)
{
	int i = ft_strlen(str) - 1;
	int in_words = 0;

	while (i > 0)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (in_words == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				in_words = 1;
			}
		}
		else
			in_words = 0;
		i--;
	}
	return str;
}

int main(int argc, char *argv[])
{
	int size = argc - 1;
	if (size >= 1)
	{
		int i = 1;
		while (argv[i])
		{
			argv[i] = str_low_case(argv[i]);
			argv[i] = rstr_capitalizer(argv[i]);
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
