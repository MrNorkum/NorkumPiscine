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
	while (++i < (size / 2))
		ft_swap(&tab[i], &tab[size - 1 - i]);
}

#include <stdio.h>
int main(void)
{
	int tab[7] = {2, 4, 1, 5, 6, 7, 3};
	ft_rev_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
		printf("%d", tab[i++]);
}
