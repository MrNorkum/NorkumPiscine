int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
