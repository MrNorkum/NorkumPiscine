void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size / 2)
		ft_swap(&tab[i], &tab[size - 1 - i]);
}
