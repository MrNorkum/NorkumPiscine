char	*my_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i])
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[27] = "Mr. Norkum";
	char	src[] = " Was Here Xd";

	printf("%s\n", my_strcat(dest, src));
}
