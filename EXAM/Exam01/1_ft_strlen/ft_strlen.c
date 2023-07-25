int	ft_strlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++);
	return (i);
}
