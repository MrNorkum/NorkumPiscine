#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int *tab, int pos)
{
	int	i;

	if (pos == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
		ft_putchar(tab[i++] + '0');
}

void	ft_print_comb_increment(int n, int *tab)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (tab[i--] == max--)
		;
	tab[i--] += 1;
	while (i++ < n)
		tab[i + 1] = tab[i] + 1;
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = -1;
	while (++i < n)
		tab[i] = i;
	ft_putout(n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
			tab[n - 1] += 1;
		else
			ft_print_comb_increment(n, tab);
		ft_putout(n, tab, 1);
	}
}
