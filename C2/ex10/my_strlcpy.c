int	my_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	my_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	if (size != 0)
	{
		while (src[++i] && i < size - 1)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (my_strlen(src));
}

#include <stdio.h>

int	main(void)
{
	char	dest[] = "1234567890";
	char	src[] = "Mr. Norkum Was Here Xd";

	printf("%d | %s\n", my_strlcpy(dest, src, 11), dest);
}
