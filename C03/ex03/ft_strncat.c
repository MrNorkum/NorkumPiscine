char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	i = -1;
	d = 0;
	while (dest[d])
		d++;
	while (src[++i] && i < nb)
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char dest[27] = "Mr. Norkum";
	char src[] = " Was Here Xd";
	printf("%s", ft_strncat(dest, src, 9));
}
