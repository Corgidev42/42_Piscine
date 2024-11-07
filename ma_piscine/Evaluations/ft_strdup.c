#include <stdlib.h>
int str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *str_cpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return dest;
}
char *ft_strdup(char *src)
{
	char *newstr = malloc(sizeof(char) * str_len(src) + 1);
	str_cpy(newstr, src);
	return (newstr);
}
