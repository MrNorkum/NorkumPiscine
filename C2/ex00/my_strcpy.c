char	*my_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest[i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	d[] = "1234567890";
	char	s[] = "ABCDEFGH";

	printf("%s\n", my_strcpy(d, s));
}
