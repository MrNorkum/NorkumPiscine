int	ft_atoi(const char *str)
{
	int res;
	int sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	for (res = 0; '0' <= *str && *str <= '9'; str++)
		res = res * 10 + *str - 48;
	return (res * sign);
}
