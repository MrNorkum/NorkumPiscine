void	ft_swap(char *a, char *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

char	*ft_strrev(char *str)
{
	int i,len;
	for (len = 0; str[len]; len++);
	for (i = 0; i < len / 2; i++)
		ft_swap(&str[i], &str[len - 1 - i]);
	return (str);
}
