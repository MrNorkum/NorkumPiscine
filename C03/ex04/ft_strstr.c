char	*ft_strstr(char *str, char *to_find)
{
	int	t;

	if (!to_find[0])
		return (str);
	while (*str)
	{
		t = 0;
		while (to_find[t] == *(str + t) && *(str + t))
			t++;
		if (!to_find[t])
			return (str);
		str++;
	}
	return (0);
}
