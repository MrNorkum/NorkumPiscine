int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0 || nb > 12)
	    return (0);
	while (nb)
		x *= nb--;
	return (x);
}
