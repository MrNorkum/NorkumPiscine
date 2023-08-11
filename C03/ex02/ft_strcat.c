int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = -1;
	d = ft_strlen(dest);
	while (src[++i])
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}
