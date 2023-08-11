char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char d[] = "1234567890";
	char s[] = "ABCDEFGH";
	printf("%s", ft_strncpy(d, s, 5));
}
