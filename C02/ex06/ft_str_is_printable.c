int	ft_str_is_printable(char *str)
{
	while (*str)
		if (!(32 <= *str && *str++ <= 126))
			return (0);
	return (1);
}
