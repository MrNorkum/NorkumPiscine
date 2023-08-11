char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}
