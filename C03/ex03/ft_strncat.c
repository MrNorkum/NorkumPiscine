char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i] && i < nb)
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}
