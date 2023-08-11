int	ft_sqrt(int nb)
{
	long	res;

	res = 1;
	while (res * res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
