int	ft_iterative_power(int nb, int power)
{
	int r;

	r = (power >= 0);
	while (r && power--)
	    r *= nb;
	return (r);
}
