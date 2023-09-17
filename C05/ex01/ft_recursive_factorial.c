int	ft_recursive_factorial(int nb)
{
	if (!nb || nb == 1)
		return (1);
	else if (2 <= nb && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
