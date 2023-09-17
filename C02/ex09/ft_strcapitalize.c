char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = -1;
	control = 1;
	ft_strlowcase(str);
	while (str[++i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= control * 32;
			control = 0;
		}
		else
			control = !('0' <= str[i] && str[i] <= '9');
	}
	return (str);
}
