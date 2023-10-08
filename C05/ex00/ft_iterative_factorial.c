int	ft_iterative_factorial(int nb)
{
	int	x;

	x = (0 <= nb && nb <= 12);
	while (x && nb)
		x *= nb--;
	return (x);
}
