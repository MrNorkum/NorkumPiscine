//3'ü de aynı işlevi yapar hangisi kolayınıza geliyorsa onu kullanın.d
----------------------------------------------------------------------
int	ft_atoi(char *str)
{
	int	d;
	int	res;

	d = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			d *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * d);
}
----------------------------------------------------------------------
int	mr_atoi(char *str, int sign, int res)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * sign);
}

int	ft_atoi(char *str)
{
	return (mr_atoi(str, 1, 0));
}
----------------------------------------------------------------------
int mr_atoi(const char *str, int sign, int res, int mod)
{
    if (((9 <= *str && *str <= 13) || *str == 32) && res == 0 && mod == 1)
        return (mr_atoi(str + 1, sign, res, mod));
    if (*str == '-' && res == 0 && mod == 1)
        return (mr_atoi(str + 1, sign * -1, res, mod));
    if (*str == '+' && res == 0 && mod == 1)
        return (mr_atoi(str + 1, sign, res, mod));
    if ('0' <= *str && *str <= '9')
        return (mr_atoi(str + 1, sign, res * 10 + *str - 48, 0));
    return (res * sign);
}

int ft_atoi(const char *str)
{
    return (mr_atoi(str, 1, 0, 1));
}
----------------------------------------------------------------------
