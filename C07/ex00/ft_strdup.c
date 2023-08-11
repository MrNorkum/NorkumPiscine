#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = -1;
	dest = (char *)malloc(ft_strlen(src) + 1));
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
