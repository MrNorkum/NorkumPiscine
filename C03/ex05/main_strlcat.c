int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = -1;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (!size || size <= d)
		return (s + size);
	while (src[++i] && i < size - d - 1)
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', d + s);
}

#include <stdio.h>
int main(void)
{
	char dest[23] = "Mr. Norkum ";
	char src[] = "Was Here Xd";
	printf("%d | %s", ft_strlcat(dest, src, 23), dest);
}
