int str_len(char *str)
{
	int	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

char *ft_strrev(char *str)
{
	if (str == 0)
		return 0;
	int i = 0;
	int max = str_len(str) - 1;
	while(i < max && str[i + 1] != '\0')
	{
		ft_swap(&str[i], &str[max]);
		i++;
		max--;
	}
	return (str);
}
