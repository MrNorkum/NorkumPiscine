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
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	i = -1;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (dlen >= size)
		return (size + slen);
	while (src[++i] && i + dlen < size -1)
		dest[dlen + i] = src[i];
	return (dest[dlen + i] = '\0', dlen + slen);
}

#include <stdio.h>
int main(void)
{
	char dest[27] = "Mr. Norkum ";
	char src[] = "WAS Here Xd";
	printf("%d", ft_strlcat(dest, src, 9));
}
