int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
