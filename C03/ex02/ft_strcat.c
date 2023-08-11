char	*ft_strcat(char *dest, char *src)
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
