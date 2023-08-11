int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (32 <= *str && *str <= 127)
			str++;
		else
			return (0);
	}
	return (1);
}
