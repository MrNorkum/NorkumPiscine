void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	if (*b == 0)
		return ;
	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
