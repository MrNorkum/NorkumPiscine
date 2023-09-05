void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (--size)
	{
		i = -1;
		while (++i < size)
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
	}
}
