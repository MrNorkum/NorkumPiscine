#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = -1;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	printf("%s", ft_strdup("Mr. Norkum"));
}
