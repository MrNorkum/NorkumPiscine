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
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	i = -1;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (dst_len >= size)
		return (size + src_len);
	while (src[++i] && i + dst_len < size -1)
		dest[dst_len + i] = src[i];
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
