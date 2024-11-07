char *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{

		printf("%s\n%s\n", argv[1], argv[2]);
		printf("%s", ft_strcpy(argv[1], argv[2]));
	}
}