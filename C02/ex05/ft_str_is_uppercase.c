int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
