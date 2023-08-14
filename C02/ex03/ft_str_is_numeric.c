int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (!('0' <= *str && *str++ <= '9'))
			return (0);
	return (1);
}
