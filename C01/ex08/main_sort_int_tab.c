int	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return (1);
}

void	sort_int_tab(int *tab, int size)
{
	int i;
	int is_swap;

	is_swap = 1;
	while (is_swap)
	{
		i = -1;
		is_swap = 0;
		while (++i < size - 1)
		{
			if (tab[i] < tab[i + 1])
				is_swap = ft_swap(&tab[i], &tab[i + 1]);
		}
	}
}

#include <stdio.h>
int main(void)
{
	int tab[7] = {2, 4, 1, 5, 6, 7, 3};
	ft_sort_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
		printf("%d", tab[i++]);
}
