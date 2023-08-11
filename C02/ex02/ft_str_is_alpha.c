int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (('A' <= *str && *str <= 'Z')
			|| ('a' <= *str && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}
