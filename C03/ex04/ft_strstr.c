char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = 0;
	t = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s])
	{
		while (to_find[t] == str[s + t] && str[s + t])
			t++;
		if (to_find[t] == '\0')
			return (str + s);
		s++;
		t = 0;
	}
	return (0);
}
